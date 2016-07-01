<?php
/**
 * @file
 * ft_c_inmobiliarios_corpses.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ft_c_inmobiliarios_corpses_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create corpse content'.
  $permissions['create corpse content'] = array(
    'name' => 'create corpse content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any corpse content'.
  $permissions['delete any corpse content'] = array(
    'name' => 'delete any corpse content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own corpse content'.
  $permissions['delete own corpse content'] = array(
    'name' => 'delete own corpse content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in corpse_building_type'.
  $permissions['delete terms in corpse_building_type'] = array(
    'name' => 'delete terms in corpse_building_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in corpse_category'.
  $permissions['delete terms in corpse_category'] = array(
    'name' => 'delete terms in corpse_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in corpse_contractor'.
  $permissions['delete terms in corpse_contractor'] = array(
    'name' => 'delete terms in corpse_contractor',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in corpse_court'.
  $permissions['delete terms in corpse_court'] = array(
    'name' => 'delete terms in corpse_court',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in corpse_politician'.
  $permissions['delete terms in corpse_politician'] = array(
    'name' => 'delete terms in corpse_politician',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in corpse_promoter'.
  $permissions['delete terms in corpse_promoter'] = array(
    'name' => 'delete terms in corpse_promoter',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in corpse_source'.
  $permissions['delete terms in corpse_source'] = array(
    'name' => 'delete terms in corpse_source',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in corpse_status'.
  $permissions['delete terms in corpse_status'] = array(
    'name' => 'delete terms in corpse_status',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in corpse_technician'.
  $permissions['delete terms in corpse_technician'] = array(
    'name' => 'delete terms in corpse_technician',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in corpse_type'.
  $permissions['delete terms in corpse_type'] = array(
    'name' => 'delete terms in corpse_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in corpse_use'.
  $permissions['delete terms in corpse_use'] = array(
    'name' => 'delete terms in corpse_use',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in financial_entities'.
  $permissions['delete terms in financial_entities'] = array(
    'name' => 'delete terms in financial_entities',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any corpse content'.
  $permissions['edit any corpse content'] = array(
    'name' => 'edit any corpse content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own corpse content'.
  $permissions['edit own corpse content'] = array(
    'name' => 'edit own corpse content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in financial_entities'.
  $permissions['edit terms in financial_entities'] = array(
    'name' => 'edit terms in financial_entities',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in corpse_building_type'.
  $permissions['edit terms in corpse_building_type'] = array(
    'name' => 'edit terms in corpse_building_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in corpse_category'.
  $permissions['edit terms in corpse_category'] = array(
    'name' => 'edit terms in corpse_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in corpse_contractor'.
  $permissions['edit terms in corpse_contractor'] = array(
    'name' => 'edit terms in corpse_contractor',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in corpse_court'.
  $permissions['edit terms in corpse_court'] = array(
    'name' => 'edit terms in corpse_court',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in corpse_politician'.
  $permissions['edit terms in corpse_politician'] = array(
    'name' => 'edit terms in corpse_politician',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in corpse_promoter'.
  $permissions['edit terms in corpse_promoter'] = array(
    'name' => 'edit terms in corpse_promoter',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in corpse_source'.
  $permissions['edit terms in corpse_source'] = array(
    'name' => 'edit terms in corpse_source',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in corpse_status'.
  $permissions['edit terms in corpse_status'] = array(
    'name' => 'edit terms in corpse_status',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in corpse_technician'.
  $permissions['edit terms in corpse_technician'] = array(
    'name' => 'edit terms in corpse_technician',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in corpse_type'.
  $permissions['edit terms in corpse_type'] = array(
    'name' => 'edit terms in corpse_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in corpse_use'.
  $permissions['edit terms in corpse_use'] = array(
    'name' => 'edit terms in corpse_use',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in financial_entities'.
  $permissions['edit terms in financial_entities'] = array(
    'name' => 'edit terms in financial_entities',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
