<?php
/**
 * @file
 * ft_c_inmobiliarios_corpses.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ft_c_inmobiliarios_corpses_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_approved_industrial_plots'.
  $field_bases['field_approved_industrial_plots'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_approved_industrial_plots',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_approved_leisure_plots'.
  $field_bases['field_approved_leisure_plots'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_approved_leisure_plots',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_corpse_approved_hotel_beds'.
  $field_bases['field_corpse_approved_hotel_beds'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_approved_hotel_beds',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_corpse_approved_housing'.
  $field_bases['field_corpse_approved_housing'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_approved_housing',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_corpse_area_terrain'.
  $field_bases['field_corpse_area_terrain'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_area_terrain',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'number',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'area' => 'area',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_corpse_attachments'.
  $field_bases['field_corpse_attachments'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_attachments',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_corpse_building_permit'.
  $field_bases['field_corpse_building_permit'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_building_permit',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 1,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_corpse_building_typology'.
  $field_bases['field_corpse_building_typology'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_building_typology',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'corpse_building_type',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_corpse_built_area'.
  $field_bases['field_corpse_built_area'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_built_area',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'number',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'area' => 'area',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_corpse_contractor'.
  $field_bases['field_corpse_contractor'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_contractor',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'corpse_contractor',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_corpse_creditors_meeting'.
  $field_bases['field_corpse_creditors_meeting'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_creditors_meeting',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_corpse_endorser'.
  $field_bases['field_corpse_endorser'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_endorser',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'name',
          'type' => 'property',
        ),
        'target_bundles' => array(),
      ),
      'target_type' => 'user',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_corpse_equipment_plots'.
  $field_bases['field_corpse_equipment_plots'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_equipment_plots',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_corpse_financial_entities'.
  $field_bases['field_corpse_financial_entities'] = array(
    'active' => 1,
    'cardinality' => 10,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_financial_entities',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'financial_entities',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_corpse_floor_area_ratio'.
  $field_bases['field_corpse_floor_area_ratio'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_floor_area_ratio',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_corpse_hotel_beds'.
  $field_bases['field_corpse_hotel_beds'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_hotel_beds',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_corpse_housing'.
  $field_bases['field_corpse_housing'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_housing',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_corpse_industrial_plots'.
  $field_bases['field_corpse_industrial_plots'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_industrial_plots',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_corpse_ine_code_city'.
  $field_bases['field_corpse_ine_code_city'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_ine_code_city',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_corpse_ine_code_province'.
  $field_bases['field_corpse_ine_code_province'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_ine_code_province',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_corpse_leisure_plots'.
  $field_bases['field_corpse_leisure_plots'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_leisure_plots',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_corpse_lic_date_agreement'.
  $field_bases['field_corpse_lic_date_agreement'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_lic_date_agreement',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 1,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_corpse_link_to_news'.
  $field_bases['field_corpse_link_to_news'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_link_to_news',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_corpse_mortgage_amount'.
  $field_bases['field_corpse_mortgage_amount'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_mortgage_amount',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_corpse_partial_plan_date'.
  $field_bases['field_corpse_partial_plan_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_partial_plan_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 1,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_corpse_planned_inhabitants'.
  $field_bases['field_corpse_planned_inhabitants'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_planned_inhabitants',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mathfield',
    'settings' => array(
      'decimal_separator' => '.',
      'expression' => '[field_corpse_housing:0:value] * 3.5',
      'field_dependencies' => array(
        0 => 'field_corpse_housing',
      ),
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'mathfield',
  );

  // Exported field_base: 'field_corpse_promoter'.
  $field_bases['field_corpse_promoter'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_promoter',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'corpse_promoter',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_corpse_prop_description'.
  $field_bases['field_corpse_prop_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_prop_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_corpse_public_domain'.
  $field_bases['field_corpse_public_domain'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_public_domain',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Yes',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_corpse_source'.
  $field_bases['field_corpse_source'] = array(
    'active' => 1,
    'cardinality' => 3,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_source',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'corpse_source',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_corpse_status'.
  $field_bases['field_corpse_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_status',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'corpse_status',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_corpse_status_description'.
  $field_bases['field_corpse_status_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_status_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_corpse_tech_permit'.
  $field_bases['field_corpse_tech_permit'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_tech_permit',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'corpse_technician',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_corpse_technician'.
  $field_bases['field_corpse_technician'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_technician',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'corpse_technician',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_corpse_type'.
  $field_bases['field_corpse_type'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_type',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'corpse_type',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_corpse_urban_plan_date'.
  $field_bases['field_corpse_urban_plan_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_urban_plan_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 1,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_corpse_use'.
  $field_bases['field_corpse_use'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_use',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'corpse_use',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_corpse_used_land'.
  $field_bases['field_corpse_used_land'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_corpse_used_land',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_gl_address'.
  $field_bases['field_gl_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gl_address',
    'indexes' => array(
      'glid' => array(
        0 => 'glid',
      ),
    ),
    'locked' => 0,
    'module' => 'getlocations_fields',
    'settings' => array(
      'autocomplete_bias' => 0,
      'baselayers' => array(
        'DeLorme' => 0,
        'ESRI' => 0,
        'Hybrid' => 1,
        'Map' => 1,
        'NatGeoWorldMap' => 0,
        'OCM' => 0,
        'OCML' => 0,
        'OCMO' => 0,
        'OCMT' => 0,
        'OSM' => 1,
        'OSMBW' => 0,
        'OSMDE' => 0,
        'OceanBasemap' => 0,
        'Physical' => 1,
        'Satellite' => 1,
        'Stamen' => 0,
        'StamenBG' => 0,
        'StamenHY' => 0,
        'StamenLA' => 0,
        'StamenLI' => 0,
        'StamenLT' => 0,
        'Watercolor' => 0,
        'WorldGrayCanvas' => 0,
        'WorldImagery' => 0,
        'WorldPhysical' => 0,
        'WorldShadedRelief' => 0,
        'WorldTerrain' => 0,
        'WorldTopoMap' => 0,
      ),
      'circles_apply' => 0,
      'circles_clickable' => 0,
      'circles_coords' => '',
      'circles_enable' => 0,
      'circles_fillcolor' => '#FF0000',
      'circles_fillopacity' => 0.35,
      'circles_message' => '',
      'circles_radius' => 0,
      'circles_strokecolor' => '#FF0000',
      'circles_strokeopacity' => 0.8,
      'circles_strokeweight' => 3,
      'city_autocomplete' => 1,
      'comment_map_marker' => 'drupal',
      'controltype' => 'small',
      'country' => 'ES',
      'draggable' => 1,
      'fullscreen' => 0,
      'fullscreen_controlposition' => '',
      'geocoder_enable' => 0,
      'geojson_data' => '',
      'geojson_enable' => 0,
      'geojson_options' => '',
      'getdirections_link' => 0,
      'gps_bubble' => 0,
      'gps_button' => 0,
      'gps_button_label' => '',
      'gps_center' => 0,
      'gps_geocode' => 0,
      'gps_marker' => '',
      'gps_marker_title' => '',
      'gps_type' => 0,
      'gps_zoom' => -1,
      'highlight_enable' => 0,
      'highlight_fillcolor' => '#FF0000',
      'highlight_fillopacity' => 0.35,
      'highlight_radius' => 10,
      'highlight_strokecolor' => '#FF0000',
      'highlight_strokeopacity' => 0.8,
      'highlight_strokeweight' => 3,
      'input_additional_required' => 4,
      'input_additional_weight' => 0,
      'input_additional_width' => 40,
      'input_address_width' => 40,
      'input_city_required' => 1,
      'input_city_weight' => 0,
      'input_city_width' => 40,
      'input_clear_button_weight' => 0,
      'input_country_required' => 0,
      'input_country_weight' => 0,
      'input_country_width' => 40,
      'input_fax_required' => 4,
      'input_fax_weight' => 0,
      'input_fax_width' => 20,
      'input_geobutton_weight' => 0,
      'input_geolocation_button_weight' => 0,
      'input_latitude_weight' => 0,
      'input_latitude_width' => 20,
      'input_longitude_weight' => 0,
      'input_longitude_width' => 20,
      'input_map_marker' => 'blue',
      'input_map_show' => 1,
      'input_map_weight' => 0,
      'input_marker_weight' => 0,
      'input_mobile_required' => 4,
      'input_mobile_weight' => 0,
      'input_mobile_width' => 20,
      'input_name_required' => 4,
      'input_name_weight' => 0,
      'input_name_width' => 40,
      'input_phone_required' => 4,
      'input_phone_weight' => 0,
      'input_phone_width' => 20,
      'input_postal_code_required' => 0,
      'input_postal_code_weight' => 0,
      'input_postal_code_width' => 40,
      'input_province_required' => 0,
      'input_province_weight' => 0,
      'input_province_width' => 40,
      'input_smart_ip_button_weight' => 0,
      'input_street_required' => 0,
      'input_street_weight' => 0,
      'input_street_width' => 40,
      'jquery_colorpicker_enabled' => 0,
      'kml_group' => array(
        'kml_url' => '',
        'kml_url_button' => 0,
        'kml_url_button_label' => 'Kml Layer',
        'kml_url_button_state' => 0,
        'kml_url_click' => 1,
        'kml_url_infowindow' => 0,
        'kml_url_viewport' => 1,
      ),
      'latlon_warning' => 1,
      'latlong' => '40,0',
      'map_backgroundcolor' => '',
      'map_marker' => 'drupal',
      'map_settings_allow' => 0,
      'mapcontrolposition' => '',
      'mapheight' => '400px',
      'maptype' => 'OSM',
      'mapwidth' => '95%',
      'maxzoom_map' => -1,
      'minzoom_map' => -1,
      'mtc' => 'standard',
      'node_map_marker' => 'drupal',
      'nodoubleclickzoom' => 0,
      'nokeyboard' => 0,
      'only_continents' => '',
      'only_countries' => '',
      'overview' => 0,
      'overview_opened' => 0,
      'pancontrol' => 1,
      'pancontrolposition' => '',
      'per_item_marker' => 0,
      'polygons_clickable' => 0,
      'polygons_coords' => '',
      'polygons_enable' => 0,
      'polygons_fillcolor' => '#FF0000',
      'polygons_fillopacity' => 0.35,
      'polygons_message' => '',
      'polygons_strokecolor' => '#FF0000',
      'polygons_strokeopacity' => 0.8,
      'polygons_strokeweight' => 3,
      'polylines_clickable' => 0,
      'polylines_coords' => '',
      'polylines_enable' => 0,
      'polylines_message' => '',
      'polylines_strokecolor' => '#FF0000',
      'polylines_strokeopacity' => 0.8,
      'polylines_strokeweight' => 3,
      'province_autocomplete' => 1,
      'rectangles_apply' => 0,
      'rectangles_clickable' => 0,
      'rectangles_coords' => '',
      'rectangles_dist' => 0,
      'rectangles_enable' => 0,
      'rectangles_fillcolor' => '#FF0000',
      'rectangles_fillopacity' => 0.35,
      'rectangles_message' => '',
      'rectangles_strokecolor' => '#FF0000',
      'rectangles_strokeopacity' => 0.8,
      'rectangles_strokeweight' => 3,
      'restrict_by_country' => 1,
      'scale' => 0,
      'scalecontrolposition' => '',
      'scrollwheel' => 0,
      'search_country' => 'ES',
      'search_places' => 0,
      'search_places_dd' => 0,
      'search_places_label' => 'Google Places Search',
      'search_places_list' => 0,
      'search_places_placeholder' => '',
      'search_places_position' => 'outside_above',
      'search_places_size' => 40,
      'show_bubble_on_one_marker' => 0,
      'show_maplinks' => 0,
      'show_search_distance' => 0,
      'street_num_pos' => 1,
      'streetview_settings_allow' => 0,
      'sv_addresscontrol' => 1,
      'sv_addresscontrolposition' => '',
      'sv_clicktogo' => 1,
      'sv_enable' => 0,
      'sv_heading' => 0,
      'sv_imagedatecontrol' => 0,
      'sv_linkscontrol' => 1,
      'sv_pancontrol' => 1,
      'sv_pancontrolposition' => '',
      'sv_pitch' => 0,
      'sv_scrollwheel' => 1,
      'sv_showfirst' => 0,
      'sv_zoom' => 1,
      'sv_zoomcontrol' => 'default',
      'sv_zoomcontrolposition' => '',
      'svcontrolposition' => '',
      'use_address' => 2,
      'use_clear_button' => 1,
      'use_country_dropdown' => 1,
      'use_geolocation_button' => 0,
      'use_smart_ip_button' => 0,
      'use_smart_ip_latlon' => 0,
      'user_map_marker' => 'drupal',
      'views_search_center' => 0,
      'views_search_marker' => 'drupal',
      'views_search_marker_enable' => 0,
      'views_search_marker_toggle' => 0,
      'views_search_marker_toggle_active' => 0,
      'views_search_radshape_enable' => 0,
      'views_search_radshape_fillcolor' => '#FF0000',
      'views_search_radshape_fillopacity' => 0.35,
      'views_search_radshape_strokecolor' => '#FF0000',
      'views_search_radshape_strokeopacity' => 0.8,
      'views_search_radshape_strokeweight' => 3,
      'views_search_radshape_toggle' => 0,
      'views_search_radshape_toggle_active' => 0,
      'vocabulary_map_marker' => 'drupal',
      'what3words_collect' => 0,
      'zoom' => 4,
      'zoomcontrolposition' => '',
    ),
    'translatable' => 0,
    'type' => 'getlocations_fields',
  );

  // Exported field_base: 'field_urban_name'.
  $field_bases['field_urban_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_urban_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_url'.
  $field_bases['field_url'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_url',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_zoning_protection_level'.
  $field_bases['field_zoning_protection_level'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_zoning_protection_level',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
