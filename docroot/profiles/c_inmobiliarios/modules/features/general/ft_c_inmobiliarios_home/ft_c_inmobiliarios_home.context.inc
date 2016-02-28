<?php
/**
 * @file
 * ft_c_inmobiliarios_home.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ft_c_inmobiliarios_home_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = 'Front Page';
  $context->tag = 'frontpage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-urban_corpses_map-block_1' => array(
          'module' => 'views',
          'delta' => 'urban_corpses_map-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front Page');
  t('frontpage');
  $export['home'] = $context;

  return $export;
}
