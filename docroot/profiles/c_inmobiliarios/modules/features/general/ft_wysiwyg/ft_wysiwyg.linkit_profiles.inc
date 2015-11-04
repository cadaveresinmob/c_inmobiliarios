<?php
/**
 * @file
 * ft_wysiwyg.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function ft_wysiwyg_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'editors_general';
  $linkit_profile->admin_title = 'Editors - general';
  $linkit_profile->admin_description = 'Linkit profile that links to any content and taxonomy.';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'filtered_html' => 'filtered_html',
      'html' => 'html',
      'plain_text' => 0,
    ),
    'search_plugins' => array(
      'entity:taxonomy_term' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'articles' => 0,
        'experience' => 0,
        'pages' => 0,
        'publications' => 0,
        'talks' => 0,
        'works' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'entity',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'clients' => 0,
        'article_topic' => 0,
        'article_type' => 0,
        'people' => 0,
        'tags' => 0,
        'experience_type' => 0,
        'works_types' => 0,
      ),
      'group_by_bundle' => 1,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'url_method' => '3',
    ),
    'attribute_plugins' => array(
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['editors_general'] = $linkit_profile;

  return $export;
}
