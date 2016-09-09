<?php

/**
 * @file
 * Definition of UnitsEntityTranslationHandler class.
 */

/**
 * Entity translation class for units of measurement.
 */
class UnitsEntityTranslationHandler extends EntityTranslationDefaultHandler {

  public function __construct($entity_type, $entity_info, $entity) {
    // Alter the entity info here and substitute the measure %load with its
    // real value.
    foreach ($entity_info['translation']['entity_translation']['path schemes'] as $k => $v) {
      foreach (array('base path', 'view path', 'edit path', 'translate path') as $key) {
        $value = explode('/', $v[$key]);
        $value[$entity_info['translation']['entity_translation']['bundle argument']] = arg($entity_info['translation']['entity_translation']['bundle argument']);
        $entity_info['translation']['entity_translation']['path schemes'][$k][$key] = implode('/', $value);
      }
    }
    parent::__construct($entity_type, $entity_info, $entity);
  }

  protected function getEntityId() {
    return entity_id($this->getEntityType(), $this->getEntity());
  }

}
