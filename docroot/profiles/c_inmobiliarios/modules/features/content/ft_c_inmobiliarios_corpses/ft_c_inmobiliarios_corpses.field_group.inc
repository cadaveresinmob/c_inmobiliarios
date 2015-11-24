<?php
/**
 * @file
 * ft_c_inmobiliarios_corpses.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ft_c_inmobiliarios_corpses_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address|node|corpse|form';
  $field_group->group_name = 'group_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_corpse_vertical_tab';
  $field_group->data = array(
    'label' => 'Address',
    'weight' => '23',
    'children' => array(
      0 => 'field_gl_address',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-address field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_address|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_approved_units|node|corpse|form';
  $field_group->group_name = 'group_approved_units';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_urban_data';
  $field_group->data = array(
    'label' => 'Approved units',
    'weight' => '53',
    'children' => array(
      0 => 'field_approved_industrial_plots',
      1 => 'field_approved_leisure_plots',
      2 => 'field_corpse_approved_hotel_beds',
      3 => 'field_corpse_approved_housing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-approved-units field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_approved_units|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_areas|node|corpse|form';
  $field_group->group_name = 'group_areas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_phisical_properties';
  $field_group->data = array(
    'label' => 'Areas',
    'weight' => '28',
    'children' => array(
      0 => 'field_corpse_area_terrain',
      1 => 'field_corpse_built_area',
      2 => 'field_corpse_used_land',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-areas field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_areas|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_built_units|node|corpse|form';
  $field_group->group_name = 'group_built_units';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_phisical_properties';
  $field_group->data = array(
    'label' => 'Built units',
    'weight' => '29',
    'children' => array(
      0 => 'field_corpse_equipment_plots',
      1 => 'field_corpse_hotel_beds',
      2 => 'field_corpse_housing',
      3 => 'field_corpse_industrial_plots',
      4 => 'field_corpse_leisure_plots',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-built-units field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_built_units|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_corpse_vertical_tab|node|corpse|form';
  $field_group->group_name = 'group_corpse_vertical_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Corpse\'s Vertical tabs',
    'weight' => '5',
    'children' => array(
      0 => 'group_address',
      1 => 'group_general_info',
      2 => 'group_phisical_properties',
      3 => 'group_property_data',
      4 => 'group_urban_data',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-corpse-vertical-tab field-group-tabs',
      ),
    ),
  );
  $export['group_corpse_vertical_tab|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_current_status|node|corpse|form';
  $field_group->group_name = 'group_current_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_phisical_properties';
  $field_group->data = array(
    'label' => 'Current status',
    'weight' => '27',
    'children' => array(
      0 => 'field_corpse_status',
      1 => 'field_corpse_status_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-current-status field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_current_status|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general_info|node|corpse|form';
  $field_group->group_name = 'group_general_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_corpse_vertical_tab';
  $field_group->data = array(
    'label' => 'General info',
    'weight' => '22',
    'children' => array(
      0 => 'field_corpose_source',
      1 => 'field_corpse_type',
      2 => 'field_urban_name',
      3 => 'field_url',
      4 => 'field_corpse_endorser',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general_info|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phisical_properties|node|corpse|form';
  $field_group->group_name = 'group_phisical_properties';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_corpse_vertical_tab';
  $field_group->data = array(
    'label' => 'Phisical properties',
    'weight' => '24',
    'children' => array(
      0 => 'group_areas',
      1 => 'group_built_units',
      2 => 'group_current_status',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_phisical_properties|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_property_data|node|corpse|form';
  $field_group->group_name = 'group_property_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_corpse_vertical_tab';
  $field_group->data = array(
    'label' => 'Property data',
    'weight' => '25',
    'children' => array(
      0 => 'field_corpse_contractor',
      1 => 'field_corpse_promoter',
      2 => 'field_corpse_prop_description',
      3 => 'field_corpse_technician',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_property_data|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_urban_data|node|corpse|form';
  $field_group->group_name = 'group_urban_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_corpse_vertical_tab';
  $field_group->data = array(
    'label' => 'Urban data',
    'weight' => '27',
    'children' => array(
      0 => 'field_corpse_building_typology',
      1 => 'field_corpse_edificability',
      2 => 'field_corpse_ine_code_city',
      3 => 'field_corpse_ine_code_province',
      4 => 'field_corpse_use',
      5 => 'group_urban_planning_dates',
      6 => 'group_approved_units',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-urban-data field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_urban_data|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_urban_planning_dates|node|corpse|form';
  $field_group->group_name = 'group_urban_planning_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_urban_data';
  $field_group->data = array(
    'label' => 'Urban Planning dates',
    'weight' => '52',
    'children' => array(
      0 => 'field_corpse_lic_date_agreement',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-urban-planning-dates field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_urban_planning_dates|node|corpse|form'] = $field_group;

  return $export;
}
