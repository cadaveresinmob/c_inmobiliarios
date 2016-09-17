<?php
/**
 * @file
 * ft_c_inmobiliarios_core.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function ft_c_inmobiliarios_core_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => -7,
  );
  // Exported language: es.
  $languages['es'] = array(
    'language' => 'es',
    'name' => 'Spanish',
    'native' => 'Español',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'es',
    'weight' => -10,
  );
  // Exported language: eu.
  $languages['eu'] = array(
    'language' => 'eu',
    'name' => 'Basque',
    'native' => 'Euskera',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'eu',
    'weight' => 0,
  );
  // Exported language: gl.
  $languages['gl'] = array(
    'language' => 'gl',
    'name' => 'Galician',
    'native' => 'Galego',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'gl',
    'weight' => 0,
  );
  return $languages;
}
