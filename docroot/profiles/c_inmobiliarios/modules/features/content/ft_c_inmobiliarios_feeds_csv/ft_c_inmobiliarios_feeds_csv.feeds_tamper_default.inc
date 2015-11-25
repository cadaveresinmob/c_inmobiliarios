<?php
/**
 * @file
 * ft_c_inmobiliarios_feeds_csv.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ft_c_inmobiliarios_feeds_csv_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'corpses_csv-enlace_web-explode';
  $feeds_tamper->importer = 'corpses_csv';
  $feeds_tamper->source = 'enlace_web';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['corpses_csv-enlace_web-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'corpses_csv-enlaces_noticia-explode';
  $feeds_tamper->importer = 'corpses_csv';
  $feeds_tamper->source = 'enlaces_noticia';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['corpses_csv-enlaces_noticia-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'corpses_csv-fuente-explode';
  $feeds_tamper->importer = 'corpses_csv';
  $feeds_tamper->source = 'fuente';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['corpses_csv-fuente-explode'] = $feeds_tamper;

  return $export;
}
