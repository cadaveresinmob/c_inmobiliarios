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
  $field_group->identifier = 'group_phisical_properties|node|corpse|form';
  $field_group->group_name = 'group_phisical_properties';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_corpse_vertical_tab';
  $field_group->data = array(
    'label' => 'Phisical properties',
    'weight' => '9',
    'children' => array(
      0 => 'field_corpse_area',
      1 => 'field_corpse_built_area',
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
    'weight' => '10',
    'children' => array(
      0 => 'field_corpse_contractor',
      1 => 'field_corpse_technician',
      2 => 'field_corpse_promoter',
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
