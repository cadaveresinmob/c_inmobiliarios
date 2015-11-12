<?php

/**
 * @file
 * Documentation for MVF module.
 */

/**
 * Hook to collect a list of available Unit Suggesters from other modules.
 *
 * Unit suggester is a PHP class, that implements interface MVFUnitSuggestable.
 * Such PHP class should be able to suggest output unit for MVF field, when
 * things come to formatting an MVF field. It should determine its suggest based
 * on current context, eg.: current user's profile, current language, its module
 * settings, etc. See below an example of such PHP class. Also, see description
 * of MVFUnitSuggestable interface. In order to reduce confusion name your
 * suggester classes following such pattern:
 * MyModuleNameUnitSuggesterDescription, eg.: MVFUnitSuggesterLocale or
 * MVFUnitSuggesterHardCoded
 *
 * @return array
 *   Array of Unit Suggesters PHP class names, that your module wants to provide
 *   to MVF module.
 */
function hook_mvf_unit_suggester_info() {
  return array(
    // We will just provide a single Unit Suggester class.
    'DummyUnitSuggesterDummy',
  );
}

/**
 * Dummy example of how to write your own Unit Suggester class.
 *
 * In this Unit Suggester class is shown how to:
 * - reject to suggest anything. It is useful when your Unit Suggester or module
 *   for some reason cannot obtain enough information about context to do a
 *   reasonable suggestion for output unit
 * - use settings form for storing settings on per MVF instance basis
 */
class DummyUnitSuggesterDummy implements MVFUnitSuggestable {

  public static function getInfo($measure, $field, $instance) {
    return array(
      'title' => t('I am a dummy suggester.'),
    );
  }

  public static function getSettingsForm($measure, $field, $instance, $settings = NULL) {
    $form = array();

    $form['no_suggestion'] = array(
      '#type' => 'checkbox',
      '#title' => t('No Suggestion'),
      '#description' => t('If this checkbox is checked, this Unit Suggester will not suggest any output unit.'),
      '#default_value' => isset($settings['no_suggestion']) ? $settings['no_suggestion'] : NULL,
    );

    return $form;
  }

  public static function suggestUnit($items, $field, $instance, $entity, $entity_type, $settings = NULL) {
    if ($settings['no_suggestion']) {
      // Whoups! According it its settings, this class is not allowed to suggest
      // anything.
      return MVF_UNIT_UNKNOWN;
    }

    // To keep it simple, let's always suggest the unit, in which 1st item from
    // $items is stored.
    return $items[0][mvf_subfield_to_column('unit')];
  }
}
