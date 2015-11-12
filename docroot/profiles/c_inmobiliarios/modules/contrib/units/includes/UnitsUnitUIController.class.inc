<?php

/**
 * @file
 * Definition of UnitsUnitUIController class.
 */

/**
 * Admin UI controller class for entity type 'units_unit'.
 */
class UnitsUnitUIController extends UnitsAbstractUIController {

  public function __construct($entity_type, $entity_info) {
    // We have to override %units_measure_machine_name placeholder in
    // $this->path with real bundle.
    parent::__construct($entity_type, $entity_info);
    $this->path = str_replace('%units_measure_machine_name', $this->bundleArgument(), $this->path);
  }

  public function hook_menu() {
    // For this particular case we need to undo substitution of [bundle] to the
    // real bundle string made in __construct method of this class.
    $original_path = $this->path;
    $this->path = $this->entityInfo['admin ui']['path'];
    $items = parent::hook_menu();
    // We have to alter title for general overview page of entity admin UI,
    // to make it less confusing we need to include title of measure into it.
    $items[$this->path]['title callback'] = 'units_ui_unit_title';
    $items[$this->path]['title arguments'] = array($this->bundleArgumentPosition());

    // On the 'add' path, we need to provide info about the bundle of units
    // entity, so we have to slightly adjust the page callback and its
    // arguments in order to make it happen.
    $items[$this->path . '/add']['page callback'] = 'units_ui_entity_ui_get_bundle_add_form';
    $items[$this->path . '/add']['page arguments'] = array($this->entityType, $this->bundleArgumentPosition());

    // Putting back the original path once we are done.
    $this->path = $original_path;

    return $items;
  }

  public function overviewTable($conditions = array()) {
    // For better code reusage we prefer to add a condition and pass on to
    // parent's method, rather than running our own EntityFieldQuery and then
    // building the overview table.
    $conditions[$this->entityInfo['entity keys']['bundle']] = $this->bundleArgument();
    return parent::overviewTable($conditions);
  }

  /**
   * Supportive function.
   *
   * Extracts bundle argument from menu path.
   */
  public function bundleArgument() {
    return arg($this->bundleArgumentPosition());
  }

  public function entityFormSubmitBuildEntity($form, &$form_state) {
    // Before we handle on down the way to parent's method, we have to insert
    // the info about bundle into $form_state.
    $form_state['values'][$this->entityInfo['entity keys']['bundle']] = $this->bundleArgument();
    return parent::entityFormSubmitBuildEntity($form, $form_state);
  }

  /**
   * Supportive function.
   *
   * Based on entity info extracts menu argument position of bundle.
   */
  protected function bundleArgumentPosition() {
    // We have defined a custom property 'path bundle argument position' in
    // hook_entity_info(), of which we now take advantage.
    return $this->entityInfo['admin ui']['path bundle argument position'];
  }

}
