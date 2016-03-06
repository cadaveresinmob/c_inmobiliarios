<?php

/**
 * @file
 * Integration with Feeds of MVF module.
 */

/**
 * Implements hook_feeds_processor_targets().
 */
function mvf_feeds_processor_targets($entity_type, $bundle) {
  $targets = array();

  $mvf_types = mvf_field_types();
  foreach (field_info_instances($entity_type, $bundle) as $field_name => $instance) {
    $field = field_info_field($field_name);

    if (in_array($field['type'], $mvf_types)) {
      $targets[$field_name] = array(
        'name' => check_plain($instance['label']),
        'callback' => 'mvf_feeds_set_target',
        'description' => t('The @label field of the entity in format "123.45 [unit]".', array('@label' => $instance['label'])),
        'form_callbacks' => array('mvf_feeds_unit_notation_form_callback'),
        'summary_callbacks' => array('mvf_feeds_unit_notation_summary_callback'),
      );

      $targets[$field_name . ':value'] = array(
        'name' => t('@field value', array('@field' => check_plain($instance['label']))),
        'callback' => 'mvf_feeds_set_target',
        'description' => t('The @label field value of the entity in format "123.45".', array('@label' => $instance['label'])),
        'real_target' => $field_name,
      );

      $targets[$field_name . ':unit'] = array(
        'name' => t('@field unit', array('@field' => check_plain($instance['label']))),
        'callback' => 'mvf_feeds_set_target',
        'description' => t('The @label field unit of the entity.', array('@label' => $instance['label'])),
        'form_callbacks' => array('mvf_feeds_unit_notation_form_callback'),
        'summary_callbacks' => array('mvf_feeds_unit_notation_summary_callback'),
        'real_target' => $field_name,
      );
    }
  }

  return $targets;
}

/**
 * MVF callback for mapping.
 *
 * When the callback is invoked, $target contains the name of the field the
 * user has decided to map to and $value contains the value of the feed item
 * element the user has picked as a source.
 *
 * @param $source
 *   A FeedsSource object.
 * @param $entity
 *   The entity to map to.
 * @param $target
 *   The target key on $entity to map to.
 * @param $values
 *   The value to map. MUST be an array.
 * @param array $mapping
 *   Array of mapping settings
 */
function mvf_feeds_set_target(FeedsSource $source, $entity, $target, array $values, array $mapping) {
  if (empty($values)) {
    return;
  }
  $language = $mapping['language'];

  // This function can be invoked in 2 different ways. To map MVF from one cell,
  // or to map MVF from 2 cells. In the former case the $target is just field
  // name. In the latter case, the $target is $field_name:$column, where
  // $column identifies which of the 2 columns right now we are mapping.
  $tmp = explode(':', $target);
  $field_name = array_shift($tmp);
  $columns = empty($tmp) ? array('value', 'unit') : $tmp;

  $field = isset($entity->$field_name) ? $entity->$field_name : array($language => array());

  // Converting from string value into array with the 2 keys:
  // - value: decimal part of the MVF value
  // - unit: unit measure part of the MVF value
  // Depending on the case, only one column may be present in the array
  // representation.
  $exploded_values = array();
  foreach ($values as $value) {
    if (count($columns) == 2) {
      $value = array_map('trim', explode(' ', $value));
      $value = array(
        'value' => $value[0],
        'unit' => $value[1],
      );
    }
    else {
      $value = array(
        reset($columns) => $value,
      );
    }

    $exploded_values[] = $value;
  }

  if (in_array('unit', $columns)) {
    // First, collect a full list of the encountered units, so we can load them
    // later on more efficiently in a single batch.
    $hash_map = array();

    foreach ($exploded_values as $value) {
      $hash_map[$value['unit']] = $value['unit'];
    }

    // Now let's load the units all in a single batch.
    if (!isset($mapping['unit_notation'])) {
      $options = array_keys(mvf_feeds_mapper_unit_notation_options());
      $mapping['unit_notation'] = reset($options);
    }
    switch ($mapping['unit_notation']) {
      case 'umid':
        // Nothing to do. $hash_map already contains perfect hash map for us, as
        // it maps from incoming format to unmid.
        break;

      case 'symbol':
      case 'label':
      case 'machine_name':
        // Construct the hash map for the encountered units.
        $measure = mvf_measure_extract(field_info_field($field_name));
        $hash_map = db_select('units_unit', 'u')
          ->fields('u', array($mapping['unit_notation'], 'umid'))
          ->condition('measure', $measure->measure)
          ->condition($mapping['unit_notation'], array_keys($hash_map))
          ->execute()
          ->fetchAllKeyed();
        break;
    }
  }

  // Now we are ready to actually fill in the MVF field values.
  $i = 0;
  foreach ($exploded_values as $value) {
    if (!in_array('unit', $columns) || isset($hash_map[$value['unit']])) {
      if (in_array('unit', $columns)) {
        $field[$language][$i][mvf_subfield_to_column('unit')] = $hash_map[$value['unit']];
      }
      if (in_array('value', $columns)) {
        $field[$language][$i][mvf_subfield_to_column('value')] = $value['value'];
      }
      $i++;
    }
    else {
      $source->log('mvf', 'Encountered unknown unit @unit', array('@unit' => $value['unit']));
    }
  }

  $entity->$field_name = $field;
}

/**
 * Form callback for specifying form of unit notation to MVF mapper.
 */
function mvf_feeds_unit_notation_form_callback(array $mapping, $target, array $form, array $form_state) {
  return array(
    'unit_notation' => array(
      '#type' => 'select',
      '#title' => t('Unit notation'),
      '#description' => t('Specify, how units are denoted in your Feeds source.'),
      '#options' => mvf_feeds_mapper_unit_notation_options(),
      '#required' => TRUE,
      '#default_value' => isset($mapping['unit_notation']) ? $mapping['unit_notation'] : NULL,
    ),
  );
}

/**
 * Summary callback for unit notation of MVF mapper.
 */
function mvf_feeds_unit_notation_summary_callback(array $mapping, $target, array $form, array $form_state) {
  if (isset($mapping['unit_notation'])) {
    $options = mvf_feeds_mapper_unit_notation_options();
    return t('Units denoted through @unit_notation', array(
      '@unit_notation' => $options[$mapping['unit_notation']],
    ));
  }
  return t('Unit notation pending set up');
}

/**
 * Supportive function for generating options of unit notation.
 *
 * @return array
 *   Array of unit notation options. Keys are machine readable names of the
 *   options whereas values are human readable names
 */
function mvf_feeds_mapper_unit_notation_options() {
  return array(
    'umid' => t('Unit measure ID (umid)'),
    'label' => t('Unit label'),
    'symbol' => t('Symbol'),
    'machine_name' => t('Machine name'),
  );
}
