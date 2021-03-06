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

  // Exported menu link: main-menu_aadir-cadver-inmobiliario:node/add/corpse.
  $menu_links['main-menu_aadir-cadver-inmobiliario:node/add/corpse'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/corpse',
    'router_path' => 'node/add/corpse',
    'link_title' => 'Añadir cadáver inmobiliario',
    'options' => array(
      'attributes' => array(
        'title' => 'Mejora la base de datos añadiendo un nuevo cadáver inmobiliario.',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_aadir-cadver-inmobiliario:node/add/corpse',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 50,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_add-urban-corpse:node/add/corpse.
  $menu_links['main-menu_add-urban-corpse:node/add/corpse'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/corpse',
    'router_path' => 'node/add/corpse',
    'link_title' => 'Add urban corpse',
    'options' => array(
      'attributes' => array(
        'title' => 'Improve our database by adding new urban corpses',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_add-urban-corpse:node/add/corpse',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
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
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add urban corpse');
  t('Añadir cadáver inmobiliario');
  t('Contact');

  return $menu_links;
}
