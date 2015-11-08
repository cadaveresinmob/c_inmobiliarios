<?php
/**
 * @file
 * ft_c_inmobiliarios_map.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ft_c_inmobiliarios_map_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'leaflet_more_maps_custom_maps';
  $strongarm->value = array(
    1 => array(
      'map-key' => 'Corpse',
      'layer-keys' => array(
        'esri-natgeo_world_map layer' => 'esri-natgeo_world_map layer',
        'esri-world_physical_map layer' => 'esri-world_physical_map layer',
        'esri-reference/world_transportation layer' => 'esri-reference/world_transportation layer',
        'esri-world_topo_map layer' => 'esri-world_topo_map layer',
        'esri-world_street_map layer' => 'esri-world_street_map layer',
        'mapbox-warden layer' => 'mapbox-warden layer',
        'mapquest road layer' => 'mapquest road layer',
        'mapquest aerial layer' => 'mapquest aerial layer',
        'osm-cycle layer' => 'osm-cycle layer',
        'osm-transport layer' => 'osm-transport layer',
        'osm-landscape layer' => 'osm-landscape layer',
        'osm-piste base' => 'osm-piste base',
        'osm-piste relief shading' => 'osm-piste relief shading',
        'osm-piste pistes' => 'osm-piste pistes',
        'geocommons acetate' => 'geocommons acetate',
        'stamen-toner layer' => 'stamen-toner layer',
      ),
      'reverse-order' => 0,
    ),
    2 => array(
      'map-key' => '',
      'layer-keys' => array(),
      'reverse-order' => 0,
    ),
    3 => array(
      'map-key' => '',
      'layer-keys' => array(),
      'reverse-order' => 0,
    ),
  );
  $export['leaflet_more_maps_custom_maps'] = $strongarm;

  return $export;
}
