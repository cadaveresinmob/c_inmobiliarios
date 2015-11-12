<?php
/**
 * @file
 * ft_c_inmobiliarios_corpses.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ft_c_inmobiliarios_corpses_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ft_c_inmobiliarios_corpses_node_info() {
  $items = array(
    'corpse' => array(
      'name' => t('Corpse'),
      'base' => 'node_content',
      'description' => t('A real state corpse is an architectonic or urban project which is unfinished infra-used or empty'),
      'has_title' => '1',
      'title_label' => t('Promotional name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_units_measure().
 */
function ft_c_inmobiliarios_corpses_default_units_measure() {
  $items = array();
  $items['area'] = entity_import('units_measure', '{
    "measure" : "area",
    "label" : "Area",
    "description" : "",
    "converter" : "linear",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_units_unit().
 */
function ft_c_inmobiliarios_corpses_default_units_unit() {
  $items = array();
  $items['area_hectares'] = entity_import('units_unit', '{
    "measure" : "area",
    "machine_name" : "area_hectares",
    "label" : "ha",
    "symbol" : "Hectares",
    "description" : "",
    "factor" : "10000",
    "rdf_mapping" : []
  }');
  $items['area_square_km'] = entity_import('units_unit', '{
    "measure" : "area",
    "machine_name" : "area_square_km",
    "label" : "km\\u00b2",
    "symbol" : "Square km",
    "description" : "",
    "factor" : "1000000",
    "rdf_mapping" : []
  }');
  $items['area_square_meters'] = entity_import('units_unit', '{
    "measure" : "area",
    "machine_name" : "area_square_meters",
    "label" : "m\\u00b2",
    "symbol" : "Square meters",
    "description" : "",
    "factor" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
