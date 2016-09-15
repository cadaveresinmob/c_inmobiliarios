<?php
/**
 * @file
 * ft_c_inmobiliarios_multilingual.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function ft_c_inmobiliarios_multilingual_locale_default_languages() {
  $languages = array();

  // Exported language: ca.
  $languages['ca'] = array(
    'language' => 'ca',
    'name' => 'Catalan',
    'native' => 'Català',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n>1)',
    'domain' => '',
    'prefix' => 'ca',
    'weight' => 0,
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
