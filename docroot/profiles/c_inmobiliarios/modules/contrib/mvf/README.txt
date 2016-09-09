
-- SUMMARY --

Measured Value Field provides a new field type. This field type consists of 2
subfields:
* value (numeric value of something - this part is outsourced to Number module)
* unit (units in which the given value is measured - this part is outsourced to
Entity Rereference module)
Then in instance settings you can specify in what units you want to render the
entered value (this part is outsourced to Units module). Joining these powerful
modules allows to introduce Measured Value Field.

-- REQUIREMENTS --

The Measure Value Field module requires the following modules:
* Units
* Entity Reference
* Number
* CTools

-- INTEGRATION --

Measured Value Field module currently integrates with the following modules:
* Views - by providing its custom handlers
* Entity API - by providing its entity meta data wrappers. You can run the
  following code:
  <?php
    $node = node_load(1);
    $wrapper = entity_metadata_wrapper('node', $node);

    // Get unit value:
    $value = $wrapper->field_mvf->value->value();
    dpm($value); // 12

    // Get Measure id:
    $unit_id = $wrapper->field_mvf->unit->raw();
    dpm($unit_id); // 5

    // Get whole unit object:
    $unit_object = $wrapper->field_mvf->unit->value();
    dpm($unit_object); // Unit Object

    // Get Measure label:
    $unit_label = $wrapper->field_mvf->unit->value()->label;
    dpm($unit_label); // Dollar

    $euro_value = $wrapper->field_mvf->converted_euro->value();
    dpm($euro_value); // Whatever it is 12 USDs converted into EUR

    // You have all options for fetching converted value like:
    // $wrapper->field_mvf->converted_{machine_name_of_the_target_unit}->value();

    // Change field value and measure type:
    $wrapper->field_mvf->value = 5;
    $wrapper->field_mvf->unit = 6;

    $value = $wrapper->field_mvf->value->value();
    dpm($value); // 5

    $unit_label = $wrapper->field_mvf->unit->value()->label;
    dpm($unit_label); // Euro

    // For multiple fields:
    $value = $wrapper->field_mvf[0]->value->value();
    dpm($value); // 5

    // Check all multiple values:
    foreach($wrapper->field_mvf as $field) {
       $value = field->value->value();
       dpm($value); // 5
    }
  ?>

-- INSTALLATION --

Install as usual. After installation you will have additional field types
available to be attached to any other entity (nodes, taxonomy terms, etc.).

-- CONFIGURATION --

The module itself does not provide any configuration as of the moment.
