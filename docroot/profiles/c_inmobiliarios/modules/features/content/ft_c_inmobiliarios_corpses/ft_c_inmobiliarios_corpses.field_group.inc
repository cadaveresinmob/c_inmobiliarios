<?php
/**
 * @file
 * ft_c_inmobiliarios_corpses.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ft_c_inmobiliarios_corpses_field_group_info() {
  $field_groups = array();

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
  $field_groups['group_address|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_approved_units|node|corpse|default';
  $field_group->group_name = 'group_approved_units';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_urban_data';
  $field_group->data = array(
    'label' => 'Approved units',
    'weight' => '10',
    'children' => array(
      0 => 'field_approved_industrial_plots',
      1 => 'field_approved_commercial_plots',
      2 => 'field_corpse_approved_hotel_beds',
      3 => 'field_corpse_approved_housing',
      4 => 'field_corpse_planned_inhabitants',
      5 => 'field_corpse_planned_visitors',
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
  $field_groups['group_approved_units|node|corpse|default'] = $field_group;

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
    'weight' => '54',
    'children' => array(
      0 => 'field_approved_industrial_plots',
      1 => 'field_approved_commercial_plots',
      2 => 'field_corpse_approved_hotel_beds',
      3 => 'field_corpse_approved_housing',
      4 => 'field_corpse_planned_inhabitants',
      5 => 'field_corpse_planned_visitors',
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
  $field_groups['group_approved_units|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_areas|node|corpse|default';
  $field_group->group_name = 'group_areas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'default';
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
  $field_groups['group_areas|node|corpse|default'] = $field_group;

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
    'weight' => '29',
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
  $field_groups['group_areas|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_built_units|node|corpse|default';
  $field_group->group_name = 'group_built_units';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_phisical_properties';
  $field_group->data = array(
    'label' => 'Built units',
    'weight' => '31',
    'children' => array(
      0 => 'field_corpse_equipment_plots',
      1 => 'field_corpse_hotel_beds',
      2 => 'field_corpse_housing',
      3 => 'field_corpse_industrial_plots',
      4 => 'field_corpse_commercial_plots',
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
  $field_groups['group_built_units|node|corpse|default'] = $field_group;

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
    'weight' => '30',
    'children' => array(
      0 => 'field_corpse_equipment_plots',
      1 => 'field_corpse_hotel_beds',
      2 => 'field_corpse_housing',
      3 => 'field_corpse_industrial_plots',
      4 => 'field_corpse_commercial_plots',
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
  $field_groups['group_built_units|node|corpse|form'] = $field_group;

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
    'weight' => '1',
    'children' => array(
      0 => 'group_address',
      1 => 'group_environmental_info',
      2 => 'group_general_info',
      3 => 'group_legal',
      4 => 'group_phisical_properties',
      5 => 'group_politicians',
      6 => 'group_property_data',
      7 => 'group_references',
      8 => 'group_urban_data',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-corpse-vertical-tab field-group-tabs',
      ),
    ),
  );
  $field_groups['group_corpse_vertical_tab|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_current_status|node|corpse|default';
  $field_group->group_name = 'group_current_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_phisical_properties';
  $field_group->data = array(
    'label' => 'Current status',
    'weight' => '27',
    'children' => array(
      0 => 'field_corpse_status',
      1 => 'field_corpse_description',
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
  $field_groups['group_current_status|node|corpse|default'] = $field_group;

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
  $field_groups['group_current_status|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_environmental_info|node|corpse|default';
  $field_group->group_name = 'group_environmental_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Environmental information',
    'weight' => '8',
    'children' => array(
      0 => 'field_corpse_public_domain',
      1 => 'field_zoning_protection_level',
      2 => 'field_env_protection_entity_name',
      3 => 'field_env_protection_entity',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_environmental_info|node|corpse|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_environmental_info|node|corpse|form';
  $field_group->group_name = 'group_environmental_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_corpse_vertical_tab';
  $field_group->data = array(
    'label' => 'Environmental information',
    'weight' => '30',
    'children' => array(
      0 => 'field_corpse_public_domain',
      1 => 'field_zoning_protection_level',
      2 => 'field_env_protection_entity_name',
      3 => 'field_env_protection_entity',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-environmental-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_environmental_info|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general_info|node|corpse|default';
  $field_group->group_name = 'group_general_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General info',
    'weight' => '1',
    'children' => array(
      0 => 'field_corpse_category',
      1 => 'field_corpse_endorser',
      2 => 'field_corpse_source',
      3 => 'field_corpse_status_description',
      4 => 'field_corpse_type',
      5 => 'field_urban_name',
      6 => 'field_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_general_info|node|corpse|default'] = $field_group;

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
      0 => 'field_corpse_category',
      1 => 'field_corpse_endorser',
      2 => 'field_corpse_source',
      3 => 'field_corpse_type',
      4 => 'field_urban_name',
      5 => 'field_url',
      6 => 'field_corpse_description',
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
  $field_groups['group_general_info|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_legal|node|corpse|default';
  $field_group->group_name = 'group_legal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Legal and financial',
    'weight' => '7',
    'children' => array(
      0 => 'field_corpse_creditors_meeting',
      1 => 'field_corpse_filed_appeals',
      2 => 'field_corpse_financial_entities',
      3 => 'field_corpse_mortgage_amount',
      4 => 'field_court_sentence',
      5 => 'field_court_that_rules_sentence',
      6 => 'field_mortgage_charges',
      7 => 'field_number_of_sentences',
      8 => 'field_ruling_sentence',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_legal|node|corpse|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_legal|node|corpse|form';
  $field_group->group_name = 'group_legal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_corpse_vertical_tab';
  $field_group->data = array(
    'label' => 'Legal and financial',
    'weight' => '29',
    'children' => array(
      0 => 'field_corpse_creditors_meeting',
      1 => 'field_corpse_filed_appeals',
      2 => 'field_corpse_financial_entities',
      3 => 'field_corpse_mortgage_amount',
      4 => 'field_court_sentence',
      5 => 'field_court_that_rules_sentence',
      6 => 'field_mortgage_charges',
      7 => 'field_number_of_sentences',
      8 => 'field_ruling_sentence',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-legal field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_legal|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phisical_properties|node|corpse|default';
  $field_group->group_name = 'group_phisical_properties';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phisical properties',
    'weight' => '2',
    'children' => array(
      0 => 'group_areas',
      1 => 'group_built_units',
      2 => 'group_current_status',
      3 => 'group_property_data',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_phisical_properties|node|corpse|default'] = $field_group;

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
  $field_groups['group_phisical_properties|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_politicians|node|corpse|default';
  $field_group->group_name = 'group_politicians';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Political responsability',
    'weight' => '6',
    'children' => array(
      0 => 'field_politician_building_permit',
      1 => 'field_politician_partial_plan',
      2 => 'field_politician_pgou_modifi',
      3 => 'field_politician_plan_agreement',
      4 => 'field_politician_urban_plan',
      5 => 'field_politicians_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_politicians|node|corpse|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_politicians|node|corpse|form';
  $field_group->group_name = 'group_politicians';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_corpse_vertical_tab';
  $field_group->data = array(
    'label' => 'Political responsability',
    'weight' => '27',
    'children' => array(
      0 => 'field_politician_building_permit',
      1 => 'field_politician_partial_plan',
      2 => 'field_politician_pgou_modifi',
      3 => 'field_politician_plan_agreement',
      4 => 'field_politician_urban_plan',
      5 => 'field_politicians_other',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-politicians field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_politicians|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_property_data|node|corpse|default';
  $field_group->group_name = 'group_property_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_phisical_properties';
  $field_group->data = array(
    'label' => 'Property data',
    'weight' => '30',
    'children' => array(
      0 => 'field_corpse_contractor',
      1 => 'field_corpse_promoter',
      2 => 'field_corpse_prop_description',
      3 => 'field_corpse_technician',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_property_data|node|corpse|default'] = $field_group;

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
  $field_groups['group_property_data|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references|node|corpse|default';
  $field_group->group_name = 'group_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'References',
    'weight' => '9',
    'children' => array(
      0 => 'field_corpse_attachments',
      1 => 'field_corpse_link_to_news',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_references|node|corpse|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references|node|corpse|form';
  $field_group->group_name = 'group_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_corpse_vertical_tab';
  $field_group->data = array(
    'label' => 'References',
    'weight' => '31',
    'children' => array(
      0 => 'field_corpse_attachments',
      1 => 'field_corpse_link_to_news',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-references field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_references|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technicians|node|corpse|default';
  $field_group->group_name = 'group_technicians';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_urban_data';
  $field_group->data = array(
    'label' => 'Technicians',
    'weight' => '11',
    'children' => array(
      0 => 'field_corpse_tech_permit',
      1 => 'field_technician_partial_plan',
      2 => 'field_technician_pgou_modif',
      3 => 'field_technician_plan_agreement',
      4 => 'field_technician_urban_plan',
      5 => 'field_technicians_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-technicians field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_technicians|node|corpse|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technicians|node|corpse|form';
  $field_group->group_name = 'group_technicians';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_urban_data';
  $field_group->data = array(
    'label' => 'Technicians',
    'weight' => '55',
    'children' => array(
      0 => 'field_corpse_tech_permit',
      1 => 'field_technician_partial_plan',
      2 => 'field_technician_pgou_modif',
      3 => 'field_technician_plan_agreement',
      4 => 'field_technician_urban_plan',
      5 => 'field_technicians_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-technicians field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_technicians|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_urban_data|node|corpse|default';
  $field_group->group_name = 'group_urban_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Urban data',
    'weight' => '3',
    'children' => array(
      0 => 'field_corpse_building_typology',
      1 => 'field_corpse_floor_area_ratio',
      2 => 'field_corpse_ine_code_city',
      3 => 'field_corpse_ine_code_province',
      4 => 'field_corpse_use',
      5 => 'group_approved_units',
      6 => 'group_technicians',
      7 => 'group_urban_planning_dates',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_urban_data|node|corpse|default'] = $field_group;

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
    'weight' => '26',
    'children' => array(
      0 => 'field_corpse_building_typology',
      1 => 'field_corpse_floor_area_ratio',
      2 => 'field_corpse_ine_code_city',
      3 => 'field_corpse_ine_code_province',
      4 => 'field_corpse_use',
      5 => 'group_approved_units',
      6 => 'group_technicians',
      7 => 'group_urban_planning_dates',
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
  $field_groups['group_urban_data|node|corpse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_urban_planning_dates|node|corpse|default';
  $field_group->group_name = 'group_urban_planning_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'corpse';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_urban_data';
  $field_group->data = array(
    'label' => 'Urban Planning dates',
    'weight' => '9',
    'children' => array(
      0 => 'field_corpse_building_permit',
      1 => 'field_corpse_lic_date_agreement',
      2 => 'field_corpse_other_dates',
      3 => 'field_corpse_partial_plan_date',
      4 => 'field_corpse_urban_plan_date',
      5 => 'field_pgou_modification_date',
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
  $field_groups['group_urban_planning_dates|node|corpse|default'] = $field_group;

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
    'weight' => '53',
    'children' => array(
      0 => 'field_corpse_building_permit',
      1 => 'field_corpse_lic_date_agreement',
      2 => 'field_corpse_other_dates',
      3 => 'field_corpse_partial_plan_date',
      4 => 'field_corpse_urban_plan_date',
      5 => 'field_pgou_modification_date',
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
  $field_groups['group_urban_planning_dates|node|corpse|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Approved units');
  t('Areas');
  t('Built units');
  t('Corpse\'s Vertical tabs');
  t('Current status');
  t('Environmental information');
  t('General info');
  t('Legal and financial');
  t('Phisical properties');
  t('Political responsability');
  t('Property data');
  t('References');
  t('Technicians');
  t('Urban Planning dates');
  t('Urban data');

  return $field_groups;
}
