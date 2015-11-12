<?php

/**
 * @file
 * Definition of MVFUnitSuggeserOriginal class.
 */

/**
 * Easiest implementation of suggester for output units in MVF field.
 *
 * Simply output in them in whatever units values were entered.
 */
class MVFUnitSuggesterOriginal implements MVFUnitSuggestable {

  public static function getInfo($measure, $field, $instance) {
    return array(
      'title' => t('Original Units'),
    );
  }

  public static function getSettingsForm($measure, $field, $instance, $settings = array()) {
    return array();
  }

  public static function suggestUnit($items, $field, $instance, $entity, $entity_type, $settings = array()) {
    return MVF_UNIT_ORIGINAL;
  }
}
