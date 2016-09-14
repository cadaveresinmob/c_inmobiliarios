<?php
/**
 * @file
 * ft_c_inmobiliarios_multilingual.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ft_c_inmobiliarios_multilingual_user_default_roles() {
  $roles = array();

  // Exported role: translator.
  $roles['translator'] = array(
    'name' => 'translator',
    'weight' => 4,
  );

  return $roles;
}
