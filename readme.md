# Cadáveres Inmobiliarios

Prototipo de Cadáveres Inmbobiliarios en drupal 7 para el hackaton.

## Instalación

### Interfaz

Deberemos ejecutar una instalación normal de drupal ([ver instrucciones de instalación](http://drupal.org/documentation/install)) con la particularidad de que en el paso 1 deberemos elegir el perfil de instalación llamado `c_inmobiliarios`

### Con drush

Prerequisito: tener instalado drush ([ver instrucciones de instalación]('http://docs.drush.org/en/master/install'))

Ejecutar el comando `drush si c_inmobiliarios --db-url=<mysql://root:pass@host/db>`, donde deberemos eliminar los símbolos < > y sustituir los datos de nuestra base de datos y usuario y contraseña.
