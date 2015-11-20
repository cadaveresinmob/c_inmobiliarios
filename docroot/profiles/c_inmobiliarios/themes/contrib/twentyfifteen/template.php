<?php

/**
 * @file
 * Process and preprocess for theme.
 */

/**
 * Implements hook_preprocess_html().
 */
function twentyfifteen_preprocess_html(&$variables) {
  $viewport = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport',
      'content' => 'width=device-width',
    ),
  );
  drupal_add_html_head($viewport, 'viewport');

  $html5 = array(
    '#tag' => 'script',
    '#attributes' => array(
      'type' => 'text/javascript',
      'src' => url(drupal_get_path('theme', 'twentyfifteen') . '/js/html5.js'),
    ),
    '#browsers' => array('IE' => 'lt IE 9', '!IE' => FALSE),
    '#weight' => 997,
  );
  drupal_add_html_head($html5, 'html5');

  $ie_style = array(
    '#tag' => 'link',
    '#attributes' => array(
      'src' => url(drupal_get_path('theme', 'twentyfifteen') . '/css/ie.css', array('query' => array('ver' => '20141010'))),
      'rel' => 'stylesheet',
      'id' => 'twentyfifteen-ie-css',
      'type' => 'text/css',
      'media' => 'all',
    ),
    '#browsers' => array('IE' => 'lt IE 9', '!IE' => FALSE),
    '#weight' => 998,
  );
  drupal_add_html_head($ie_style, 'ie_style');

  $ie7_style = array(
    '#tag' => 'link',
    '#attributes' => array(
      'src' => url(drupal_get_path('theme', 'twentyfifteen') . '/css/ie7.css', array('query' => array('ver' => '20141010'))),
      'rel' => 'stylesheet',
      'id' => 'twentyfifteen-ie-css',
      'type' => 'text/css',
      'media' => 'all',
    ),
    '#browsers' => array('IE' => 'lt IE 8', '!IE' => FALSE),
    '#weight' => 999,
  );
  drupal_add_html_head($ie7_style, 'ie7_style');

  drupal_add_js("(function(){document.documentElement.className='js'})();", "inline");
}

/**
 * Implements hook_preprocess_node().
 */
function twentyfifteen_preprocess_node(&$variables) {
  $variables['classes_array'][] = 'hentry';
}

/**
 * Implements hook_preprocess_block().
 */
function twentyfifteen_preprocess_block(&$variables) {
  $block = $variables['block'];
  if ($block->delta == 'powered-by') {
    $variables['classes_array'][] = 'site-info';
  }

  if ($block->region == 'sidebar') {
    $variables['classes_array'][] = 'widget';
  }
}

/**
 * Implements hook_preprocess_user_picture().
 *
 * Add for user "picture" own classes.
 */
function twentyfifteen_preprocess_user_picture(&$variables) {
  $variables ['user_picture'] = '';
  if (variable_get('user_pictures', 0)) {
    $attributes = array(
      'class' => array(
        'avatar',
      ),
    );

    $account = $variables['account'];
    if (!empty($account->picture)) {
      // @TODO: Ideally this function would only be passed file objects, but
      // since there's a lot of legacy code that JOINs the {users} table to
      // {node} or {comments} and passes the results into this function if we
      // a numeric value in the picture field we'll assume it's a file id
      // and load it for them. Once we've got user_load_multiple() and
      // comment_load_multiple() functions the user module will be able to load
      // the picture files in mass during the object's load process.
      if (is_numeric($account->picture)) {
        $account->picture = file_load($account->picture);
      }
      if (!empty($account->picture->uri)) {
        $filepath = $account->picture->uri;
      }

      $attributes['class'][] = 'photo';
    }
    elseif (variable_get('user_picture_default', '')) {
      $filepath = variable_get('user_picture_default', '');
      $attributes['class'][] = 'avatar-default';
    }

    if (isset($filepath)) {
      $alt = t("@user's picture", array('@user' => format_username($account)));

      // If the image does not have a valid Drupal scheme (for eg. HTTP),
      // don't load image styles.
      if (module_exists('image') && file_valid_uri($filepath) && $style = variable_get('user_picture_style', '')) {
        $variables['user_picture'] = theme('image_style', array('style_name' => $style, 'path' => $filepath, 'alt' => $alt, 'title' => $alt, 'attributes' => $attributes));
      }
      else {
        $variables['user_picture'] = theme('image', array('path' => $filepath, 'alt' => $alt, 'title' => $alt, 'attributes' => $attributes));
      }
      if (!empty($account->uid) && user_access('access user profiles')) {
        $attributes = array('attributes' => array('title' => t('View user profile.')), 'html' => TRUE);
        $variables['user_picture'] = l($variables ['user_picture'], "user/$account->uid", $attributes);
      }
    }
  }
}

/**
 * Returns HTML for a query pager.
 *
 * Add nav for pager group.
 *
 * @ingroup themeable
 */
function twentyfifteen_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : t('« first')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : t('last »')), 'element' => $element, 'parameters' => $parameters));

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-current'),
            'data' => $i,
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $li_last,
      );
    }
    $output = '<nav class="navigation pagination" role="navigation">';
    $output .= '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pager')),
    ));
    $output .= '</nav>';
    return $output;
  }
}

/**
 * Search block form.
 *
 * Hide submit button and add placeholder for input search.
 */
function twentyfifteen_form_search_block_form_alter(&$form, &$form_state) {
  $form['search_block_form']['#attributes']['placeholder'] = t('Search');
  hide($form['actions']['submit']);
}
