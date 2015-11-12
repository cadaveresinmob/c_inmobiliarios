<?php

/**
 * @file
 * Definition of MVFUnitSuggeserHardCoded class.
 */

/**
 * Easy implementation of suggester for output units in MVF field.
 *
 * Output all items in one single unit, chosen in formatter setups.
 */
class MVFUnitSuggesterHardCoded implements MVFUnitSuggestable {

  public static function getInfo($measure, $field, $instance) {
    return array(
      'title' => t('Hard Coded'),
    );
  }

  public static function getSettingsForm($measure, $field, $instance, $settings = array()) {
    $form = array();

    $options = array();
    foreach (units_unit_by_measure_load_multiple($measure) as $unit) {
      $options[reset(entity_extract_ids('units_unit', $unit))] = entity_label('units_unit', $unit);
    }

    $form['unit'] = array(
      '#type' => 'select',
      '#title' => t('Output Unit'),
      '#options' => $options,
      '#default_value' => isset($settings['unit']) ? $settings['unit'] : NULL,
    );

    return $form;
  }

  public static function suggestUnit($items, $field, $instance, $entity, $entity_type, $settings = array()) {
    return isset($settings['unit']) ? $settings['unit'] : MVF_UNIT_UNKNOWN;
  }
}
