<?php

/**
 * @file
 * Definition of EntityReference_SelectionHandler_Generic_units_unit class.
 */

/**
 * EntityReference_SelectionHandler_Generic class altered for MVF needs.
 *
 * For MVF only one bundle allowed for referencing per field. In field settings
 * form checkboxes are substituted to radio buttons when selecting bundles if
 * the field, that is being configured, is a MVF one.
 */
class EntityReference_SelectionHandler_Generic_units_unit extends EntityReference_SelectionHandler_Generic {

  public static function settingsForm($field, $instance) {
    $form = parent::settingsForm($field, $instance);
    // We convert checkboxes to radios only if the field is a MVF field. Some
    // people might want use entity reference stand alone for referencing
    // entity type 'units_unit' and might want to have checkboxes there.
    // In order to decide whether it's a MVF field we have to reload field
    // definition array from Field API, because our $field parameter might be
    // just a mocked up field in MVF module.
    $original_field = field_info_field($field['field_name']);
    $is_mvf_field = in_array($original_field['type'], mvf_field_types());
    if (!$is_mvf_field) {
      return $form;
    }

    // Overriding some properties of target bundles element, we need it to be
    // radio buttons.
    $form['target_bundles'] = array(
      '#type' => 'radios',
      '#required' => TRUE,
      '#description' => NULL,
    ) + $form['target_bundles'];
    if (!isset($form['target_bundles']['#element_validate'])) {
      $form['target_bundles']['#element_validate'] = array();
    }
    // Converting #default_value from format expected by 'checkboxes' to the
    // format expected by 'radios'.
    if (isset($form['target_bundles']['#default_value']) && is_array($form['target_bundles']['#default_value'])) {
      $form['target_bundles']['#default_value'] = array_pop($form['target_bundles']['#default_value']);
    }
    // Since we changed it from checkboxes to radios, we need to keep the value
    // of this element according to the format expected as it was still
    // checkboxes. This validation callback will take care of that.
    array_unshift($form['target_bundles']['#element_validate'], 'mvf_entityreference_selection_target_bundles_validate');

    if (empty($form['target_bundles']['#options'])) {
      $form['target_bundles']['disclaimer'] = array(
        '#markup' => t('Measured Value Field module requires at least one measure imported/added in Units module.'),
      );
    }
    return $form;
  }
}
