<?php

/**
 * @file
 * Plugin definition for units converter through Currency module.
 */

$plugin = array(
  'title' => t('Currency'),
  'description' => t('Convert units through Currency module'),
  'convert callback' => 'units_currency_converters_currency',
);

/**
 * Units convert callback for converting through Currency module.
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
function units_currency_converters_currency($value, $from, $to) {
  $rate = CurrencyExchanger::load($from->machine_name, $to->machine_name);
  if ($rate) {
    return currency_multiply($value, $rate);
  }
  return FALSE;
}
