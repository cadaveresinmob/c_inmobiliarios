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
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'encoding' => 'UTF-8',
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
            'source' => 'nombre_promocional',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'nombre_urbanistico',
            'target' => 'field_urban_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Latitud',
            'target' => 'field_gl_address:latitude',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Longitud',
            'target' => 'field_gl_address:longitude',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'direccion',
            'target' => 'field_gl_address:street',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'municipio',
            'target' => 'field_gl_address:city',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'comunidad_autonoma',
            'target' => 'field_gl_address:province',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'tipologia_asentamiento_principal',
            'target' => 'field_corpse_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'tipologia_asentamiento_secundario',
            'target' => 'field_corpse_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'fuente',
            'target' => 'field_corpse_source',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'archivos_adjuntos',
            'target' => 'field_url:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'enlaces_noticias',
            'target' => 'field_corpse_link_to_news:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'plan_parcial_planeamiento_fecha_licencia',
            'target' => 'field_corpse_partial_plan_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'proyecto_urbanistico_planeamiento_fecha_licencia',
            'target' => 'field_corpse_urban_plan_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'licencia_obras_planeamiento_tecnico_redactor',
            'target' => 'field_corpse_tech_permit',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'entidades_financieras',
            'target' => 'field_corpse_financial_entities',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'zonificacion_nivel_proteccion',
            'target' => 'field_zoning_protection_level',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'concurso_acreedores',
            'target' => 'field_corpse_creditors_meeting',
            'unique' => FALSE,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'cuantia_hipoteca',
            'target' => 'field_corpse_mortgage_amount',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => 'numero_de_visitantes_previsto_aplicable_centros_de_ocio_planeamiento',
            'target' => 'field_corpse_planned_visitors',
            'unique' => FALSE,
            'language' => 'und',
          ),
          20 => array(
            'source' => 'otras_fechas_planeamiento_fecha_licencia',
            'target' => 'field_corpse_other_dates',
            'unique' => FALSE,
            'language' => 'und',
          ),
          21 => array(
            'source' => 'recursos_interpuestos',
            'target' => 'field_corpse_filed_appeals',
            'unique' => FALSE,
            'language' => 'und',
          ),
          22 => array(
            'source' => 'convenio_urbanistico_planeamiento_tecnico_redactor',
            'target' => 'field_technician_plan_agreement',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          23 => array(
            'source' => 'modificacion_pgou_planeamiento_fecha_licencia',
            'target' => 'field_pgou_modification_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          24 => array(
            'source' => 'modificacion_pgou_planeamiento_tecnico_redactor',
            'target' => 'field_technician_pgou_modif',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          25 => array(
            'source' => 'proyecto_urbanistico_planeamiento_tecnico_redactor',
            'target' => 'field_technician_urban_plan',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          26 => array(
            'source' => 'convenio_urbanistico_politica',
            'target' => 'field_politician_plan_agreement',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          27 => array(
            'source' => 'plan_parcial_urbanistico_politica',
            'target' => 'field_politician_partial_plan',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          28 => array(
            'source' => 'modificacion_urbanistico_politica',
            'target' => 'field_politician_pgou_modifi',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          29 => array(
            'source' => 'proyecto_urbanistico_politica',
            'target' => 'field_politician_urban_plan',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          30 => array(
            'source' => 'licencia_urbanistico_politica',
            'target' => 'field_politician_building_permit',
            'unique' => FALSE,
            'language' => 'und',
          ),
          31 => array(
            'source' => 'otros_urbanistico_politica',
            'target' => 'field_politicians_other',
            'unique' => FALSE,
            'language' => 'und',
          ),
          32 => array(
            'source' => 'sentencias_judiciales',
            'target' => 'field_court_sentence',
            'unique' => FALSE,
            'language' => 'und',
          ),
          33 => array(
            'source' => 'n_fecha_sentencias',
            'target' => 'field_number_of_sentences',
            'unique' => FALSE,
            'language' => 'und',
          ),
          34 => array(
            'source' => 'tribunal_dicta',
            'target' => 'field_court_that_rules_sentence',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          35 => array(
            'source' => 'fallo',
            'target' => 'field_ruling_sentence',
            'unique' => FALSE,
            'language' => 'und',
          ),
          36 => array(
            'source' => 'hipoteca_cargas',
            'target' => 'field_mortgage_charges',
            'unique' => FALSE,
            'language' => 'und',
          ),
          37 => array(
            'source' => 'viviendas_construidas',
            'target' => 'field_corpse_housing',
            'unique' => FALSE,
            'language' => 'und',
          ),
          38 => array(
            'source' => 'plazas_hoteleras_construidas',
            'target' => 'field_corpse_hotel_beds',
            'unique' => FALSE,
            'language' => 'und',
          ),
          39 => array(
            'source' => 'parcelas_uso_industrial_construidas',
            'target' => 'field_corpse_industrial_plots',
            'unique' => FALSE,
            'language' => 'und',
          ),
          40 => array(
            'source' => 'parcelas_uso_comercial_construidas',
            'target' => 'field_corpse_commercial_plots',
            'unique' => FALSE,
            'language' => 'und',
          ),
          41 => array(
            'source' => 'parcelas_uso_equipamiento_construidas',
            'target' => 'field_corpse_equipment_plots',
            'unique' => FALSE,
            'language' => 'und',
          ),
          42 => array(
            'source' => 'estado_actual',
            'target' => 'field_corpse_status',
            'unique' => FALSE,
            'language' => 'und',
          ),
          43 => array(
            'source' => 'promotor',
            'target' => 'field_corpse_promoter',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          44 => array(
            'source' => 'constructor',
            'target' => 'field_corpse_contractor',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          45 => array(
            'source' => 'arquitecto_o_tecnico_redactor',
            'target' => 'field_corpse_technician',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          46 => array(
            'source' => 'descripcion_propiedad',
            'target' => 'field_corpse_prop_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          47 => array(
            'source' => 'ubicacion_codigo_ine_municipio',
            'target' => 'field_corpse_ine_code_city',
            'unique' => FALSE,
            'language' => 'und',
          ),
          48 => array(
            'source' => 'ubicacion_codigo_ine_provincia',
            'target' => 'field_corpse_ine_code_province',
            'unique' => FALSE,
            'language' => 'und',
          ),
          49 => array(
            'source' => 'uso',
            'target' => 'field_corpse_use',
            'term_search' => '0',
            'autocreate' => 0,
            'language' => 'und',
          ),
          50 => array(
            'source' => 'tipologia_edificatoria',
            'target' => 'field_corpse_building_typology',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          51 => array(
            'source' => 'edificabilidad_absoluta_planificada_o_aprobada',
            'target' => 'field_corpse_floor_area_ratio',
            'unique' => FALSE,
            'language' => 'und',
          ),
          52 => array(
            'source' => 'viviendas_aprobadas_en_planeamiento',
            'target' => 'field_corpse_approved_housing',
            'unique' => FALSE,
            'language' => 'und',
          ),
          53 => array(
            'source' => 'plazas_hoteleras_aprobadas_en_planeamiento',
            'target' => 'field_corpse_approved_hotel_beds',
            'unique' => FALSE,
            'language' => 'und',
          ),
          54 => array(
            'source' => 'parcelas_uso_industrial_aprobadas_en_planeamiento',
            'target' => 'field_approved_industrial_plots',
            'unique' => FALSE,
            'language' => 'und',
          ),
          55 => array(
            'source' => 'convenio_urbanistico_planeamiento_fecha_licencia',
            'target' => 'field_corpse_lic_date_agreement:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          56 => array(
            'source' => 'licencia_obras_planeamiento_fecha_licencia',
            'target' => 'field_corpse_building_permit:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          57 => array(
            'source' => 'material_grafico',
            'target' => 'field_url:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          58 => array(
            'source' => 'comentarios_otros',
            'target' => 'field_corpse_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          59 => array(
            'source' => 'comentarios_otras_opciones',
            'target' => 'field_corpse_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          60 => array(
            'source' => ' comentarios_tipologia',
            'target' => 'field_corpse_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          61 => array(
            'source' => 'figuras_proteccion_ambiental',
            'target' => 'field_env_protection_entity',
            'unique' => FALSE,
            'language' => 'und',
          ),
          62 => array(
            'source' => 'nombre_figuras_proteccion_ambiental',
            'target' => 'field_env_protection_entity_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          63 => array(
            'source' => 'corpse_category',
            'target' => 'field_corpse_category',
            'unique' => FALSE,
            'language' => 'und',
          ),
          64 => array(
            'source' => 'enlace_web',
            'target' => 'field_url:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          65 => array(
            'source' => 'superficie_terreno',
            'target' => 'field_corpse_area_terrain:value',
            'unique' => FALSE,
            'language' => 'und',
          ),
          66 => array(
            'source' => 'superficie_terreno_units',
            'target' => 'field_corpse_area_terrain:unit',
            'unit_notation' => 'machine_name',
            'language' => 'und',
          ),
          67 => array(
            'source' => 'superficie_construida',
            'target' => 'field_corpse_built_area:value',
            'unique' => FALSE,
            'language' => 'und',
          ),
          68 => array(
            'source' => 'superficie_construida_units',
            'target' => 'field_corpse_built_area:unit',
            'unit_notation' => 'machine_name',
            'language' => 'und',
          ),
          69 => array(
            'source' => 'padre_adoptivo',
            'target' => 'field_corpse_endorsers',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          70 => array(
            'source' => 'parcelas_uso_equipamiento_aprobadas_planeamiento',
            'target' => 'field_approved_equipments_plots',
            'unique' => FALSE,
            'language' => 'und',
          ),
          71 => array(
            'source' => 'parcelas_uso_comercial_aprobadas_en_planeamiento',
            'target' => 'field_approved_commercial_plots',
            'unique' => FALSE,
            'language' => 'und',
          ),
          72 => array(
            'source' => 'plan_parcial_planeamiento_tecnico_redactor',
            'target' => 'field_technician_partial_plan',
            'term_search' => '0',
            'autocreate' => 1,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'corpse',
        'insert_new' => 1,
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['corpses_csv'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'nacion_rotonda_importer';
  $feeds_importer->config = array(
    'name' => 'Nación Rotonda Importer',
    'description' => 'CSV importer for Urban corpses from Nación Rotonda',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
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
            'source' => 'nombre_promocional',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'longitud',
            'target' => 'field_gl_address:longitude',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'latitud',
            'target' => 'field_gl_address:latitude',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'enlace_web',
            'target' => 'field_url:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'corpse_category',
            'target' => 'field_corpse_category',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'creator',
            'target' => 'user_name',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'fuente',
            'target' => 'field_corpse_source',
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
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['nacion_rotonda_importer'] = $feeds_importer;

  return $export;
}
