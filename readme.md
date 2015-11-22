# Cadáveres Inmobiliarios

Este prototipo para [cadáveres inmobiliarios](http://cadaveresinmobiliarios.org) utiliza un perfil de instalación de drupal 7 ([leer acerca de los perfiles de instalación](https://www.drupal.org/node/306267)) y tiene como objetivos principales los siguientes:
* ser una plataforma que permita añadir y editar de forma visual los cadáveres inmobiliarios.
* ofrecer una API para utilizar la base de datos de los cadáveres inmobiliarios en sitios de terceros.

## Instalación

### Interfaz

Deberemos ejecutar una instalación normal de drupal ([ver instrucciones de instalación](http://drupal.org/documentation/install)) con la particularidad de que en el paso 1 deberemos elegir el perfil de instalación llamado `c_inmobiliarios`

### Con drush

Prerequisito: tener instalado drush ([ver instrucciones de instalación]('http://docs.drush.org/en/master/install'))

Ejecutar el comando `drush si c_inmobiliarios --db-url=<mysql://root:pass@host/db>`, donde deberemos eliminar los símbolos < > y sustituir los datos de nuestra base de datos y usuario y contraseña.

## Estructura de carpetas

* `data`: contiene una copia de los datos de cadáveres adoptados para hacer una importación.
* `docroot`: la carpeta que contiene el drupal y donde debe apuntar el dominio.
* `drush`: comandos y alias específicos de drush.
* `scripts`: script para reinstalar drupal usando el perfil de instalación específico de cadáveres inmobiliarios.
