<?php
/**
 * @file
 * ft_c_inmobiliarios_map.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ft_c_inmobiliarios_map_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'urban_corpses_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Urban Corpses\' Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Urban corpses\' list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => '',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['map_height'] = '600';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array(
    'getlocations_fields_latitude' => 'getlocations_fields_latitude',
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = 'getlocations_fields_longitude';
  $handler->display->display_options['style_options']['default_marker']['default_marker_color'] = 'yellow';
  $handler->display->display_options['style_options']['visitor_marker']['visitor_marker_accuracy_circle'] = 0;
  $handler->display->display_options['style_options']['center_option'] = '0';
  $handler->display->display_options['style_options']['sync']['2'] = 0;
  $handler->display->display_options['style_options']['sync']['4'] = 0;
  $handler->display->display_options['style_options']['sync']['8'] = 1;
  $handler->display->display_options['style_options']['sync']['16'] = 1;
  $handler->display->display_options['style_options']['full_screen'] = 1;
  $handler->display->display_options['style_options']['scale_metric'] = 0;
  $handler->display->display_options['style_options']['scale_imperial'] = 0;
  $handler->display->display_options['style_options']['zoom_indicator'] = 0;
  $handler->display->display_options['style_options']['map_reset'] = 0;
  $handler->display->display_options['style_options']['map_cluster_toggle'] = 0;
  $handler->display->display_options['style_options']['mini_map']['on'] = 0;
  $handler->display->display_options['style_options']['mini_map']['height'] = '100';
  $handler->display->display_options['style_options']['mini_map']['width'] = '150';
  $handler->display->display_options['style_options']['mini_map']['toggle'] = 1;
  $handler->display->display_options['style_options']['mini_map']['zoom_delta'] = '-5';
  $handler->display->display_options['style_options']['cluster_radius'] = '30';
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_differentiator_fields'] = array(
    '' => '',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['zoom_ranges'] = array(
    1 => '',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_tooltips'] = 1;
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_outline'] = '0';
  $handler->display->display_options['style_options']['cluster_aggregation']['aggregation_function'] = 'average';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['small'] = '10';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['medium'] = '100';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['large'] = '1000';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '18';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '2';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @total Corpses';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Getlocations Fields: Coordinates */
  $handler->display->display_options['fields']['coordinates']['id'] = 'coordinates';
  $handler->display->display_options['fields']['coordinates']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['coordinates']['field'] = 'coordinates';
  /* Field: Getlocations Fields: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  /* Field: Getlocations Fields: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'corpse' => 'corpse',
  );
  /* Filter criterion: Content: Type (field_corpse_type) */
  $handler->display->display_options['filters']['field_corpse_type_tid']['id'] = 'field_corpse_type_tid';
  $handler->display->display_options['filters']['field_corpse_type_tid']['table'] = 'field_data_field_corpse_type';
  $handler->display->display_options['filters']['field_corpse_type_tid']['field'] = 'field_corpse_type_tid';
  $handler->display->display_options['filters']['field_corpse_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_corpse_type_tid']['expose']['operator_id'] = 'field_corpse_type_tid_op';
  $handler->display->display_options['filters']['field_corpse_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_corpse_type_tid']['expose']['operator'] = 'field_corpse_type_tid_op';
  $handler->display->display_options['filters']['field_corpse_type_tid']['expose']['identifier'] = 'field_corpse_type_tid';
  $handler->display->display_options['filters']['field_corpse_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_corpse_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_corpse_type_tid']['vocabulary'] = 'corpse_type';
  /* Filter criterion: Getlocations Fields: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['exposed'] = TRUE;
  $handler->display->display_options['filters']['province']['expose']['operator_id'] = 'province_op';
  $handler->display->display_options['filters']['province']['expose']['label'] = 'Province';
  $handler->display->display_options['filters']['province']['expose']['operator'] = 'province_op';
  $handler->display->display_options['filters']['province']['expose']['identifier'] = 'province';
  $handler->display->display_options['filters']['province']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Status (field_corpse_status) */
  $handler->display->display_options['filters']['field_corpse_status_tid']['id'] = 'field_corpse_status_tid';
  $handler->display->display_options['filters']['field_corpse_status_tid']['table'] = 'field_data_field_corpse_status';
  $handler->display->display_options['filters']['field_corpse_status_tid']['field'] = 'field_corpse_status_tid';
  $handler->display->display_options['filters']['field_corpse_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_corpse_status_tid']['expose']['operator_id'] = 'field_corpse_status_tid_op';
  $handler->display->display_options['filters']['field_corpse_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_corpse_status_tid']['expose']['operator'] = 'field_corpse_status_tid_op';
  $handler->display->display_options['filters']['field_corpse_status_tid']['expose']['identifier'] = 'field_corpse_status_tid';
  $handler->display->display_options['filters']['field_corpse_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_corpse_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_corpse_status_tid']['vocabulary'] = 'corpse_status';
  $handler->display->display_options['filters']['field_corpse_status_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'map';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Map';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Map Attachment */
  $handler = $view->new_display('attachment', 'Map Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => '',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['map_height'] = '600';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array(
    'getlocations_fields_latitude' => 'getlocations_fields_latitude',
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = 'getlocations_fields_longitude';
  $handler->display->display_options['style_options']['default_marker']['default_marker_color'] = 'yellow';
  $handler->display->display_options['style_options']['visitor_marker']['visitor_marker_accuracy_circle'] = 0;
  $handler->display->display_options['style_options']['differentiator']['differentiator_field'] = 'field_corpse_category';
  $handler->display->display_options['style_options']['center_option'] = '0';
  $handler->display->display_options['style_options']['sync']['2'] = 0;
  $handler->display->display_options['style_options']['sync']['4'] = 0;
  $handler->display->display_options['style_options']['sync']['8'] = 1;
  $handler->display->display_options['style_options']['sync']['16'] = 1;
  $handler->display->display_options['style_options']['full_screen'] = 1;
  $handler->display->display_options['style_options']['scale_metric'] = 0;
  $handler->display->display_options['style_options']['scale_imperial'] = 0;
  $handler->display->display_options['style_options']['zoom_indicator'] = 0;
  $handler->display->display_options['style_options']['open_balloons_on_click'] = 1;
  $handler->display->display_options['style_options']['open_balloons_on_hover'] = 0;
  $handler->display->display_options['style_options']['goto_content_on_click'] = 0;
  $handler->display->display_options['style_options']['map_reset'] = 0;
  $handler->display->display_options['style_options']['map_cluster_toggle'] = 0;
  $handler->display->display_options['style_options']['mini_map']['on'] = 0;
  $handler->display->display_options['style_options']['mini_map']['height'] = '100';
  $handler->display->display_options['style_options']['mini_map']['width'] = '150';
  $handler->display->display_options['style_options']['mini_map']['toggle'] = 1;
  $handler->display->display_options['style_options']['mini_map']['zoom_delta'] = '-5';
  $handler->display->display_options['style_options']['cluster_radius'] = '30';
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_differentiator_fields'] = array(
    '' => '',
  );
  $handler->display->display_options['style_options']['cluster_aggregation']['aggregation_function'] = 'average';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['small'] = '10';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['medium'] = '100';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['large'] = '1000';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '18';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '2';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Getlocations Fields: Coordinates */
  $handler->display->display_options['fields']['coordinates']['id'] = 'coordinates';
  $handler->display->display_options['fields']['coordinates']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['coordinates']['field'] = 'coordinates';
  /* Field: Getlocations Fields: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  /* Field: Getlocations Fields: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  /* Field: Content: Corpse's category */
  $handler->display->display_options['fields']['field_corpse_category']['id'] = 'field_corpse_category';
  $handler->display->display_options['fields']['field_corpse_category']['table'] = 'field_data_field_corpse_category';
  $handler->display->display_options['fields']['field_corpse_category']['field'] = 'field_corpse_category';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'corpse' => 'corpse',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'All corpses\' map';
  $handler->display->display_options['block_caching'] = '8';
  $translatables['urban_corpses_map'] = array(
    t('Master'),
    t('Urban corpses\' list'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Displaying @total Corpses'),
    t('Coordinates'),
    t('Latitude'),
    t('Longitude'),
    t('Type'),
    t('Province'),
    t('Search'),
    t('Status'),
    t('Page'),
    t('Map Attachment'),
    t('Block'),
    t('Corpse\'s category'),
    t('All corpses\' map'),
  );
  $export['urban_corpses_map'] = $view;

  return $export;
}
