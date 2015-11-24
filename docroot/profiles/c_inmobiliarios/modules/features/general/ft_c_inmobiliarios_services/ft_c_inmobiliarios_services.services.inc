<?php
/**
 * @file
 * ft_c_inmobiliarios_services.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function ft_c_inmobiliarios_services_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'cadaveres_api';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'api';
  $endpoint->authentication = array();
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'lista-general' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['cadaveres_api'] = $endpoint;

  return $export;
}
