<?php

/**
 * @file
 * Definition of UnitsAbstractUIController class.
 */

/**
 * Abstract Admin UI controller class for units and measures.
 */
abstract class UnitsAbstractUIController extends EntityDefaultUIController {

  public function hook_menu() {
    $items = parent::hook_menu();
    // By default, for overview page entity UI controller class set access of
    // 'view' entity, but that is not good for measures, as measures and units
    // have to be publicly viewed, but at the same time public should not be
    // able to access overview admin table.
    $items[$this->path]['access arguments'] = array('update', $this->entityType);
    return $items;
  }

}
