<?php
/**
 * @file
 * ft_c_inmobiliarios_feeds_csv.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ft_c_inmobiliarios_feeds_csv_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'corpses_csv';
  $feeds_importer->config = array(
    'name' => 'Corpses\' csv',
    'description' => 'CSV format importer for Urban corpses',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Promocional*',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Dirección',
            'target' => 'field_gl_address:street',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Municipio*',
            'target' => 'field_gl_address:city',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Provincia*',
            'target' => 'field_gl_address:province',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Tipología de asentamiento principal (ver pestaña ayuda)*',
            'target' => 'field_corpse_type',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'FUENTE (nación rotonda, 6000km, etc)*',
            'target' => 'field_corpose_source',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'enlace web',
            'target' => 'field_url:url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Superficie del terreno (m2)',
            'target' => 'field_corpse_area',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Superficie construida (m2)',
            'target' => 'field_corpse_built_area',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Arquitecto o técnico redactor',
            'target' => 'field_corpse_technician',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'corpse',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['corpses_csv'] = $feeds_importer;

  return $export;
}
