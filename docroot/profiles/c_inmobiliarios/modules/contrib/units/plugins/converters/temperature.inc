<?php

/**
 * @file
 * Plugin definition for temperature units converter.
 */

$plugin = array(
  'title' => t('Temperature'),
  'description' => t('Conversions of temperature measures.'),
  'convert callback' => 'units_converters_temperature',
);

/**
 * Units convert callback for temperature measures.
 *
 * Convert temperature between different units of measurement.
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
function units_converters_temperature($value, $from, $to) {
  $case = $from->machine_name . '_' . $to->machine_name;
  switch ($case) {
    case 'celsius_fahrenheit':
      return $value * (9 / 5) + 32;
      break;

    case 'celsius_kelvin':
      return $value + 273.15;
      break;

    case 'fahrenheit_kelvin':
      return ($value - 32) * (5 / 9) + 273.15;
      break;

    case 'fahrenheit_celsius':
      return ($value - 32) * (5 / 9);
      break;

    case 'kelvin_fahrenheit':
      return ($value - 273.15) * (9 / 5) + 32;
      break;

    case 'kelvin_celsius':
      return $value - 273.15;
      break;
  }

  // We are not supposed to fall through the switch above, so if we ever happen,
  // then something is wrong and we return a negative result.
  return FALSE;
}
