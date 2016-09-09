<?php

/**
 * @file
 * Views integration for MVF.
 */

/**
 * Implements hook_field_views_data().
 */
function mvf_field_views_data($field) {
  $data = field_views_field_default_views_data($field);

  // We want to overwrite views default field handler, because click sort logic
  // for MVF field is not identical to the standard one implemented in the views
  // default field handler.
  foreach ($data as $table_name => $table_data) {
    $data[$table_name][$field['field_name']]['field']['handler'] = 'mvf_handler_field_mvf';
  }

  // Collecting views integration info from sub fields. And letting them to
  // provide their own views integration on their sub columns.
  foreach ($field['settings']['meta_info'] as $subfield => $meta_info) {
    $mocked_field = mvf_field_mockup($field, $subfield);
    $field_name = $field['field_name'] . '_' . mvf_subfield_to_column($subfield);

    $extra = module_invoke($mocked_field['module'], 'field_views_data', $mocked_field);
    if (is_array($extra)) {
      // Merging our views integration data with the one provided by a sub
      // module. However we let the submodule to override only its own sub
      // column, nothing more than that.
      foreach ($data as $table_name => $table_data) {
        if (isset($extra[$table_name][$field_name])) {
          $data[$table_name][$field_name] = $extra[$table_name][$field_name];
        }
      }
    }

    // Doing any customizations required by MVF.
    switch ($subfield) {
      case 'value':
        // For 'value' subfield we have our own numeric filter that not only
        // takes into account the entered value but the unit measure too. The
        // same way we have our own sort handler, that sorts not only judging
        // by entered value, but also considers units in which it is measured.
        foreach ($data as $table_name => $table_data) {
          $data[$table_name][$field_name]['filter']['handler'] = 'mvf_handler_filter_mvf';
          $data[$table_name][$field_name]['sort']['handler'] = 'mvf_handler_sort_mvf';
        }
        break;

      case 'unit':
        // Entity Reference module provides a special filter (which can be
        // enabled in field settings) to filter referenced entities using a
        // select form element instead of views numeric filter suggested by
        // default in Field API. However we need to substitute callback for
        // options of that select because in our case it's just a subfield, not
        // a real field.
        if (isset($mocked_field['settings']['handler_settings']['behaviors']['views-select-list']['status']) && $mocked_field['settings']['handler_settings']['behaviors']['views-select-list']['status'] == 1) {
          // The select filter option is enabled in field settings, so we
          // have to interfere.
          foreach ($data as $table_name => $table_data) {
            $data[$table_name][$field_name]['filter']['options callback'] = 'mvf_views_handler_options_list';
          }
        }
        break;
    }
  }
  return $data;
}

/**
 * Supportive function for MVF filter handler.
 *
 * Wrapper around _views_array_filter_zero() function. It calls
 * _views_array_filter_zero() recursively on all elements of the supplied $var,
 * if the latter is an array, otherwise it just calls
 * _views_array_filter_zero() on the supplied $var.
 */
function _mvf_views_array_filter_zero_recursive($var) {
  if (is_array($var)) {
    $return = TRUE;
    foreach ($var as $v) {
      $return = $return && _views_array_filter_zero($v);
    }
  }
  else {
    $return = _views_array_filter_zero($var);
  }
  return $return;
}

/**
 * FAPI pre_prender function.
 *
 * Make 'label' sub element "colaborate" with Ctools #dependency property.
 * Supposedly $element['label'] is of type 'item', and Ctools dependency in case
 * of such element tries to hide element $('#' + id + '-wrapper').hide();
 * Apparently wrapper around form element #type => 'item' does not exist, so
 * we manually wrap it with a div-wrapper.
 */
function mvf_views_label_pre_render($element) {
  if (!isset($element['label']['#prefix'])) {
    $element['label']['#prefix'] = '';
  }
  if (!isset($element['label']['#suffix'])) {
    $element['label']['#suffix'] = '';
  }
  $element['label']['#prefix'] = '<div id="' . $element['label']['#id'] . '-wrapper">' . $element['label']['#prefix'];
  $element['label']['#suffix'] .= '</div>';
  return $element;
}
