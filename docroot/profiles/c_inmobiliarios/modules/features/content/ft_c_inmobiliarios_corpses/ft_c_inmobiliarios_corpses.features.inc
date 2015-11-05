<?php
/**
 * @file
 * ft_c_inmobiliarios_corpses.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ft_c_inmobiliarios_corpses_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ft_c_inmobiliarios_corpses_node_info() {
  $items = array(
    'corpse' => array(
      'name' => t('Corpse'),
      'base' => 'node_content',
      'description' => t('A real state corpse is an architectonic or urban project which is unfinished infra-used or empty'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
