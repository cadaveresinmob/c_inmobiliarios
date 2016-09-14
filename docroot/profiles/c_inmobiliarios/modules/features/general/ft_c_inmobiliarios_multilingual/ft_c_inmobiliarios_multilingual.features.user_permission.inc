<?php
/**
 * @file
 * ft_c_inmobiliarios_multilingual.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ft_c_inmobiliarios_multilingual_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use on-page translation'.
  $permissions['use on-page translation'] = array(
    'name' => 'use on-page translation',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'l10n_client',
  );

  return $permissions;
}
