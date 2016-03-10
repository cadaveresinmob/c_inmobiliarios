<?php
/**
 * @file
 * ft_c_inmobiliarios_core.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function ft_c_inmobiliarios_core_contact_categories_defaults() {
  return array(
    'General' => array(
      'category' => 'General',
      'recipients' => 'info@cadaveresinmobiliarios.org,carlos.camara@gmail.com',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
