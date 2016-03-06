<?php

/**
 * @file
 * Definition of mvf_handler_field_mvf class.
 */

/**
 * Base Views Field Handler for field types defined in MVF module.
 */
class mvf_handler_field_mvf extends views_handler_field_field {

  function click_sortable() {
    if (!parent::click_sortable()) {
      return FALSE;
    }

    // Among other standard reasons not to be click sortable, MVF field column
    // many not be sortable if the measure's conversion is not linear. For non
    // standard convert callbacks we do not have any knowledge about how
    // conversion happens and thus we are hintless about how to sort it.
    $field = field_info_field($this->definition['field_name']);
    $measure = units_measure_machine_name_load(reset($field['settings']['unit']['handler_settings']['target_bundles']));
    return $measure->converter == 'linear';
  }

  function click_sort($order) {
    $this->ensure_my_table();
    // Loading the field info, we will need the information about db columns.
    $field = field_info_field($this->definition['field_name']);

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
    $this->query->add_orderby(NULL, $orderby_expression, $order, 'mvf_orderby');
  }

}
