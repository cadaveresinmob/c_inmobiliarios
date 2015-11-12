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
    'weight' => '10',
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
  $field_group->identifier = 'group_built_units|node|corpse|form';
  $field_group->group_name = 'group_built_units';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_phisical_properties';
  $field_group->data = array(
    'label' => 'Built units',
    'weight' => '20',
    'children' => array(
      0 => 'field_corpse_housing',
      1 => 'field_corpse_industrial_plots',
      2 => 'field_corpse_leisure_plots',
      3 => 'field_corpse_hotel_beds',
      4 => 'field_corpse_equipment_plots',
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
    'weight' => '8',
    'children' => array(
      0 => 'group_phisical_properties',
      1 => 'group_property_data',
      2 => 'group_address',
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
    'weight' => '21',
    'children' => array(
      0 => 'field_corpse_status_description',
      1 => 'field_corpse_current_status',
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
  $field_group->identifier = 'group_phisical_properties|node|corpse|form';
  $field_group->group_name = 'group_phisical_properties';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_corpse_vertical_tab';
  $field_group->data = array(
    'label' => 'Phisical properties',
    'weight' => '11',
    'children' => array(
      0 => 'field_corpse_area_terrain',
      1 => 'field_corpse_area_built',
      2 => 'field_corpse_used_land',
      3 => 'group_built_units',
      4 => 'group_current_status',
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
    'weight' => '12',
    'children' => array(
      0 => 'field_corpse_contractor',
      1 => 'field_corpse_promoter',
      2 => 'field_corpse_technician',
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

  return $export;
}
