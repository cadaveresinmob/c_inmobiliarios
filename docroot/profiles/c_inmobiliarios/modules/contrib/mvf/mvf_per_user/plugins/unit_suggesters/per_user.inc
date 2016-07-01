<?php

/**
 * @file
 * Unit suggester plugin that suggests unit on per user settings.
 */

$plugin = array(
  'title' => t('Per User'),
  'description' => t('Output the unit, in which the currently logged in user has specified to view it.'),
  'applicable callback' => TRUE,
  'enabled callback' => 'mvf_unit_suggester_per_user_enabled',
  'disabled callback' => 'mvf_unit_suggester_per_user_disabled',
  'settings form callback' => 'mvf_unit_suggester_per_user_form',
  'suggest unit callback' => 'mvf_unit_suggester_per_user_unit',
);

/**
 * Notification for unit suggester that it was enabled in some formatter.
 *
 * Whenever some unit suggester is enabled in any instance/formatter this
 * function is invoked in the corresponding unit suggester plugin in order to
 * allow the unit suggester to react and do some necessary initialization tasks.
 *
 * @param object $measure
 *   Fully loaded 'units_measure' entity, on which is set up the MVF field
 * @param array $field
 *   Field API field definition array of MVF field
 * @param array $instance
 *   Field API instance definition array of MVF field
 * @param string $view_mode
 *   View mode (key in $instance['display'] array) in which your unit suggester
 *   was enabled. It may be NULL, if your unit suggester is enabled on the
 *   instance level
 * @param array $settings
 *   Array of currently stored settings in the provided $instance
 * @param array $plugin
 *   cTools plugin definition array of your unit suggester plugin
 */
function mvf_unit_suggester_per_user_enabled($measure, $field, $instance, $view_mode, $settings = array(), $plugin) {
  // Making sure corresponding unit field is created.
  if (!mvf_per_user_unit_field_load($field)) {
    try {
      $unit_field = array(
        'type' => $field['settings']['meta_info']['unit']['field_type'],
        'field_name' => mvf_per_user_unit_field_name($field),
        // We allow to edit this field via Field UI because folks may want to
        // customize lots of things about it.
        'locked' => FALSE,
        // We will copy settings for our entityreference field from
        // corresponding part of the MVF field.
        'settings' => $field['settings']['unit'],
      );

      $unit_field = field_create_field($unit_field);
      $unit_instance = array(
        'field_name' => $unit_field['field_name'],
        'entity_type' => 'user',
        'bundle' => 'user',
        'label' => t('Output Unit for @instance', array(
          '@instance' => $instance['label'],
        )),
        'description' => t('Specify here in what units you want to see %instance field.', array(
          '%instance' => $instance['label'],
        )),
        'widget' => array(
          'type' => $field['settings']['meta_info']['unit']['widget'],
        ),
      );
      field_create_instance($unit_instance);
    }
    catch (FieldException $e) {
      drupal_set_message($e->getMessage(), 'error');
    }
  }
}

/**
 * Notification for unit suggester that it was disabled in some formatter.
 *
 * Whenever some unit suggester is disabled in any instance/formatter this
 * function is invoked in the corresponding unit suggester plugin in order to
 * allow the unit suggester to react and do some necessary destruction tasks.
 *
 * @param object $measure
 *   Fully loaded 'units_measure' entity, on which is set up the MVF field
 * @param array $field
 *   Field API field definition array of MVF field
 * @param array $instance
 *   Field API instance definition array of MVF field
 * @param string $view_mode
 *   View mode (key in $instance['display'] array) in which your unit suggester
 *   was disabled. It may be NULL, if your unit suggester is disabled on the
 *   instance level
 * @param array $settings
 *   Array of currently stored settings in the provided $instance
 * @param array $plugin
 *   cTools plugin definition array of your unit suggester plugin
 */
function mvf_unit_suggester_per_user_disabled($measure, $field, $instance, $view_mode, $settings = array(), $plugin) {
  // Removing corresponding unit field if this is the last MVF field, where per
  // user unit suggester was enabled.
  $field_map = field_info_field_map();
  if (isset($field_map[$field['field_name']])) {
    $field_info = $field_map[$field['field_name']];
    foreach ($field_info['bundles'] as $entity_type => $bundles) {
      foreach ($bundles as $bundle) {
        $other_instance = field_info_instance($entity_type, $field['field_name'], $bundle);
        $other_view_modes = array_keys($instance['display']);
        $other_view_modes[] = NULL;
        foreach ($other_view_modes as $other_view_mode) {
          $tmp = mvf_unit_suggester_info($plugin, $field, $other_instance, $other_view_mode);
          if ($tmp['enable']) {
            // At least for one display per user output is still enabled, so we
            // should not delete the corresponding unit field.
            return;
          }
        }
      }
    }
  }

  // If we got down here, it means not a single display for this MVF field has
  // per user output enabled. So we will remove the corresponding unit field.
  $unit_field = mvf_per_user_unit_field_load($field);
  field_delete_field($unit_field['field_name']);
}

/**
 * Settings form for 'per_user' mvf unit suggester plugin.
 *
 * @param object $measure
 *   Fully loaded 'units_measure' entity, on which the MVF field is set up
 * @param array $field
 *   Field API field definition array of MVF field
 * @param array $instance
 *   Field API instance definition array of MVF field
 * @param array $settings
 *   Array of currently stored settings in the provided $instance, you are
 *   encouraged to use it as source of #default_value for the form elements
 *   you are defining in this form
 * @param array $plugin
 *   cTools plugin definition array of your unit suggester plugin
 *
 * @return array
 *   Field API form elements definition representing additional settings that
 *   this unit suggester needs for its functionality
 */
function mvf_unit_suggester_per_user_form($measure, $field, $instance, $settings = array(), $plugin) {
  $form = array();

  $form['info'] = array(
    '#markup' => t('Users will be able to specify in what units to output this field in their profile settings, if you enable it here.'),
  );

  return $form;
}

/**
 * Suggest output unit for a MVF field.
 *
 * @param array $items
 *   Array of MVF field items for which you are requested to suggest output
 *   unit
 * @param array $field
 *   Field API field definition array of MVF field
 * @param array $instance
 *   Field API instance definition array of MVF field
 * @param object $entity
 *   Fully loaded entity, for which you are requested to suggest output unit
 * @param string $entity_type
 *   Entity type of $entity
 * @param array $settings
 *   Array of currently stored settings in the provided $instance, you are
 *   encouraged to use it when deciding what output unit to suggest
 * @param array $plugin
 *   cTools plugin definition array of your unit suggester plugin
 *
 * @return int
 *   ID of a 'units_unit' entity, that you suggest as output unit. Two
 *   additional constants can be used as output here:
 *   - MVF_UNIT_ORIGINAL: means to output $items as they are, in whatever
 *     units they were entered
 *   - MVF_UNIT_UNKNOWN: means you cannot make any good suggestion for output
 *     unit
 */
function mvf_unit_suggester_per_user_unit($items, $field, $instance, $entity, $entity_type, $settings = array(), $plugin) {
  if ($GLOBALS['user']->uid == 0) {
    return MVF_UNIT_UNKNOWN;
  }
  // Fully loading the user.
  $account = user_load($GLOBALS['user']->uid);
  $items = field_get_items('user', $account, mvf_per_user_unit_field_name($field));
  if (isset($items[0][mvf_subfield_to_column('unit')]) && $items[0][mvf_subfield_to_column('unit')]) {
    // If there is specified desired output, we suggest that output unit.
    return $items[0][mvf_subfield_to_column('unit')];
  }
  return MVF_UNIT_UNKNOWN;
}
