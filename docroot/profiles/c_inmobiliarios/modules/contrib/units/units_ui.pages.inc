<?php

/**
 * @file
 * Menu page callbacks for Units UI module.
 */

/**
 * Generate editing form for entity type 'units_measure'.
 */
function units_measure_form($form, &$form_state, $entity, $op = 'edit') {
  if ($op == 'clone') {
    $entity->label .= ' (cloned)';
  }

  $form['label'] = array(
    '#type' => 'textfield',
    '#title' => t('Label'),
    '#description' => t('The human-readable name of this measure.'),
    '#required' => TRUE,
    '#default_value' => isset($entity->label) ? $entity->label : NULL,
  );

  $form['measure'] = array(
    '#type' => 'machine_name',
    '#maxlength' => 32,
    '#machine_name' => array(
      'exists' => 'units_measure_machine_name_load',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this measure. It must only contain lowercase letters, numbers, and underscores.'),
    '#default_value' => isset($entity->measure) ? $entity->measure : '',
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#title' => t('Description'),
    '#description' => t('Please, provide description of the measure.'),
    '#default_value' => isset($entity->description) ? $entity->description : NULL,
  );

  $converters_options = array();
  foreach (units_get_converter() as $id => $converter) {
    $converters_options[$id] = $converter['title'];
  }

  $form['converter'] = array(
    '#type' => 'select',
    '#title' => t('Converting logic'),
    '#description' => t('Choose what logic of units conversion applies to this measure.'),
    '#required' => TRUE,
    '#options' => $converters_options,
    '#default_value' => isset($entity->converter) && $entity->converter ? $entity->converter : NULL,
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save measure'),
  );

  if ($op != 'add' && $op != 'clone') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete measure'),
      '#limit_validation_errors' => array(),
      '#submit' => array('units_measure_form_delete_submit'),
    );
  }

  return $form;
}

/**
 * Submit handler for 'units_measure_form'.
 *
 * Save an entity of type 'units_measure'.
 */
function units_measure_form_submit($form, &$form_state) {
  $entity = entity_ui_form_submit_build_entity($form, $form_state);
  units_measure_save($entity);

  drupal_set_message(t('Measure %name has been successfully saved.', array('%name' => entity_label('units_measure', $entity))));

  // Taking user back to the overview page.
  $form_state['redirect'] = array(units_ui_overview_uri($entity));
}

/**
 * Submit handler for 'units_measure_form'.
 *
 * Delete an entity of type 'units_measure'.
 */
function units_measure_form_delete_submit($form, &$form_state) {
  $entity = entity_ui_form_submit_build_entity($form, $form_state);
  units_measure_delete($entity);

  drupal_set_message(t('Measure %name has been successfully deleted.', array('%name' => entity_label('units_measure', $entity))));

  // Taking user back to the overview page.
  $form_state['redirect'] = array(units_ui_overview_uri($entity));
}

/**
 * Generate editing form for entity type 'units_unit'.
 */
function units_unit_form($form, &$form_state, $entity, $op = 'edit') {
  if ($op == 'clone') {
    $entity->label .= ' (cloned)';
  }

  $form['label'] = array(
    '#type' => 'textfield',
    '#title' => t('Label'),
    '#required' => TRUE,
    '#description' => t('Provide human readable label of this measurement unit.'),
    '#default_value' => isset($entity->label) ? $entity->label : NULL,
  );

  $form['machine_name'] = array(
    '#type' => 'machine_name',
    '#maxlength' => 32,
    '#machine_name' => array(
      'exists' => 'units_unit_machine_name_load',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this measurement unit. It must only contain lowercase letters, numbers, and underscores.'),
    '#default_value' => isset($entity->machine_name) ? $entity->machine_name : NULL,
  );

  $form['symbol'] = array(
    '#type' => 'textfield',
    '#title' => t('Symbol'),
    '#description' => t('Provide human readable symbol of this measurement unit.'),
    '#default_value' => isset($entity->symbol) ? $entity->symbol : NULL,
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#title' => t('Description'),
    '#description' => t('Provide description of this measurement unit.'),
    '#default_value' => isset($entity->description) ? $entity->description : NULL,
  );

  $form['factor'] = array(
    '#type' => 'textfield',
    '#title' => t('Factor'),
    '#description' => t('Provide numeric factor (coefficient) multiplying by which value from this measurement unit will be converted into the SI unit (or any other standard unit) of this measure.'),
    '#default_value' => isset($entity->factor) ? $entity->factor : 0,
    '#element_validate' => array('element_validate_number'),
    '#required' => TRUE,
  );

  field_attach_form('units_unit', $entity, $form, $form_state);

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save unit'),
  );

  if ($op != 'add' && $op != 'clone') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete unit'),
      '#limit_validation_errors' => array(),
      '#submit' => array('units_unit_form_delete_submit'),
    );
  }

  return $form;
}

/**
 * Submit handler for 'units_unit_form'.
 *
 * Save an entity of type 'units_unit'.
 */
function units_unit_form_submit($form, &$form_state) {
  $entity = entity_ui_form_submit_build_entity($form, $form_state);
  units_unit_save($entity);

  drupal_set_message(t('Unit %name has been successfully saved.', array('%name' => entity_label('units_unit', $entity))));

  // Taking user back to the overview page.
  $form_state['redirect'] = array(units_ui_overview_uri($entity));
}

/**
 * Submit handler for 'units_unit_form'.
 *
 * Delete an entity of type 'units_unit'.
 */
function units_unit_form_delete_submit($form, &$form_state) {
  $entity = entity_ui_form_submit_build_entity($form, $form_state);
  units_unit_delete($entity);

  drupal_set_message(t('Unit %name has been successfully deleted.', array('%name' => entity_label('units_unit', $entity))));

  // Taking user back to the overview page.
  $form_state['redirect'] = array(units_ui_overview_uri($entity));
}

/**
 * Wrapper around 'units_ui_entity_ui_get_bundle_add_form' page callback.
 *
 * Its second argument is fully loaded bundle object of the entity to be
 * created. It simply extracts bundle name from that object and passes down
 * execution to 'entity_ui_get_bundle_add_form' page callback.
 *
 * @param $entity_type
 *   The type of the entity to be created.
 * @param $bundle_entity
 *   Fully loaded bundle entity object of the entity to be created.
 */
function units_ui_entity_ui_get_bundle_add_form($entity_type, $bundle_entity) {
  return entity_ui_get_bundle_add_form($entity_type, field_extract_bundle($entity_type, $bundle_entity));
}

/**
 * Retrieve admin overview URI for a provided entity.
 *
 * @param Entity $entity
 *   Entity whose overview URI should be determined
 *
 * @return string
 *   Overview URI of the provided entity
 */
function units_ui_overview_uri(Entity $entity) {
  $entity_info = entity_get_info($entity->entityType());
  if (isset($entity_info['admin ui']['path'])) {
    $uri = $entity_info['admin ui']['path'];
    if (isset($entity_info['admin ui']['path bundle argument position'])) {
      $uri = explode('/', $uri);
      $bundle = entity_extract_ids($entity->entityType(), $entity);
      $uri[$entity_info['admin ui']['path bundle argument position']] = $bundle[2];
      $uri = implode('/', $uri);
    }
    return $uri;
  }
  else {
    return '<front>';
  }
}
