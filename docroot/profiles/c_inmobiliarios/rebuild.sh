#!/bin/bash
rm -rf modules/contrib
rm -rf themes/contrib
rm -rf libraries
drush make --working-copy --no-core --contrib-destination=. c_inmobiliarios.make .
drush updatedb -y && drush cc all
