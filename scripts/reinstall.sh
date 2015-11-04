#!/bin/bash
export REPO_DIR=$(git rev-parse --show-toplevel 2> /dev/null)
echo $REPO_DIR
# If we provide an argument (any) we will rebuild the make
if ! [ -z "$1" ] ; then
  cd $REPO_DIR/docroot/profiles/c_inmobiliarios
  ./rebuild.sh
	# If we have a local.make build it too
  if [ -f local.make ] ; then
    drush make --working-copy --no-core --contrib-destination=. local.make .
  fi
  cd -
fi

drush si c_inmobiliarios -y --account-name=admin --account-pass=admin --site-name="Cadáveres Inmobiliarios" --site-mail=admin@example.com
drush devify --yes

drush rap 'anonymous user' 'access devel information'
drush rap 'authenticated user' 'access devel information'

;drush mi --group=migrate_default_content
drush views-dev

;drush l10n-update-refresh
;drush l10n-update

drush @c_inmobiliarios.local uli 1 admin/structure/features
