<?php

/**
 * @file
 * Unit suggester plugin that suggests the unit in which value is entered.
 */

$plugin = array(
  'title' => t('Original Units'),
  'description' => t('Output value in units, in which it was originally entered.'),
  'applicable callback' => TRUE,
  'enabled callback' => NULL,
  'disabled callback' => NULL,
  'settings form callback' => NULL,
  'suggest unit callback' => 'mvf_unit_suggester_original_unit',
);

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
function mvf_unit_suggester_original_unit($items, $field, $instance, $entity, $entity_type, $settings = array(), $plugin) {
  return MVF_UNIT_ORIGINAL;
}
