<?php
/**
 * @file
 * ft_c_inmobiliarios_services.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ft_c_inmobiliarios_services_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ft_c_inmobiliarios_services_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
