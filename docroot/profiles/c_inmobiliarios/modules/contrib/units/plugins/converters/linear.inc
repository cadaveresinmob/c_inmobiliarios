<?php

/**
 * @file
 * Plugin definition for linear units converter.
 */

$plugin = array(
  'title' => t('Linear'),
  'description' => t('Linear dependency'),
  'convert callback' => 'units_converters_linear',
);

/**
 * Units convert callback for linear dependency logic.
 *
 * Handle cases, when it is linear dependency between units.
 *
 * @param float $value
 *   Value in $from units that should be converted into $to units
 * @param Entity $from
 *   Units entity in which $value is represented
 * @param Entity $to
 *   Units entity into which $value should be converted
 *
 * @return float
 *   $value converted into $to units
 */
function units_converters_linear($value, $from, $to) {
  // We use 'factor' property to convert value firstly to SI unit measure from
  // $from units, and then from SI units we convert it into $to units.
  $si_value = $value * $from->factor;
  return $si_value / $to->factor;
}
