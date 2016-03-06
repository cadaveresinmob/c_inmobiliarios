<?php

/**
 * @file
 * MVF integration with Devel Generate module.
 */

/**
 * Generate dummy values for MVF field.
 */
function mvf_devel_generate($object, $field, $instance, $bundle) {
  $measure = mvf_measure_extract($field);
  $min = isset($instance['settings']['mvf']['min'][mvf_subfield_to_column('value')]) && $instance['settings']['mvf']['min'][mvf_subfield_to_column('value')] && isset($instance['settings']['mvf']['min'][mvf_subfield_to_column('unit')]) && is_numeric($instance['settings']['mvf']['min'][mvf_subfield_to_column('unit')]);
  $max = isset($instance['settings']['mvf']['max'][mvf_subfield_to_column('value')]) && $instance['settings']['mvf']['max'][mvf_subfield_to_column('value')] && isset($instance['settings']['mvf']['max'][mvf_subfield_to_column('unit')]) && is_numeric($instance['settings']['mvf']['max'][mvf_subfield_to_column('unit')]);

  // Picking random unit from $measure, in which we will generate result.
  $units = units_unit_by_measure_load_multiple($measure);
  $unit = array_rand($units);
  $unit = $units[$unit];

  if ($min) {
    $min_unit = units_unit_load($instance['settings']['mvf']['min'][mvf_subfield_to_column('unit')]);
    $min = units_convert($instance['settings']['mvf']['min'][mvf_subfield_to_column('value')], $min_unit->machine_name, $unit->machine_name);
  }
  else {
    $min = 0;
  }

  if ($max) {
    $max_unit = units_unit_load($instance['settings']['mvf']['max'][mvf_subfield_to_column('unit')]);
    $max = units_convert($instance['settings']['mvf']['max'][mvf_subfield_to_column('value')], $max_unit->machine_name, $unit->machine_name);
  }
  else {
    // Just some reasonable upper bound on what we will generate.
    $max = 999;
  }

  $value = rand($min, $max);
  return array(
    mvf_subfield_to_column('value') => $value,
    mvf_subfield_to_column('unit') => $unit->umid,
  );
}
