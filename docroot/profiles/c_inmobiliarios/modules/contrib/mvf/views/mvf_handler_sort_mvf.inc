<?php

/**
 * @file
 * Definition of mvf_handler_sort_mvf class.
 */

/**
 * Base Views Sort Handler for field types defined in MVF module.
 */
class mvf_handler_sort_mvf extends views_handler_sort {

  function query() {
    $this->ensure_my_table();
    // Loading the field info, we will need the information about db columns.
    $field = field_info_field($this->definition['field_name']);

    // First of all, right now we are able to sort only MVF based on the
    // measures that use linear conversion of Units module. We are gonna have
    // something like:
    // ORDER BY mvf_value * [factor of the unit in which value is measured]
    $measure = units_measure_machine_name_load(reset($field['settings']['unit']['handler_settings']['target_bundles']));
    if ($measure->converter != 'linear') {
      // Whooups... We can't sort MVF on a non linear measure. We show an error
      // message, log it to watchdog and halt.
      drupal_set_message(t('Measured Value Field cannot sort fields based on measures non linear conversion, such as %measure. Please, change sort settings of the view %view.', array(
        '%measure' => entity_label('units_measure', $measure),
        '%view' => $this->view->get_human_name(),
      )), 'error');
      watchdog('mvf', 'Measured Value Field cannot sort fields based on measures with non linear conversion, such as %measure. Please, change sort settings of the view %view.', array(
        '%measure' => entity_label('units_measure', $measure),
        '%view' => $this->view->get_human_name(),
      ), WATCHDOG_ERROR);
      return;
    }

    // We are going to join the {units_unit} table because it contains the
    // knowledge of factors.
    $units_unit_alias = $field['field_name'] . '_units_unit';
    // @todo: figure out whether it matters here if it is FIELD_LOAD_CURRENT or
    // FIELD_LOAD_REVISION?
    $storage = reset($field['storage']['details']['sql']['FIELD_LOAD_CURRENT']);
    $unit_units_entity_info = entity_get_info('units_unit');

    $join = new views_join();
    $join->construct('units_unit', $this->table, $storage[mvf_subfield_to_column('unit')], $unit_units_entity_info['entity keys']['id'], array(), 'INNER');

    $units_unit_alias = $this->query->add_relationship($units_unit_alias, $join, $this->table_alias, $this->relationship);

    $orderby_expression = $this->table_alias . '.' . $this->real_field . ' * ' . $units_unit_alias . '.factor';
    $this->query->add_orderby(NULL, $orderby_expression, $this->options['order'], 'mvf_orderby');
  }

}
