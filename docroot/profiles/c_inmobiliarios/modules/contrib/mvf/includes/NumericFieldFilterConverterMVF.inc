<?php

/**
 * @file
 * Definition of NumericFieldFilterConverterMVF.
 */

/**
 * Class converting fields defined in Number module into a SQL expression.
 */
class NumericFieldFilterConverterMVF implements NumericFieldFilterConvertableInterface {

  /**
   * Information on what Field API field types this class supports.
   *
   * Provide information on what field types this class is capable of converting
   * into a SQL expression.
   *
   * @return array
   *   Array of field types this class supports
   */
  public static function supportedFieldTypes() {
    return array_keys(module_invoke('mvf', 'field_info'));
  }

  /**
   * Provide column name on which Numeric Field Filter should filter.
   *
   * Filter handler for this column of each supported Field API field type will
   * be changed to the filter handler provided by Numeric Field Filter module.
   *
   * @param array $field
   *   Field API field definition array for which the column name should be
   *   returned
   *
   * @return string
   *   Column name for which the filter handler should be changed to the handler
   *   provided by Numeric Field Filter module
   */
  public static function columnName($field) {
    return mvf_subfield_to_column('value');
  }

  /**
   * Generate extra value form elements to be merged into value form of handler.
   *
   * Converter classes should use this method to provide any extra form elements
   * that will be merged into filter's value form, required by the field type
   * they work with. Basically if your field type requires any thing more than
   * just formula textfield, it is here where you will be asked to provide those
   * additional form elements. Advice: probably all you'll want to do here is
   * to invoke 'widget_form' on your field type and, if necessary, slightly
   * alter it.
   *
   * @param array $form
   *   Array of form into where your output will be merged, you might get
   *   some useful configuration options from this array
   * @param array $form_state
   *   Array of form state that acompanies $form
   * @param array $field
   *   Field API field definition array for which the additional form elements
   *   are asked to be generated
   * @param array $instance
   *   Field API instance definition array of an instance of the supplied
   *   $field, trying to get you as much context as possible
   * @param mixed $default_value
   *   Previously submitted values of your form elements in the format as they
   *   are expected to be submitted. You are adviced to use this argument as a
   *   source of default values for your extra form elements
   *
   * @return array
   *   Extra value form elements that need to be merged into value form of
   *   filter handler by the supplied field type
   */
  public static function valueFormElement($form, $form_state, $field, $instance, $default_value) {
    $element = array(
      '#type' => 'mvf_widget',
      '#field' => $field,
      '#instance' => $instance,
      '#default_value' => $default_value,
      '#title' => t('Unit'),
      '#process' => array('_mvf_widget_process', '_mvf_widget_numeric_field_filter_process'),
    );
    return $element;
  }

  /**
   * Convert Field API field into SQL expression.
   *
   * Convert Field API field structure into SQL expression that can be used in a
   * Views filter. If for whatever reason you find it impossible to convert the
   * supplied field into a SQL expression, you are expected to throw an
   * exception of type NumericFieldFilterUnconvertableFieldException.
   *
   * @param array $field
   *   Field API field definition array for which the SQL expression should be
   *   generated
   * @param string $table_alias
   *   Table alias under which the table of the supplied field is referred to
   *   in the view for which you are asked to generate the SQL expression
   * @param mixed $values
   *   Data submitted into your extra value form elements defined in
   *   NumericFieldFilterConvertable::valueFormElement(). Probably you will need
   *   these while generating the SQL expression
   * @param bool $revision
   *   Whether you are asked to generate the SQL expression on a revision of a
   *   field value or on the non-revisioned value of field. Mostly
   *   revision-wiseness is already taken care in $table_alias argument, because
   *   table alias will vary based on whether filter operates on revision or
   *   not, yet, we provide you extra context in case you need to know it
   *
   * @return string
   *   SQL expression that yeilds value of that field, it will be used to
   *   compose WHERE condition in a Views filter
   */
  public static function fieldConvertToExpression($field, $table_alias, $values, $revision = FALSE) {
    // First of all we need to load measure of MVF field.
    $measure = reset($field['settings']['unit']['handler_settings']['target_bundles']);
    $measure = units_measure_machine_name_load($measure);
    if ($measure->convert_callback != UNITS_DEFAULT_CONVERT_CALLBACK) {
      // We can't work with custom converter callbacks, because further down
      // below we are gonna assume that the units are in linear relationship one
      // with another based on their factor numbers.
      throw new NumericFieldFilterUnconvertableFieldException(t('Measure @measure does not use the default converter callback.', array(
        '@measure' => entity_label('unit_measure', $measure),
      )));
    }

    // Eventually we hope to have something like the following in result:
    // [field-value-column] * [field-factor], where [field-value-column] is the
    // value stored in DB, and [field-factor] is the factor to convert
    // [field-value-column] from whatever units it is stored in, into the target
    // unit defined by user's input, so [field-factor] will be something like
    // the following:
    // CASE [field-unit-column]
    //   WHEN [unit1] THEN [factor1]
    //   WHEN [unit2] THEN [factor2]
    //   ...
    // END
    // Summing the above:
    // [field-value-column] * CASE [field-unit-column]
    //                          WHEN [unit1] THEN [factor1]
    //                          WHEN [unit2] THEN [factor2]
    //                        END

    $target_unit = units_unit_load($values[mvf_subfield_to_column('unit')]);

    // We need to find out column names for value and for unit.
    $tmp = $field['storage']['details']['sql'];
    $tmp = $revision ? $tmp['FIELD_LOAD_REVISION'] : $tmp['FIELD_LOAD_CURRENT'];
    $tmp = array_pop($tmp);
    $storage = array(
      'value' => $tmp[mvf_subfield_to_column('value')],
      'unit' => $tmp[mvf_subfield_to_column('unit')],
    );

    $sql_factor = array();
    foreach (units_unit_by_measure_load_multiple($measure) as $unit) {
      $factor = units_convert(1, $unit->machine_name, $target_unit->machine_name);
      $sql_factor[] = '  WHEN ' . entity_id('units_unit', $unit) . ' THEN ' . $factor;
    }
    $sql_expression = 'CASE [field-unit-column]
[factor]
END';
    $sql_expression = str_replace(array(
      '[field-unit-column]',
      '[factor]',
    ), array(
      $table_alias . '.' . $storage['unit'],
      implode(PHP_EOL, $sql_factor),
    ), $sql_expression);

    $sql_expression = '(' . $table_alias . '.' . $storage['value'] . ' * ' . $sql_expression . ')';

    return $sql_expression;
  }
}
