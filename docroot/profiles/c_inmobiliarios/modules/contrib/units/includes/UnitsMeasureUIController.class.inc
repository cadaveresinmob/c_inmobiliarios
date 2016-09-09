<?php

/**
 * @file
 * Definition of UnitsMeasureUIController class.
 */

/**
 * Admin UI controller class for entity type 'units_measure'.
 */
class UnitsMeasureUIController extends UnitsAbstractUIController {

  protected function overviewTableHeaders($conditions, $rows, $additional_header = array()) {
    // Adding extra column for managing units of this measure.
    $additional_header[] = t('Units');
    return parent::overviewTableHeaders($conditions, $rows, $additional_header);
  }

  protected function overviewTableRow($conditions, $id, $entity, $additional_cols = array()) {
    // Adding extra cell for managing units of this measure.
    $units_entity_info = entity_get_info('units_unit');
    $additional_cols[] = l('manage units', str_replace('%units_measure_machine_name', $entity->measure, $units_entity_info['admin ui']['path']));

    $row = parent::overviewTableRow($conditions, $id, $entity, $additional_cols);

    // We have to strip out "Manage Display" link, as currently units cannot be
    // viewed.
    foreach ($row as $i => $cell) {
      if (is_array($cell)) {
        $cell = $cell['data'];
      }
      if (is_scalar($cell) && strpos($cell, $this->path . '/manage/' . $id . '/display') !==  FALSE) {
        $row[$i] = '';
        break;
      }
    }
    return $row;
  }

}
