
-- SUMMARY --

Units module introduces ability to create units and make conversions between
them. This module does not provide much of external impact. Probably you will
install this module only if another one depends on it.

-- REQUIREMENTS --

The Units module requires the following modules:
* Entity API
* CTools

-- INSTALLATION --

Install as usual, units.module brings in ability to manage Unit and Measure
entities from code. If you want to have user interface on top of it, where you
will be able to manually alter/edit/create/delete entities, please, additionally
enable units_ui.module

-- CONFIGURATION --

The module itself does not provide any configuration as of the moment. However,
units_ui.module does provide configuration pages. Having installed
units_ui.module go to Structure -> Measures, and there you will be able to
manage available units and measures.

-- INTEGRATION WITH OTHER MODULES --

* Features (https://www.drupal.org/project/features): you can import/export your
measures and units
* Fields (ships with Drupal core): you can attach fields to your units on per
measure basis
