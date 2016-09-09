<?php

/**
 * @file
 * Page menu callbacks of Units default module.
 */

/**
 * Form to manage default units and measures.
 */
function units_default_form($form, &$form_state) {
  $settings = units_default_enabled();

  $measures = _units_default_default_units_measure();
  $units = array();
  foreach (_units_default_default_units_unit() as $v) {
    $units[$v->measure][$v->machine_name] = $v;
  }

  $form['units_default_enabled'] = array(
    '#tree' => TRUE,
  );

  foreach ($measures as $measure) {
    $class = drupal_html_class('units-default-measure-' . $measure->measure);
    $form['units_default_enabled'][$measure->measure]['measure'] = array(
      '#type' => 'checkbox',
      '#title' => entity_label($measure->entityType(), $measure),
      '#attributes' => array('class' => array($class)),
      '#return_value' => $measure->measure,
      '#default_value' => isset($settings[$measure->measure]),
    );

    $form['units_default_enabled'][$measure->measure]['units'] = array(
      '#type' => 'fieldset',
      '#title' => t('@measure units', array(
        '@measure' => entity_label($measure->entityType(), $measure),
      )),
      '#collapsible' => TRUE,
      '#states' => array(
        'visible' => array(
          '.' . $class => array('checked' => TRUE),
        ),
      ),
    );

    foreach ($units[$measure->measure] as $unit) {
      $form['units_default_enabled'][$measure->measure]['units'][$unit->machine_name] = array(
        '#type' => 'checkbox',
        '#title' => entity_label($unit->entityType(), $unit),
        '#description' => filter_xss($unit->description),
        '#return_value' => $unit->machine_name,
        '#default_value' => isset($settings[$measure->measure]['units'][$unit->machine_name]),
      );
    }
  }

  $form = system_settings_form($form);
  $form['#validate'][] = 'units_default_form_validate';
  $form['#submit'][] = 'units_default_form_submit';

  return $form;
}

/**
 * Validate handler for 'units_default_form' form.
 *
 * Manipulate submitted values in order to clean it up from unchecked
 * checkboxes.
 */
function units_default_form_validate($form, &$form_state) {
  $value = $form_state['values']['units_default_enabled'];

  foreach ($value as $measure => $sub_value) {
    if (!$sub_value['measure']) {
      unset($value[$measure]);
    }
    else {
      foreach ($sub_value['units'] as $unit => $sub_sub_value) {
        if (!$sub_sub_value) {
          unset($value[$measure]['units'][$unit]);
        }
      }
    }
  }

  form_set_value($form['units_default_enabled'], $value, $form_state);
}

/**
 * Submit handler for 'units_default_form' form.
 *
 * Rebuild default units and measure entities as they might have changed during
 * the form submit.
 */
function units_default_form_submit($form, &$form_state) {
  entity_defaults_rebuild(array('units_measure', 'units_unit'));
}
