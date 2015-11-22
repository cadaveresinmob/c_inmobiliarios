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

  // Exported permission: 'edit any corpse content'.
  $permissions['edit any corpse content'] = array(
    'name' => 'edit any corpse content',
    'roles' => array(
      'administrator' => 'administrator',
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

  return $permissions;
}
