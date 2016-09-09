<?php

/**
 * Base Views Filter Handler for field types defined in MVF module.
 */
class mvf_handler_filter_mvf extends views_handler_filter_numeric {

  function option_definition() {
    $option = parent::option_definition();
    foreach ($option['value']['contains'] as $type => $v) {
      $option['value']['contains'][$type] = array(
        'contains' => array(
          mvf_subfield_to_column('value') => array('default' => 0),
          mvf_subfield_to_column('unit') => array('default' => NULL),
        ),
      );
    }
    $option['field_definition'] = array();
    return $option;
  }

  function set_default_options()  {
    parent::set_default_options();
    // We load field API definition array of the MVF field on which current
    // instance of the filter operates.
    $this->options['field_definition'] = field_info_field($this->definition['field_name']);
    // Inserting "whatever" default units, now that we have MVF field on hands,
    // we can do it.
    $entityreference = mvf_field_mockup($this->options['field_definition'], 'unit');
    $entity_type = $entityreference['settings']['target_type'];
    $efq = new EntityFieldQuery();
    $efq->entityCondition('entity_type', $entity_type);
    $efq->entityCondition('bundle', reset($entityreference['settings']['handler_settings']['target_bundles']));
    $efq->range(0, 1);
    $result = $efq->execute();
    $default_unit_id = array_keys($result[$entity_type]);
    $default_unit_id = reset($default_unit_id);
    foreach ($this->options['value'] as $k => $v) {
      $this->options['value'][$k][mvf_subfield_to_column('unit')] = $default_unit_id;
    }
  }

  function operators() {
    $operators = parent::operators();
    // We can't support 'regular_expression' option because it quite doesn't
    // make sense in case of MVF.
    unset($operators['regular_expression']);

    // Additionally we want to supply meta info, which operator uses which
    // sub arrays of filter input values.
    foreach ($operators as $k => $v) {
      $required_subvalues = array();
      switch ($k) {
        case '<':
        case '<=':
        case '=':
        case '!=':
        case '>=':
        case '>':
          $required_subvalues = array('value');
          break;

        case 'between':
        case 'not between':
          $required_subvalues = array('min', 'max');
          break;

        case 'empty':
        case 'not empty':
          $required_subvalues = array();
          break;
      }
      $operators[$k]['required subvalues'] = $required_subvalues;
    }
    return $operators;
  }

  function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);
    // Loading any instance of this field in order to pass it down to process
    // function of form element of type 'mvf_widget'.
    $instance = mvf_field_instance($this->options['field_definition']);

    // parent might return us differently structured $form array.
    // 'value' element can be found in $form['value'] or in
    // $form['value']['value'].
    // And 'min' and 'max' elements might be present or not. It does so because
    // the form elements depend on filter's operator state and whether it's
    // exposed or not. We basically follow the same pattern. The only thing we
    // want to change about it is to override parent's 'textfield' with our
    // 'mvf_widget' form element introducing in such way an option to choose
    // unit measure for filtering value.
    $instance['label'] = '';
    $value_element = array(
      '#tree' => TRUE,
      '#type' => 'mvf_widget',
      '#field' => $this->options['field_definition'],
      '#instance' => $instance,
      '#entity_type' => $instance['entity_type'],
      '#pre_render' => array('mvf_views_label_pre_render'),
    ) + $this->options_to_mvf_default_value($this->value['value']);
    if (isset($form['value']['#type'])) {
      $form['value'] = $value_element + $form['value'];
    }
    if (isset($form['value']['value']['#type'])) {
      $form['value']['value'] = $value_element + $form['value']['value'];
    }
    if (isset($form['value']['min']['#type'])) {
      $instance['label'] = t('Min');
      $form['value']['min'] = array(
        '#type' => 'mvf_widget',
        '#field' => $this->options['field_definition'],
        '#instance' => $instance,
        '#entity_type' => $instance['entity_type'],
        '#pre_render' => array('mvf_views_label_pre_render'),
      ) + $this->options_to_mvf_default_value($this->value['min']) + $form['value']['min'];
    }
    if (isset($form['value']['max']['#type'])) {
      $instance['label'] = t('Max');
      $form['value']['max'] = array(
        '#type' => 'mvf_widget',
        '#field' => $this->options['field_definition'],
        '#instance' => $instance,
        '#entity_type' => $instance['entity_type'],
        '#pre_render' => array('mvf_views_label_pre_render'),
      ) + $this->options_to_mvf_default_value($this->value['max']) + $form['value']['max'];
    }
  }

  function options_validate(&$form, &$form_state) {
    parent::options_validate($form, $form_state);
    // Additionally we want to validate filter data is entered.
    $operator = $this->operators();
    $operator = $operator[$form_state['values']['options']['operator']];
    $required_subvalues = array();
    // There are required sub values only if the filter is not exposed or
    // exposed and required.
    if (!$this->options['exposed'] || ($this->options['exposed'] && $form_state['values']['options']['expose']['required'])) {
      $required_subvalues = drupal_map_assoc($operator['required subvalues']);
    }
    foreach (array_intersect_key($form_state['values']['options']['value'], $required_subvalues) as $type => $subvalue) {
      if (module_invoke('mvf', 'field_is_empty', $subvalue, $this->options['field_definition'])) {
        form_error($form['value'][$type], t('Please, enter values into %title', array(
          '%title' => $form['value'][$type]['#title'],
        )));
      }
    }
  }

  /**
   * Since our filter operates on 2 form elements we can't use parent's method.
   */
  function accept_exposed_input($input) {
    // Converting single value into array('value' => $value), as the rest of
    // this code expects it reside there.
    $value = &$input[$this->options['expose']['identifier']];
    $info = $this->operators();
    $operator = $info[$this->operator];
    if ($operator['values'] == 1 && in_array('value', $operator['required subvalues'])) {
      $value = array('value' => $value);
    }

    $accept = parent::accept_exposed_input($input);
    if (!$accept) {
      return FALSE;
    }

    foreach ($operator['required subvalues'] as $required_subvalue) {
      if (module_invoke('mvf', 'field_is_empty', $value[$required_subvalue], $this->options['field_definition'])) {
        return FALSE;
      }
    }

    return $accept;
  }

  function build_group_validate($form, &$form_state) {
    // Out of the box our filter does not pass validation because our
    // value is an array of arrays, however, here is expected at most array of
    // strings/floats, or just a scalar value. So we need to substitute
    // our values with some dummy values that will pass validation and handle
    // input validation itself here in our method.
    $group_items = $form_state['values']['options']['group_info']['group_items'];
    // Our value will be substituted for parent's method call with this value
    // once we have validated it ourselves. This way we make sure no groundless
    // validation errors occur.
    $passable_value = 'pass me';
    foreach ($group_items as $id => $group) {
      // We keep only those sub arrays of 'value' that make sense for the
      // selected operator.
      $operator = $this->operators();
      $required_subvalues = drupal_map_assoc($operator[$group['operator']]['required subvalues']);
      $group['value'] = array_intersect_key($group['value'], $required_subvalues);

      $is_valid = TRUE;
      foreach ($group['value'] as $subvalue) {
        // For validation we use hook_field_is_empty().
        if (module_invoke('mvf', 'field_is_empty', $subvalue, $this->options['field_definition'])) {
          $is_valid = FALSE;
          break;
        }
      }
      if ($is_valid) {
        // If this group is valid, we substitute its value with something
        // that will pass validation in parent's method.
        $form_state['values']['options']['group_info']['group_items'][$id]['value'] = $passable_value;
      }
    }
    parent::build_group_validate($form, $form_state);
    // Restoring real values once we are done with calling parent's method.
    $form_state['values']['options']['group_info']['group_items'] = $group_items;
  }

  function op_simple($field) {
    $field = array(
      'value' => $this->table_alias . '.' . $this->definition['field_name'] . '_' . mvf_subfield_to_column('value'),
      'unit' => $this->table_alias . '.' . $this->definition['field_name'] . '_' . mvf_subfield_to_column('unit'),
    );
    $measure = array_pop($this->options['field_definition']['settings']['unit']['handler_settings']['target_bundles']);
    $from_unit = units_unit_load($this->value['value'][mvf_subfield_to_column('unit')]);
    $where = db_or();

    foreach (units_unit_by_measure_load_multiple($measure) as $to_unit) {
      $converted_value = units_convert($this->value['value'][mvf_subfield_to_column('value')], $from_unit->machine_name, $to_unit->machine_name);
      $unit_id = entity_extract_ids('units_unit', $to_unit);
      $unit_id = array_shift($unit_id);
      $where->condition(db_and()->condition($field['value'], $converted_value, $this->operator)->condition($field['unit'], $unit_id));
    }

    $this->query->add_where($this->options['group'], $where);
  }

  function op_between($field) {
    $field = array(
      'value' => $this->table_alias . '.' . $this->definition['field_name'] . '_' . mvf_subfield_to_column('value'),
      'unit' => $this->table_alias . '.' . $this->definition['field_name'] . '_' . mvf_subfield_to_column('unit'),
    );
    $measure = array_pop($this->options['field_definition']['settings']['unit']['handler_settings']['target_bundles']);
    $where = db_or();

    foreach (units_unit_by_measure_load_multiple($measure) as $to_unit) {
      $from_units = array(
        'min' => $this->value['min'][mvf_subfield_to_column('unit')],
        'max' => $this->value['max'][mvf_subfield_to_column('unit')],
      );
      $tmp = units_unit_load_multiple(array_values($from_units));
      $converted_value = array();
      foreach ($from_units as $k => $v) {
        $from_units[$k] = $tmp[$v];
        $converted_value[$k] = units_convert($this->value[$k][mvf_subfield_to_column('value')], $from_units[$k]->machine_name, $to_unit->machine_name);
      }

      $to_unit = entity_extract_ids('units_unit', $to_unit);
      $to_unit = array_shift($to_unit);
      switch ($this->operator) {
        case 'between':
          $where->condition(db_and()
              ->condition($field['value'], $converted_value, $this->operator)
              ->condition($field['unit'], $to_unit)
          );
          break;

        case 'not between':
          $where->condition(db_and()
              ->condition(db_or()
                  ->condition($field['value'], $converted_value['min'], '<=')
                  ->condition($field['value'], $converted_value['max'], '>=')
              )
              ->condition($field['unit'], $to_unit)
          );
          break;
      }
    }
    $this->query->add_where($this->options['group'], $where);
  }

  function admin_summary() {
    if ($this->is_a_group()) {
      return t('grouped');
    }
    if (!empty($this->options['exposed'])) {
      return t('exposed');
    }

    $operators = $this->operators();
    $output = check_plain($operators[$this->operator]['short']) . ' ';
    switch ($operators[$this->operator]['values']) {
      case 1:
        $output .= t('@value @unit', array(
          '@value' => $this->value['value']['value'],
          '@unit' => entity_label('units_unit', units_unit_load($this->value['value'][mvf_subfield_to_column('unit')])),
        ));
        break;

      case 2:
        $units = units_unit_load_multiple(array($this->value['min'][mvf_subfield_to_column('unit')], $this->value['max'][mvf_subfield_to_column('unit')]));
        $units = array(
          'min' => $units[$this->value['min'][mvf_subfield_to_column('unit')]],
          'max' => $units[$this->value['max'][mvf_subfield_to_column('unit')]],
        );

        $output .= t('@min_value @min_unit and @max_value @max_unit', array(
          '@min_value' => $this->value['min'][mvf_subfield_to_column('value')],
          '@min_unit' => entity_label('units_unit', $units['min']),
          '@max_value' => $this->value['max'][mvf_subfield_to_column('value')],
          '@max_unit' => entity_label('units_unit', $units['max']),
        ));
        break;
    }
    return $output;
  }

  /**
   * Supportive function.
   *
   * Convert filter's entered options into the format expected by 'mvf_widget'
   * form element so the values entered into filter are used as default values
   * of the elements generated by 'mvf_widget'.
   *
   * @param array $options
   *
   * @return array
   *   Array to be merged into form element definition
   */
  function options_to_mvf_default_value($options) {
    return array(
      '#delta' => 0,
      '#items' => array(
        0 => $options,
      ),
    );
  }
}
