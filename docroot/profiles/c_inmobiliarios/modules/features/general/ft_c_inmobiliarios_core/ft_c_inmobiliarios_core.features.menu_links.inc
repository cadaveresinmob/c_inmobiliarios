<?php
/**
 * @file
 * ft_c_inmobiliarios_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ft_c_inmobiliarios_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_contact:contact.
  $menu_links['main-menu_contact:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact:contact',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');

  return $menu_links;
}
