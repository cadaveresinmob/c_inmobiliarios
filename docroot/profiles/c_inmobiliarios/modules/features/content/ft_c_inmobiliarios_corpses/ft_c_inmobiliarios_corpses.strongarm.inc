<?php
/**
 * @file
 * ft_c_inmobiliarios_corpses.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ft_c_inmobiliarios_corpses_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__corpse';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__corpse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_aggr';
  $strongarm->value = 1;
  $export['getlocations_aggr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_api3_key';
  $strongarm->value = '';
  $export['getlocations_api3_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_default';
  $strongarm->value = array(
    'width' => '95%',
    'height' => '400px',
    'google_old_controlstyle' => 0,
    'google_old_controlstyle_show' => 1,
    'map_resize' => 0,
    'fullscreen_disable' => 0,
    'styles' => '',
    'latlong' => '40,0',
    'zoom' => '3',
    'minzoom_map' => '-1',
    'maxzoom_map' => '-1',
    'controltype' => 'small',
    'zoomcontrolposition' => '',
    'pancontrol' => 1,
    'pancontrolposition' => '',
    'mtc' => 'standard',
    'mapcontrolposition' => '',
    'maptype' => 'Map',
    'baselayers' => array(
      'Map' => 1,
      'Satellite' => 1,
      'Hybrid' => 1,
      'Physical' => 1,
      'OSM' => 0,
      'OSMBW' => 0,
      'OSMDE' => 0,
      'OCM' => 0,
      'OCMT' => 0,
      'OCML' => 0,
      'OCMO' => 0,
      'Stamen' => 0,
      'StamenBG' => 0,
      'StamenHY' => 0,
      'StamenLI' => 0,
      'StamenLA' => 0,
      'StamenLT' => 0,
      'Watercolor' => 0,
      'ESRI' => 0,
      'DeLorme' => 0,
      'WorldTopoMap' => 0,
      'WorldImagery' => 0,
      'WorldTerrain' => 0,
      'WorldShadedRelief' => 0,
      'WorldPhysical' => 0,
      'OceanBasemap' => 0,
      'NatGeoWorldMap' => 0,
      'WorldGrayCanvas' => 0,
    ),
    'scale' => 0,
    'scalecontrolposition' => '',
    'overview' => 0,
    'overview_opened' => 0,
    'scrollwheel' => 0,
    'draggable' => 1,
    'nokeyboard' => 0,
    'nodoubleclickzoom' => 0,
    'map_backgroundcolor' => '',
    'region_bias' => 'ES',
    'jquery_colorpicker_enabled' => 0,
    'is_https' => 0,
    'geolocation_mobile_check' => 0,
    'sv_show' => 0,
    'svcontrolposition' => '',
    'show_maplinks' => 0,
    'show_maplinks_viewport' => 0,
    'show_bubble_on_one_marker' => 0,
    'fullscreen' => 0,
    'fullscreen_controlposition' => '',
    'trafficinfo' => 0,
    'trafficinfo_state' => 0,
    'bicycleinfo' => 0,
    'bicycleinfo_state' => 0,
    'transitinfo' => 0,
    'transitinfo_state' => 0,
    'panoramio_use' => 0,
    'panoramio_show' => 0,
    'panoramio_state' => 0,
    'weather_use' => 0,
    'weather_show' => 0,
    'weather_state' => 0,
    'weather_temp' => '1',
    'weather_speed' => '1',
    'weather_label' => '0',
    'weather_clickable' => 1,
    'weather_info' => 1,
    'weather_cloud' => 1,
    'weather_cloud_state' => 0,
    'poi_show' => 1,
    'transit_show' => 1,
    'polygons_enable' => 0,
    'polygons_strokecolor' => '#FF0000',
    'polygons_strokeopacity' => '0.8',
    'polygons_strokeweight' => '3',
    'polygons_fillcolor' => '#FF0000',
    'polygons_fillopacity' => '0.35',
    'polygons_clickable' => 0,
    'polygons_message' => '',
    'polygons_coords' => '',
    'rectangles_enable' => 0,
    'rectangles_strokecolor' => '#FF0000',
    'rectangles_strokeopacity' => '0.8',
    'rectangles_strokeweight' => '3',
    'rectangles_fillcolor' => '#FF0000',
    'rectangles_fillopacity' => '0.35',
    'rectangles_clickable' => 0,
    'rectangles_message' => '',
    'rectangles_apply' => 0,
    'rectangles_dist' => '0',
    'rectangles_coords' => '',
    'circles_enable' => 0,
    'circles_strokecolor' => '#FF0000',
    'circles_strokeopacity' => '0.8',
    'circles_strokeweight' => '3',
    'circles_fillcolor' => '#FF0000',
    'circles_fillopacity' => '0.35',
    'circles_radius' => '0',
    'circles_clickable' => 0,
    'circles_message' => '',
    'circles_apply' => 0,
    'circles_coords' => '',
    'polylines_enable' => 0,
    'polylines_strokecolor' => '#FF0000',
    'polylines_strokeopacity' => '0.8',
    'polylines_strokeweight' => '3',
    'polylines_clickable' => 0,
    'polylines_message' => '',
    'polylines_coords' => '',
    'kml_group' => array(
      'kml_url' => '',
      'kml_url_click' => 1,
      'kml_url_infowindow' => 0,
      'kml_url_viewport' => 1,
      'kml_url_button' => 0,
      'kml_url_button_label' => 'Kml Layer',
      'kml_url_button_state' => 0,
    ),
    'geojson_enable' => 0,
    'geojson_data' => '',
    'geojson_options' => '',
    'highlight_enable' => 0,
    'highlight_strokecolor' => '#FF0000',
    'highlight_strokeopacity' => '0.8',
    'highlight_strokeweight' => '3',
    'highlight_fillcolor' => '#FF0000',
    'highlight_fillopacity' => '0.35',
    'highlight_radius' => '10',
    'geocoder_enable' => 0,
    'search_places' => 0,
    'search_places_size' => '40',
    'search_places_position' => 'outside_above',
    'search_places_label' => 'Google Places Search',
    'search_places_placeholder' => '',
    'search_places_list' => 0,
    'search_places_dd' => 0,
    'what3words_enable' => 0,
    'places' => 0,
    'node_map_marker' => 'webiconset-pins-32 pin8',
    'user_map_marker' => 'webiconset-pins-32 pin8',
    'vocabulary_map_marker' => 'webiconset-pins-32 pin8',
    'term_map_marker' => 'webiconset-pins-32 pin8',
    'comment_map_marker' => 'webiconset-pins-32 pin8',
    'input_map_marker' => 'webiconset-pins-32 pin8',
    'markeractiontype' => '1',
    'markeraction' => '0',
    'markeraction_click_center' => '0',
    'markeraction_click_zoom' => '-1',
    'show_search_distance' => 0,
    'views_search_center' => 0,
    'views_search_marker_enable' => 0,
    'views_search_marker' => 'drupal',
    'views_search_marker_toggle' => 0,
    'views_search_marker_toggle_active' => 0,
    'views_search_radshape_enable' => 0,
    'views_search_radshape_strokecolor' => '#FF0000',
    'views_search_radshape_strokeopacity' => '0.8',
    'views_search_radshape_strokeweight' => '3',
    'views_search_radshape_fillcolor' => '#FF0000',
    'views_search_radshape_fillopacity' => '0.35',
    'views_search_radshape_toggle' => 0,
    'views_search_radshape_toggle_active' => 0,
    'preload_data' => 0,
    'nodezoom' => '12',
    'markermanagertype' => '0',
    'usemarkermanager' => 0,
    'minzoom' => '6',
    'maxzoom' => '16',
    'useclustermanager' => 0,
    'markerclusterer_style' => '-1',
    'markerclusterer_imgpath' => '/profiles/c_inmobiliarios/modules/contrib/getlocations/js/images',
    'markerclusterer_title' => 'Click here to see more',
    'markerclusterer_zoom' => '-1',
    'markerclusterer_size' => '-1',
    'markerclusterer_minsize' => '-1',
    'pansetting' => '2',
    'returnlink_page_enable' => 0,
    'returnlink_page_link' => 'Return to Page',
    'returnlink_term_link' => 'Return to Term',
    'getlocations_js_weight' => '0',
  );
  $export['getlocations_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_flush';
  $strongarm->value = 1;
  $export['getlocations_flush'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_mapquest_lic';
  $strongarm->value = array(
    'key' => '',
    'type' => 'l',
  );
  $export['getlocations_mapquest_lic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_map_version';
  $strongarm->value = '';
  $export['getlocations_map_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_node_marker';
  $strongarm->value = array(
    'enable' => 0,
  );
  $export['getlocations_node_marker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_paths';
  $strongarm->value = array(
    'infobubble_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/infobubble.js',
    'infobubble_extended_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/infobubble_extended.js',
    'infowindow_options_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/infowindow_options.js',
    'infobubble_options_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/infobubble_options.js',
    'markermanager_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/markermanager.js',
    'markerclusterer_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/markerclusterer.js',
    'getlocations_polygons_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations_polygons.js',
    'getlocations_rectangles_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations_rectangles.js',
    'getlocations_circles_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations_circles.js',
    'getlocations_polylines_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations_polylines.js',
    'getlocations_categories_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations_categories.js',
    'getlocations_search_places_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations_search_places.js',
    'getlocations_geo_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations_geo.js',
    'getlocations_preview_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations_preview.js',
    'getlocations_geojson_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations_geojson.js',
    'getlocations_admin_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations_admin.js',
    'getlocations_box_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations_box.js',
    'getlocations_colorbox_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations_colorbox.js',
    'getlocations_marker_box_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations_marker_box.js',
    'getlocations_views_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations_views.js',
    'getlocations_icons_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/icons.js',
    'getlocations_what3words_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations_what3words.js',
    'getlocations_path' => 'profiles/c_inmobiliarios/modules/contrib/getlocations/js/getlocations.js',
  );
  $export['getlocations_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_term_marker';
  $strongarm->value = array(
    'enable' => 0,
    'vids' => 0,
    'max_depth' => '',
  );
  $export['getlocations_term_marker'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_ua';
  $strongarm->value = array(
    'ua_string' => 'iphone|ipad|android|blackberry|blazer|bolt|symbian|mobile safari|fennec|gobrowser|iemobile|maemo browser|profile midp|minimo|kindle|opera mini|opera mobi|skyfire|teashark|uzardweb',
  );
  $export['getlocations_ua'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getlocations_what3words_lic';
  $strongarm->value = array(
    'key' => '',
    'url' => 'http://api.what3words.com',
  );
  $export['getlocations_what3words_lic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_corpse';
  $strongarm->value = '0';
  $export['language_content_type_corpse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_corpse';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_corpse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_corpse';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_corpse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_corpse';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_corpse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_corpse';
  $strongarm->value = '1';
  $export['node_preview_corpse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_corpse';
  $strongarm->value = 1;
  $export['node_submitted_corpse'] = $strongarm;

  return $export;
}
