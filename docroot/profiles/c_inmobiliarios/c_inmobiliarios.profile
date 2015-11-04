<?php
/**
 * @file.
 */

/**
 * Implementation of hook_profile_details().
 */
function c_inmobiliarios_profile_details() {
  return array(
    'name' => 'Cadáveres Inmobiliarios',
    'description' => 'Cadáveres Inmobiliarios installation profile.',
    'old_short_name' => 'c_inmobiliarios_installer',
  );
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function c_inmobiliarios_form_install_configure_form_alter(&$form, $form_state) {
  // Site information.
  $form['site_information']['site_name']['#default_value'] = 'Cadáveres Inmobiliarios';
  $form['site_information']['site_mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST'];

  // Admin account.
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST'];

  // Server settings.
  $form['server_settings']['site_default_country']['#default_value'] = 'ES';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/Madrid';

  // Update notifications.
  $form['update_notifications']['update_status_module']['#default_value'] = array();

  // Disable validate.
  $form['#validate'] = array();
}
