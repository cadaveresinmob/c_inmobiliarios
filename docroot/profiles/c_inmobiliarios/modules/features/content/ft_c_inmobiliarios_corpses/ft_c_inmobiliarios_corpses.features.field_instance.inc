<?php
/**
 * @file
 * ft_c_inmobiliarios_corpses.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ft_c_inmobiliarios_corpses_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-corpse-field_approved_commercial_plots'.
  $field_instances['node-corpse-field_approved_commercial_plots'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => ',',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => '.',
        ),
        'type' => 'number_decimal',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_approved_commercial_plots',
    'label' => 'Commercial plots',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-corpse-field_approved_equipments_plots'.
  $field_instances['node-corpse-field_approved_equipments_plots'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 55,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_approved_equipments_plots',
    'label' => 'Approved equipments',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-corpse-field_approved_industrial_plots'.
  $field_instances['node-corpse-field_approved_industrial_plots'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => ',',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => '.',
        ),
        'type' => 'number_decimal',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_approved_industrial_plots',
    'label' => 'Industrial plots',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_approved_hotel_beds'.
  $field_instances['node-corpse-field_corpse_approved_hotel_beds'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => ',',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => '.',
        ),
        'type' => 'number_decimal',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_approved_hotel_beds',
    'label' => 'Hotel beds',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_approved_housing'.
  $field_instances['node-corpse-field_corpse_approved_housing'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => ',',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => '.',
        ),
        'type' => 'number_decimal',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_approved_housing',
    'label' => 'Housing',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_area_terrain'.
  $field_instances['node-corpse-field_corpse_area_terrain'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggester_settings' => array(
              'MVFUnitSuggesterHardCoded' => array(
                'enable' => 0,
                'unit' => 7,
                'weight' => -10,
              ),
              'MVFUnitSuggesterLocale' => array(
                'en' => -1,
                'enable' => 0,
                'es' => -1,
                'weight' => -10,
              ),
              'MVFUnitSuggesterOriginal' => array(
                'enable' => 0,
                'weight' => -10,
              ),
            ),
          ),
          'unit' => array(
            'formatter' => 'entityreference_label',
            'link' => 0,
          ),
          'value' => array(
            'decimal_separator' => ',',
            'formatter' => 'number_decimal',
            'prefix_suffix' => 1,
            'scale' => 2,
            'thousand_separator' => '.',
          ),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 31,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'formatter_unit' => array(),
            'formatter_unit_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_area_terrain',
    'label' => 'Area (Terrain)',
    'required' => 0,
    'settings' => array(
      'mvf' => array(
        'max' => array(
          'target_id' => NULL,
          'value' => '',
        ),
        'min' => array(
          'target_id' => NULL,
          'value' => '',
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'label',
            'weight' => 1,
          ),
          'value' => array(
            'weight' => 0,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_attachments'.
  $field_instances['node-corpse-field_corpse_attachments'] = array(
    'bundle' => 'corpse',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_attachments',
    'label' => 'Attachments',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'cadaveres_inmobiliarios',
      'file_extensions' => 'pdf odt doc',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_building_permit'.
  $field_instances['node-corpse-field_corpse_building_permit'] = array(
    'bundle' => 'corpse',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_building_permit',
    'label' => 'Building permit',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '1990:+3',
      ),
      'type' => 'date_popup',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_building_typology'.
  $field_instances['node-corpse-field_corpse_building_typology'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_building_typology',
    'label' => 'Building typology',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_built_area'.
  $field_instances['node-corpse-field_corpse_built_area'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggester_settings' => array(
              'MVFUnitSuggesterHardCoded' => array(
                'enable' => 0,
                'unit' => 7,
                'weight' => -10,
              ),
              'MVFUnitSuggesterLocale' => array(
                'en' => -1,
                'enable' => 0,
                'es' => -1,
                'weight' => -10,
              ),
              'MVFUnitSuggesterOriginal' => array(
                'enable' => 0,
                'weight' => -10,
              ),
            ),
          ),
          'unit' => array(
            'formatter' => 'entityreference_label',
            'link' => 0,
          ),
          'value' => array(
            'decimal_separator' => ',',
            'formatter' => 'number_decimal',
            'prefix_suffix' => 1,
            'scale' => 2,
            'thousand_separator' => '.',
          ),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 30,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'formatter_unit' => array(),
            'formatter_unit_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_built_area',
    'label' => 'Built area',
    'required' => 0,
    'settings' => array(
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => '',
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'label',
            'weight' => 1,
          ),
          'value' => array(
            'weight' => 0,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_category'.
  $field_instances['node-corpse-field_corpse_category'] = array(
    'bundle' => 'corpse',
    'default_value' => array(
      0 => array(
        'tid' => 2,
      ),
    ),
    'deleted' => 0,
    'description' => '<ul>
    <li><b>Desenterrado</b> para los cadáveres que solo contuvieran una localización y/o nombre y no hayan sido confirmados por un editor.</li>
    <li><b>Adoptado</b> para aquellos donde los usuarios hubieran aportado más información.</li>
</ul>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 68,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_category',
    'label' => 'Corpse\'s category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_commercial_plots'.
  $field_instances['node-corpse-field_corpse_commercial_plots'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => '.',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_commercial_plots',
    'label' => 'Commercial plots',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_contractor'.
  $field_instances['node-corpse-field_corpse_contractor'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Corresponde a los datos  de venta de la promoción. se obtiene de catálogos y webs de los propios emprendimientos, o de inmobiliarias que los comercialicen',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_contractor',
    'label' => 'Contractor',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_creditors_meeting'.
  $field_instances['node-corpse-field_corpse_creditors_meeting'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 50,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_creditors_meeting',
    'label' => 'Creditors meeting',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 88,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_description'.
  $field_instances['node-corpse-field_corpse_description'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 70,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_endorsers'.
  $field_instances['node-corpse-field_corpse_endorsers'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Campo usado inicialmente para clasificar quién aportaba la información, esto es, quién "adoptaba" ese cadáver. <br>
Desde que estamos en este nuevo sistema wiki, se podrá seguir quien aportada información. Un mismo cadáver tendrá múltiples adoptadores.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_endorsers',
    'label' => 'Endorsers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_equipment_plots'.
  $field_instances['node-corpse-field_corpse_equipment_plots'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => '.',
        ),
        'type' => 'number_integer',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_equipment_plots',
    'label' => 'Equipment plots',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_filed_appeals'.
  $field_instances['node-corpse-field_corpse_filed_appeals'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 50,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_filed_appeals',
    'label' => 'Filed appeals',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 80,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_financial_entities'.
  $field_instances['node-corpse-field_corpse_financial_entities'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 53,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_financial_entities',
    'label' => 'Financial entities',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 89,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_floor_area_ratio'.
  $field_instances['node-corpse-field_corpse_floor_area_ratio'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Edificabilidad absoluta planificada o aprobada (m²)',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_floor_area_ratio',
    'label' => 'Floor Area Ratio',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'm²',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_hotel_beds'.
  $field_instances['node-corpse-field_corpse_hotel_beds'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => '.',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_hotel_beds',
    'label' => 'Hotel beds',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_housing'.
  $field_instances['node-corpse-field_corpse_housing'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => '.',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_housing',
    'label' => 'Housing',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_industrial_plots'.
  $field_instances['node-corpse-field_corpse_industrial_plots'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => '.',
        ),
        'type' => 'number_integer',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_industrial_plots',
    'label' => 'Industrial plots',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_ine_code_city'.
  $field_instances['node-corpse-field_corpse_ine_code_city'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_ine_code_city',
    'label' => 'City\'s INE Code',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_ine_code_province'.
  $field_instances['node-corpse-field_corpse_ine_code_province'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_ine_code_province',
    'label' => 'Province\'s INE Code',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_lic_date_agreement'.
  $field_instances['node-corpse-field_corpse_lic_date_agreement'] = array(
    'bundle' => 'corpse',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_lic_date_agreement',
    'label' => 'Agreement date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '1990:+3',
      ),
      'type' => 'date_popup',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_link_to_news'.
  $field_instances['node-corpse-field_corpse_link_to_news'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_link_to_news',
    'label' => 'Link to news',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_mortgage_amount'.
  $field_instances['node-corpse-field_corpse_mortgage_amount'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => ',',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => '.',
        ),
        'type' => 'number_decimal',
        'weight' => 51,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_mortgage_amount',
    'label' => 'Mortgage amount',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '€',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 87,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_other_dates'.
  $field_instances['node-corpse-field_corpse_other_dates'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 49,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_other_dates',
    'label' => 'Other dates',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_partial_plan_date'.
  $field_instances['node-corpse-field_corpse_partial_plan_date'] = array(
    'bundle' => 'corpse',
    'deleted' => 0,
    'description' => 'Date in which partial plan was approved.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_partial_plan_date',
    'label' => 'Partial plan date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 30,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '1990:+0',
      ),
      'type' => 'date_popup',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_planned_inhabitants'.
  $field_instances['node-corpse-field_corpse_planned_inhabitants'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Type a number here in case you know the exact value. Otherwise leave it empty and it will be calculated automatically based on the number of planned housings * 3.5',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => ',',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => '.',
        ),
        'type' => 'number_decimal',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_planned_inhabitants',
    'label' => 'Number of planned inhabitants',
    'required' => 0,
    'settings' => array(
      'prefix' => '',
      'read-only' => FALSE,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mathfield',
      'settings' => array(),
      'type' => 'mathfield_text',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_planned_visitors'.
  $field_instances['node-corpse-field_corpse_planned_visitors'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => '.',
        ),
        'type' => 'number_integer',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 48,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_planned_visitors',
    'label' => 'Number of planned visitors',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_promoter'.
  $field_instances['node-corpse-field_corpse_promoter'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Corresponde a los datos de venta de la promoción. se obtiene de catálogos y webs de los propios emprendimientos, o de inmobiliarias que los comercialicen',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_promoter',
    'label' => 'Promoter',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_prop_description'.
  $field_instances['node-corpse-field_corpse_prop_description'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_prop_description',
    'label' => 'Property\'s description',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_public_domain'.
  $field_instances['node-corpse-field_corpse_public_domain'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_public_domain',
    'label' => 'Public domain',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 95,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_source'.
  $field_instances['node-corpse-field_corpse_source'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Nombre del/de los colectivos o fuente de donde has escogido el cadáver para adoptar. Separar por comas. ',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_source',
    'label' => 'Source',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_status'.
  $field_instances['node-corpse-field_corpse_status'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_status_description'.
  $field_instances['node-corpse-field_corpse_status_description'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_status_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_tech_permit'.
  $field_instances['node-corpse-field_corpse_tech_permit'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_tech_permit',
    'label' => 'Building permit technician',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 71,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_technician'.
  $field_instances['node-corpse-field_corpse_technician'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Arquitecto o técnico redactor. Corresponde a los datos  de venta de la promoción. se obtiene de catálogos y webs de los propios emprendimientos, o de inmobiliarias que los comercialicen',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_technician',
    'label' => 'Technician',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_type'.
  $field_instances['node-corpse-field_corpse_type'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Esta clasificación corresponde con la tipología del cadáver en relacion a la posición con el entorno.
<ul>
    <li>DEN - Desarrollo ligado a espacios naturales. Los atractores y prestigiadores son oportunidades de ocio existentes en espacios naturales como playas, montañas o vistas singulares.</li>
    <li>DEO - Desarrollo ligado a instalaciones de ocio. Polaridades en las que los atractores y prestigiadores son equipamientos de ocio a construir, como golf, parques temáticos o neo-balnearios.</li>
    <li>NEU - Nueva entidad urbana. Operaciones urbanas de nueva implantación, alejadas de equipamientos básicos existentes.</li>
    <li>NOE - Nuevo desarrollo urbano. Grandes urbanos mayoritariamente residenciales, planeados en contigüidad con áreas urbanas existentes y equipadas.</li>
    <li>TEA - Terciario aislado. Nuevas zonas de terciario vinculadas únicamente a infraestructuras de transporte.</li>
    <li>TIA - Infraestructuras de impacto territorial. De transporte, cultura, sanitarias, etc. de transporte.</li>
    <li>ZIA - Zona industrial aislada. Nuevas zonas industriales vinculadas únicamente a infraestrucutras de transporte.</li>
    <li>TEP - Terciario vinculado a población. Nuevas zonas de terciario ligadas a núcleos de población existentes.</li>
    <li>ZIP - Zona industrial vinculada a población. Nuevas zonas industriales ligadas a núcleos de población existentes.</li>
</ul>
',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_type',
    'label' => 'Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_urban_plan_date'.
  $field_instances['node-corpse-field_corpse_urban_plan_date'] = array(
    'bundle' => 'corpse',
    'deleted' => 0,
    'description' => 'Date in which urban plan was approved.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_urban_plan_date',
    'label' => 'Urban plan date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '1990:+0',
      ),
      'type' => 'date_popup',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_use'.
  $field_instances['node-corpse-field_corpse_use'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_use',
    'label' => 'Use',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'node-corpse-field_corpse_used_land'.
  $field_instances['node-corpse-field_corpse_used_land'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => ',',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => '.',
        ),
        'type' => 'number_decimal',
        'weight' => 32,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corpse_used_land',
    'label' => 'Used land (%)',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-corpse-field_court_sentence'.
  $field_instances['node-corpse-field_court_sentence'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 46,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 63,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_court_sentence',
    'label' => 'Court sentence',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 81,
    ),
  );

  // Exported field_instance: 'node-corpse-field_court_that_rules_sentence'.
  $field_instances['node-corpse-field_court_that_rules_sentence'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 48,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 65,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_court_that_rules_sentence',
    'label' => 'Court  that rules sentence',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 83,
    ),
  );

  // Exported field_instance: 'node-corpse-field_env_protection_entity'.
  $field_instances['node-corpse-field_env_protection_entity'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_env_protection_entity',
    'label' => 'Environment\'s protection entity',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 92,
    ),
  );

  // Exported field_instance: 'node-corpse-field_env_protection_entity_name'.
  $field_instances['node-corpse-field_env_protection_entity_name'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 72,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_env_protection_entity_name',
    'label' => 'Name of environmental protection entity',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Buscar',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 93,
    ),
  );

  // Exported field_instance: 'node-corpse-field_gl_address'.
  $field_instances['node-corpse-field_gl_address'] = array(
    'bundle' => 'corpse',
    'default_value' => array(
      0 => array(
        'address' => '',
        'name' => '',
        'street' => '',
        'additional' => '',
        'city' => '',
        'province' => '',
        'postal_code' => '',
        'country' => 'ES',
        'phone' => '',
        'mobile' => '',
        'fax' => '',
        'latitude' => '',
        'longitude' => '',
        'marker' => '',
        'sv_enable' => 0,
        'sv_showfirst' => 0,
        'mapzoom' => 3,
        'map_maptype' => 'OSM',
        'sv_heading' => 0,
        'sv_zoom' => 1,
        'sv_pitch' => 0,
        'active' => FALSE,
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
          'input_city_required' => 0,
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
          'zoom' => 3,
          'zoomcontrolposition' => '',
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'getlocations_fields',
        'settings' => array(
          'baselayers' => array(
            'DeLorme' => 0,
            'ESRI' => 1,
            'Hybrid' => 1,
            'Map' => 1,
            'NatGeoWorldMap' => 0,
            'OCM' => 0,
            'OCML' => 0,
            'OCMO' => 0,
            'OCMT' => 0,
            'OSM' => 0,
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
          'bicycleinfo' => 0,
          'bicycleinfo_state' => 0,
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
          'comment_map_marker' => 'webiconset-pins-32 pin8',
          'controltype' => 'small',
          'country_full' => 0,
          'display_additional' => 0,
          'display_city' => 0,
          'display_country' => 0,
          'display_dms' => 0,
          'display_fax' => 0,
          'display_geo_microformat' => 0,
          'display_latlong' => 0,
          'display_mapheight' => '400px',
          'display_maplink' => 1,
          'display_mapwidth' => '100%',
          'display_mobile' => 0,
          'display_name' => 0,
          'display_onemap' => 0,
          'display_phone' => 0,
          'display_postal_code' => 0,
          'display_province' => 0,
          'display_showmap' => 1,
          'display_street' => 0,
          'draggable' => 1,
          'fullscreen' => 1,
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
          'map_backgroundcolor' => '',
          'map_marker' => 'webiconset-pins-32 pin8',
          'mapcontrolposition' => '',
          'maptype' => 'Hybrid',
          'markeraction' => 1,
          'markeraction_click_center' => 0,
          'markeraction_click_zoom' => -1,
          'markeractiontype' => 1,
          'maxzoom_map' => -1,
          'minzoom_map' => -1,
          'mtc' => 'standard',
          'node_map_marker' => 'webiconset-pins-32 pin8',
          'nodezoom' => 18,
          'nodoubleclickzoom' => 0,
          'nokeyboard' => 0,
          'overview' => 0,
          'overview_opened' => 0,
          'pancontrol' => 1,
          'pancontrolposition' => '',
          'panoramio_show' => 0,
          'panoramio_state' => 0,
          'panoramio_use' => 0,
          'per_item_marker' => 0,
          'poi_show' => 1,
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
          'scale' => 0,
          'scalecontrolposition' => '',
          'scrollwheel' => 0,
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
          'sv_addresscontrol' => 1,
          'sv_addresscontrolposition' => '',
          'sv_clicktogo' => 1,
          'sv_heading' => 0,
          'sv_imagedatecontrol' => 0,
          'sv_linkscontrol' => 1,
          'sv_pancontrol' => 1,
          'sv_pancontrolposition' => '',
          'sv_pitch' => 0,
          'sv_scrollwheel' => 1,
          'sv_show' => 0,
          'sv_showfirst' => 0,
          'sv_zoom' => 1,
          'sv_zoomcontrol' => 'default',
          'sv_zoomcontrolposition' => '',
          'svcontrolposition' => '',
          'trafficinfo' => 0,
          'trafficinfo_state' => 0,
          'transit_show' => 1,
          'transitinfo' => 0,
          'transitinfo_state' => 0,
          'user_map_marker' => 'webiconset-pins-32 pin8',
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
          'vocabulary_map_marker' => 'webiconset-pins-32 pin8',
          'weather_cloud' => 1,
          'weather_cloud_state' => 0,
          'weather_show' => 0,
          'weather_state' => 0,
          'weather_use' => 0,
          'what3words_display' => 0,
          'zoomcontrolposition' => '',
        ),
        'type' => 'getlocations_fields_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'getlocations_fields',
        'settings' => array(
          'baselayers' => array(
            'DeLorme' => 0,
            'ESRI' => 1,
            'Hybrid' => 1,
            'Map' => 1,
            'NatGeoWorldMap' => 0,
            'OCM' => 0,
            'OCML' => 0,
            'OCMO' => 0,
            'OCMT' => 0,
            'OSM' => 0,
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
          'bicycleinfo' => 0,
          'bicycleinfo_state' => 0,
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
          'comment_map_marker' => 'webiconset-pins-32 pin8',
          'controltype' => 'small',
          'country_full' => 0,
          'display_additional' => 0,
          'display_city' => 0,
          'display_country' => 0,
          'display_dms' => 0,
          'display_fax' => 0,
          'display_geo_microformat' => 0,
          'display_latlong' => 0,
          'display_mapheight' => '400px',
          'display_maplink' => 1,
          'display_mapwidth' => '100%',
          'display_mobile' => 0,
          'display_name' => 0,
          'display_onemap' => 0,
          'display_phone' => 0,
          'display_postal_code' => 0,
          'display_province' => 0,
          'display_showmap' => 1,
          'display_street' => 0,
          'draggable' => 1,
          'fullscreen' => 1,
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
          'map_backgroundcolor' => '',
          'map_marker' => 'webiconset-pins-32 pin8',
          'mapcontrolposition' => '',
          'maptype' => 'Hybrid',
          'markeraction' => 1,
          'markeraction_click_center' => 0,
          'markeraction_click_zoom' => -1,
          'markeractiontype' => 1,
          'maxzoom_map' => -1,
          'minzoom_map' => -1,
          'mtc' => 'standard',
          'node_map_marker' => 'webiconset-pins-32 pin8',
          'nodezoom' => 18,
          'nodoubleclickzoom' => 0,
          'nokeyboard' => 0,
          'overview' => 0,
          'overview_opened' => 0,
          'pancontrol' => 1,
          'pancontrolposition' => '',
          'panoramio_show' => 0,
          'panoramio_state' => 0,
          'panoramio_use' => 0,
          'per_item_marker' => 0,
          'poi_show' => 1,
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
          'scale' => 0,
          'scalecontrolposition' => '',
          'scrollwheel' => 0,
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
          'sv_addresscontrol' => 1,
          'sv_addresscontrolposition' => '',
          'sv_clicktogo' => 1,
          'sv_heading' => 0,
          'sv_imagedatecontrol' => 0,
          'sv_linkscontrol' => 1,
          'sv_pancontrol' => 1,
          'sv_pancontrolposition' => '',
          'sv_pitch' => 0,
          'sv_scrollwheel' => 1,
          'sv_show' => 0,
          'sv_showfirst' => 0,
          'sv_zoom' => 1,
          'sv_zoomcontrol' => 'default',
          'sv_zoomcontrolposition' => '',
          'svcontrolposition' => '',
          'trafficinfo' => 0,
          'trafficinfo_state' => 0,
          'transit_show' => 1,
          'transitinfo' => 0,
          'transitinfo_state' => 0,
          'user_map_marker' => 'webiconset-pins-32 pin8',
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
          'vocabulary_map_marker' => 'webiconset-pins-32 pin8',
          'weather_cloud' => 1,
          'weather_cloud_state' => 0,
          'weather_show' => 0,
          'weather_state' => 0,
          'weather_use' => 0,
          'what3words_display' => 0,
          'zoomcontrolposition' => '',
        ),
        'type' => 'getlocations_fields_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'getlocations_fields',
        'settings' => array(
          'baselayers' => array(
            'DeLorme' => 0,
            'ESRI' => 0,
            'Hybrid' => 0,
            'Map' => 0,
            'NatGeoWorldMap' => 0,
            'OCM' => 0,
            'OCML' => 0,
            'OCMO' => 0,
            'OCMT' => 0,
            'OSM' => 0,
            'OSMBW' => 0,
            'OSMDE' => 0,
            'OceanBasemap' => 0,
            'Physical' => 0,
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
          'bicycleinfo' => 0,
          'bicycleinfo_state' => 0,
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
          'comment_map_marker' => 'webiconset-pins-32 pin8',
          'controltype' => 'none',
          'country_full' => 0,
          'display_additional' => 0,
          'display_city' => 0,
          'display_country' => 0,
          'display_dms' => 0,
          'display_fax' => 0,
          'display_geo_microformat' => 0,
          'display_latlong' => 0,
          'display_mapheight' => '200px',
          'display_maplink' => 1,
          'display_mapwidth' => '300px',
          'display_mobile' => 0,
          'display_name' => 0,
          'display_onemap' => 0,
          'display_phone' => 0,
          'display_postal_code' => 0,
          'display_province' => 0,
          'display_showmap' => 1,
          'display_street' => 0,
          'draggable' => 0,
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
          'map_backgroundcolor' => '',
          'map_marker' => 'webiconset-pins-32 pin8',
          'mapcontrolposition' => '',
          'maptype' => 'Satellite',
          'markeraction' => 0,
          'markeraction_click_center' => 0,
          'markeraction_click_zoom' => -1,
          'markeractiontype' => 1,
          'maxzoom_map' => -1,
          'minzoom_map' => -1,
          'mtc' => 'none',
          'node_map_marker' => 'webiconset-pins-32 pin8',
          'nodezoom' => 17,
          'nodoubleclickzoom' => 1,
          'nokeyboard' => 0,
          'overview' => 0,
          'overview_opened' => 0,
          'pancontrol' => 0,
          'pancontrolposition' => '',
          'panoramio_show' => 0,
          'panoramio_state' => 0,
          'panoramio_use' => 0,
          'per_item_marker' => 0,
          'poi_show' => 0,
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
          'scale' => 0,
          'scalecontrolposition' => '',
          'scrollwheel' => 0,
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
          'sv_addresscontrol' => 1,
          'sv_addresscontrolposition' => '',
          'sv_clicktogo' => 1,
          'sv_heading' => 0,
          'sv_imagedatecontrol' => 0,
          'sv_linkscontrol' => 1,
          'sv_pancontrol' => 1,
          'sv_pancontrolposition' => '',
          'sv_pitch' => 0,
          'sv_scrollwheel' => 1,
          'sv_show' => 0,
          'sv_showfirst' => 0,
          'sv_zoom' => 1,
          'sv_zoomcontrol' => 'default',
          'sv_zoomcontrolposition' => '',
          'svcontrolposition' => '',
          'trafficinfo' => 0,
          'trafficinfo_state' => 0,
          'transit_show' => 0,
          'transitinfo' => 0,
          'transitinfo_state' => 0,
          'user_map_marker' => 'webiconset-pins-32 pin8',
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
          'vocabulary_map_marker' => 'webiconset-pins-32 pin8',
          'weather_cloud' => 1,
          'weather_cloud_state' => 0,
          'weather_show' => 0,
          'weather_state' => 0,
          'weather_use' => 0,
          'what3words_display' => 0,
          'zoomcontrolposition' => '',
        ),
        'type' => 'getlocations_fields_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gl_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'getlocations_fields',
      'settings' => array(
        'city_autocomplete' => 0,
        'country' => 'ES',
        'input_additional_required' => 0,
        'input_additional_weight' => 0,
        'input_additional_width' => 40,
        'input_address_width' => 40,
        'input_city_required' => 0,
        'input_city_weight' => 0,
        'input_city_width' => 40,
        'input_country_required' => 0,
        'input_country_weight' => 0,
        'input_country_width' => 40,
        'input_fax_required' => 0,
        'input_fax_weight' => 0,
        'input_fax_width' => 20,
        'input_latitude_weight' => 0,
        'input_latitude_width' => 20,
        'input_longitude_weight' => 0,
        'input_longitude_width' => 20,
        'input_mobile_required' => 0,
        'input_mobile_weight' => 0,
        'input_mobile_width' => 20,
        'input_name_required' => 0,
        'input_name_weight' => 0,
        'input_name_width' => 40,
        'input_phone_required' => 0,
        'input_phone_weight' => 0,
        'input_phone_width' => 20,
        'input_postal_code_required' => 0,
        'input_postal_code_weight' => 0,
        'input_postal_code_width' => 40,
        'input_province_required' => 0,
        'input_province_weight' => 0,
        'input_province_width' => 40,
        'input_street_required' => 0,
        'input_street_weight' => 0,
        'input_street_width' => 40,
        'per_item_marker' => 0,
        'province_autocomplete' => 0,
        'sv_enable' => 0,
        'sv_showfirst' => 0,
        'use_address' => 1,
        'use_country_dropdown' => 1,
      ),
      'type' => 'getlocations_fields',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-corpse-field_mortgage_charges'.
  $field_instances['node-corpse-field_mortgage_charges'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 52,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 67,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mortgage_charges',
    'label' => 'Mortgage charges',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 86,
    ),
  );

  // Exported field_instance: 'node-corpse-field_number_of_sentences'.
  $field_instances['node-corpse-field_number_of_sentences'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 47,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 64,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_number_of_sentences',
    'label' => 'Number of sentences',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 82,
    ),
  );

  // Exported field_instance: 'node-corpse-field_pgou_modification_date'.
  $field_instances['node-corpse-field_pgou_modification_date'] = array(
    'bundle' => 'corpse',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 52,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pgou_modification_date',
    'label' => 'PGOU Modification date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '1990:+3',
      ),
      'type' => 'date_popup',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-corpse-field_politician_building_permit'.
  $field_instances['node-corpse-field_politician_building_permit'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 26,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 61,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_politician_building_permit',
    'label' => 'Building permit politician',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 77,
    ),
  );

  // Exported field_instance: 'node-corpse-field_politician_partial_plan'.
  $field_instances['node-corpse-field_politician_partial_plan'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 58,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_politician_partial_plan',
    'label' => 'Partial plan politician',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 74,
    ),
  );

  // Exported field_instance: 'node-corpse-field_politician_pgou_modifi'.
  $field_instances['node-corpse-field_politician_pgou_modifi'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 59,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_politician_pgou_modifi',
    'label' => 'PGOU Modification politician',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 75,
    ),
  );

  // Exported field_instance: 'node-corpse-field_politician_plan_agreement'.
  $field_instances['node-corpse-field_politician_plan_agreement'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 57,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_politician_plan_agreement',
    'label' => 'Planning agreement politician',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 73,
    ),
  );

  // Exported field_instance: 'node-corpse-field_politician_urban_plan'.
  $field_instances['node-corpse-field_politician_urban_plan'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 60,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_politician_urban_plan',
    'label' => 'Urban plan politician',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 76,
    ),
  );

  // Exported field_instance: 'node-corpse-field_politicians_other'.
  $field_instances['node-corpse-field_politicians_other'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 27,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 62,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_politicians_other',
    'label' => 'Other politicians',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 78,
    ),
  );

  // Exported field_instance: 'node-corpse-field_ruling_sentence'.
  $field_instances['node-corpse-field_ruling_sentence'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 49,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 66,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ruling_sentence',
    'label' => 'Ruling',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 84,
    ),
  );

  // Exported field_instance: 'node-corpse-field_technician_partial_plan'.
  $field_instances['node-corpse-field_technician_partial_plan'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 53,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_technician_partial_plan',
    'label' => 'Partial plan technician',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 68,
    ),
  );

  // Exported field_instance: 'node-corpse-field_technician_pgou_modif'.
  $field_instances['node-corpse-field_technician_pgou_modif'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_technician_pgou_modif',
    'label' => 'PGOU Modification technician',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 69,
    ),
  );

  // Exported field_instance: 'node-corpse-field_technician_plan_agreement'.
  $field_instances['node-corpse-field_technician_plan_agreement'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 51,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_technician_plan_agreement',
    'label' => 'Planning agreement technician',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 67,
    ),
  );

  // Exported field_instance: 'node-corpse-field_technician_urban_plan'.
  $field_instances['node-corpse-field_technician_urban_plan'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 55,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_technician_urban_plan',
    'label' => 'Urban plan technician',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 70,
    ),
  );

  // Exported field_instance: 'node-corpse-field_technicians_other'.
  $field_instances['node-corpse-field_technicians_other'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 56,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_technicians_other',
    'label' => 'Other technicians',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 72,
    ),
  );

  // Exported field_instance: 'node-corpse-field_urban_name'.
  $field_instances['node-corpse-field_urban_name'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Es es nombre que recibe el cadáver en el planeamiento urbanístico. La información de puede obtener del planeamiento municipal vigente o de los archivos urbanísticos municipales.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_urban_name',
    'label' => 'Urban name',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-corpse-field_url'.
  $field_instances['node-corpse-field_url'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-corpse-field_zoning_protection_level'.
  $field_instances['node-corpse-field_zoning_protection_level'] = array(
    'bundle' => 'corpse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_zoning_protection_level',
    'label' => 'Zoning protection level',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 94,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<ul>
    <li><b>Desenterrado</b> para los cadáveres que solo contuvieran una localización y/o nombre y no hayan sido confirmados por un editor.</li>
    <li><b>Adoptado</b> para aquellos donde los usuarios hubieran aportado más información.</li>
</ul>');
  t('Address');
  t('Agreement date');
  t('Approved equipments');
  t('Area (Terrain)');
  t('Arquitecto o técnico redactor. Corresponde a los datos  de venta de la promoción. se obtiene de catálogos y webs de los propios emprendimientos, o de inmobiliarias que los comercialicen');
  t('Attachments');
  t('Building permit');
  t('Building permit politician');
  t('Building permit technician');
  t('Building typology');
  t('Built area');
  t('Campo usado inicialmente para clasificar quién aportaba la información, esto es, quién "adoptaba" ese cadáver. <br>
Desde que estamos en este nuevo sistema wiki, se podrá seguir quien aportada información. Un mismo cadáver tendrá múltiples adoptadores.');
  t('City\'s INE Code');
  t('Commercial plots');
  t('Contractor');
  t('Corpse\'s category');
  t('Corresponde a los datos  de venta de la promoción. se obtiene de catálogos y webs de los propios emprendimientos, o de inmobiliarias que los comercialicen');
  t('Corresponde a los datos de venta de la promoción. se obtiene de catálogos y webs de los propios emprendimientos, o de inmobiliarias que los comercialicen');
  t('Court  that rules sentence');
  t('Court sentence');
  t('Creditors meeting');
  t('Date in which partial plan was approved.');
  t('Date in which urban plan was approved.');
  t('Description');
  t('Edificabilidad absoluta planificada o aprobada (m²)');
  t('Endorsers');
  t('Environment\'s protection entity');
  t('Equipment plots');
  t('Es es nombre que recibe el cadáver en el planeamiento urbanístico. La información de puede obtener del planeamiento municipal vigente o de los archivos urbanísticos municipales.');
  t('Esta clasificación corresponde con la tipología del cadáver en relacion a la posición con el entorno.
<ul>
    <li>DEN - Desarrollo ligado a espacios naturales. Los atractores y prestigiadores son oportunidades de ocio existentes en espacios naturales como playas, montañas o vistas singulares.</li>
    <li>DEO - Desarrollo ligado a instalaciones de ocio. Polaridades en las que los atractores y prestigiadores son equipamientos de ocio a construir, como golf, parques temáticos o neo-balnearios.</li>
    <li>NEU - Nueva entidad urbana. Operaciones urbanas de nueva implantación, alejadas de equipamientos básicos existentes.</li>
    <li>NOE - Nuevo desarrollo urbano. Grandes urbanos mayoritariamente residenciales, planeados en contigüidad con áreas urbanas existentes y equipadas.</li>
    <li>TEA - Terciario aislado. Nuevas zonas de terciario vinculadas únicamente a infraestructuras de transporte.</li>
    <li>TIA - Infraestructuras de impacto territorial. De transporte, cultura, sanitarias, etc. de transporte.</li>
    <li>ZIA - Zona industrial aislada. Nuevas zonas industriales vinculadas únicamente a infraestrucutras de transporte.</li>
    <li>TEP - Terciario vinculado a población. Nuevas zonas de terciario ligadas a núcleos de población existentes.</li>
    <li>ZIP - Zona industrial vinculada a población. Nuevas zonas industriales ligadas a núcleos de población existentes.</li>
</ul>
');
  t('Filed appeals');
  t('Financial entities');
  t('Floor Area Ratio');
  t('Hotel beds');
  t('Housing');
  t('Industrial plots');
  t('Link to news');
  t('Mortgage amount');
  t('Mortgage charges');
  t('Name of environmental protection entity');
  t('Nombre del/de los colectivos o fuente de donde has escogido el cadáver para adoptar. Separar por comas. ');
  t('Number of planned inhabitants');
  t('Number of planned visitors');
  t('Number of sentences');
  t('Other dates');
  t('Other politicians');
  t('Other technicians');
  t('PGOU Modification date');
  t('PGOU Modification politician');
  t('PGOU Modification technician');
  t('Partial plan date');
  t('Partial plan politician');
  t('Partial plan technician');
  t('Planning agreement politician');
  t('Planning agreement technician');
  t('Promoter');
  t('Property\'s description');
  t('Province\'s INE Code');
  t('Public domain');
  t('Ruling');
  t('Source');
  t('Status');
  t('Technician');
  t('Type');
  t('Type a number here in case you know the exact value. Otherwise leave it empty and it will be calculated automatically based on the number of planned housings * 3.5');
  t('URL');
  t('Urban name');
  t('Urban plan date');
  t('Urban plan politician');
  t('Urban plan technician');
  t('Use');
  t('Used land (%)');
  t('Zoning protection level');

  return $field_instances;
}
