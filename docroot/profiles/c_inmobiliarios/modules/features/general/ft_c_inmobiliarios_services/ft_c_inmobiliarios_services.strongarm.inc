<?php
/**
 * @file
 * ft_c_inmobiliarios_services.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ft_c_inmobiliarios_services_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cors_domains';
  $strongarm->value = array(
    'api/lista-general' => 'GET',
  );
  $export['cors_domains'] = $strongarm;

  return $export;
}
