<?php

/**
 * @file
 * Definition of MVFUnitSuggeserLocale class.
 */

/**
 * Implementation of MVF suggester based on current locale.
 *
 * Each enabled locale in the website have associated default output unit for
 * each MVF. This suggester does the job of relating MVF units to locales and
 * the job of suggesting the correct one based on the value of current locale.
 */
class MVFUnitSuggesterLocale implements MVFUnitSuggestable {

  public static function getInfo($measure, $field, $instance) {
    return array(
      'title' => t('Per Locale'),
    );
  }

  public static function getSettingsForm($measure, $field, $instance, $settings = array()) {
    $form = array();

    $options = array(
      MVF_UNIT_ORIGINAL => t('Original Unit'),
    );
    foreach (units_unit_by_measure_load_multiple($measure) as $unit) {
      $options[reset(entity_extract_ids('units_unit', $unit))] = entity_label('units_unit', $unit);
    }
    foreach (language_list() as $language) {
      $form[$language->language] = array(
        '#type' => 'select',
        '#title' => $language->name,
        '#options' => $options,
        '#default_value' => isset($settings[$language->language]) ? $settings[$language->language] : NULL,
      );
    }

    return $form;
  }

  public static function suggestUnit($items, $field, $instance, $entity, $entity_type, $settings = array()) {
    global $language;
    return isset($settings[$language->language]) ? $settings[$language->language] : MVF_UNIT_UNKNOWN;
  }
}
