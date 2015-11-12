<?php

/**
 * @file
 * Definition of MVFUnitSuggestable interface.
 */

/**
 * Interface that declares necessary methods for Unit Suggesters.
 */
interface MVFUnitSuggestable {

  /**
   * Generate basic information about this Unit Suggester.
   *
   * @param object $measure
   *   Fully loaded 'units_measure' entity, on which is set up the MVF field
   * @param array $field
   *   Field API field definition array of MVF field
   * @param array $instance
   *   Field API instance definition array of MVF field
   *
   * @return array|null
   *   Array of information about this Unit Suggester. If for some reason this
   *   Unit Suggester cannot be applied to provided $field and $instance, then
   *   return NULL. If returned array, such array should have the following
   *   structure:
   *   - title: (string) Human readable name of Unit Suggester
   */
  public static function getInfo($measure, $field, $instance);

  /**
   * Generate form elements array of extra settings for this Unit Suggester.
   *
   * These settings will be stored by MVF module in $instance of a MVF field.
   * Consequently, these settings apply on per instance basis.
   *
   * @param object $measure
   *   Fully loaded 'units_measure' entity, on which is set up the MVF field
   * @param array $field
   *   Field API field definition array of MVF field
   * @param array $instance
   *   Field API instance definition array of MVF field
   * @param array $settings
   *   Array of currently stored settings in the provided $instance, you are
   *   encouraged to use it as source of #default_value for the form elements
   *   you are defining in this method
   *
   * @return array
   *   Field API form elements definition representing additional settings that
   *   this Unit Suggester needs for its functionality
   */
  public static function getSettingsForm($measure, $field, $instance, $settings = array());

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
   *
   * @return int
   *   ID of a 'units_unit' entity, that you suggest as output unit. Two
   *   additional constants can be used as output here:
   *   - MVF_UNIT_ORIGINAL: means to output $items as they are, in whatever
   *     units they were entered
   *   - MVF_UNIT_UNKNOWN: means you cannot make any good suggestion for output
   *     unit
   */
  public static function suggestUnit($items, $field, $instance, $entity, $entity_type, $settings = array());
}
