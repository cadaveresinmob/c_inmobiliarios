# Contribuyendo a Cadáveres inmobiliarios
 
Si estás leyendo este documento es que te estás planteando colaborar de forma activa con Cadáveres inmobiliarios, así que antes que nada ¡Muchas gracias por echarnos una mano! :tada:

### Contenido del documento

* [Información sobre el proyecto](#información-sobre-el-proyecto)
* [Información técnica](#información-técnica)
 * [Sobre la web](#sobre-la-web)
 * [Estructura de archivos y carpetas](#estructura-de-archivos-y-carpetas)
* [Formas de participar](#formas-de-participar)
 * [Toma de decisiones](#toma-de-decisiones)
 * [Testeando](#testear)
* [Directrices para participar](#directrices-para-participar)

## Información sobre el proyecto

Cadáveres inmobiliarios es una recopilación participativa de proyectos arquitectónico y urbanístico inacabados, infrautilizados o vacíos a los que llamamos "Cadáveres inmobiliarios" y que son el reflejo más claro de la burbuja inmobiliaria.

Cualquier persona puede añadir nuevos cadáveres inmobiliarios que conozca y no estén en la lista (desenterrar un cadáver) o bien añadir nueva información a un cadáver existente (adoptarlo). El objetivo de esta ambiciosa recopilación es la de proporcionar información exhaustiva de manera accesible para que cada cual la utilice acorde con sus intereses.

Tienes más información en la página oficial:

* [Sobre cadáveres inmobiliarios](http://cadaveresinmobiliarios.org/sobre/)
* [Objetivos](http://cadaveresinmobiliarios.org/objetivos-de-cada-colectivo-o-individuo/)
 

## Información técnica

### Sobre la web

A nivel técnico, la web es una [distribución de drupal](https://www.drupal.org/documentation/build/distributions) en su [versión 7](http://drupal.org) que incluye todo lo necesario para ser instalada y funcionar. Actualmente cumple con los siguientes requisitos:

* Interfaz de edición de la base de datos de cadáveres inmobiliarios, tanto para añadir nuevos datos como para modificar los existentes
* Localización y visualización básica de datos, en función de algunos criterios predefindos 
* API: expone los datos de la base de datos para que puedan ser utilizados por terceras partes

#### Estructura de archivos y carpetas

El repositorio contiene la siguiente estructura de carpetas

* `data`: contiene una copia de los datos de cadáveres adoptados para hacer una importación.
* `docroot`: la carpeta que contiene el drupal y donde debe apuntar el dominio.
* `drush`: comandos y alias específicos de drush.
* `scripts`: script para reinstalar drupal usando el perfil de instalación específico de cadáveres inmobiliarios.

Además de estas carpetas resulta especialmente importante la carpeta `docroot/profiles/c_inmobiliarios` que contiene el perfil de instalación así como todas sus dependencias (módules, themes, features, bibliotecas...). El contenido del perfil de instalación se estructura como sigue:

* `docroot/profiles/c_inmobiliarios`
  * `modules`: contiene los módulos necesarios. Los módulos determinan la funcionalidad de la web.
    * `contrib` para los módulos desarrollados por terceros (es decir, todos los que se encuentran en drupal.org)
    * `custom`: para los módulos desarrollados a medida para la aplicación cadáveres inmobiliarios
    * `features`: para las features utilizadas en el perfil de instalación. Las features determinan la configuración del sitio.
  * `themes`: los themes determinan el aspecto visual de la web
    * `contrib` para los themes desarrollados por terceros (es decir, todos los que se encuentran en drupal.org)
    * `custom`: para los themes desarrollados a medida o para subthemes que personalicen aspectos de los themes contribuidos
  * `libraries`: para las bibliotecas necesarias para el funcionamiento del sitio (ej: leaflet para el mapa)

Muy importante: únicamente deberemos trabajar con el contenido de la carpeta `docroot/profiles/c_inmobiliarios`. El resto de archivos no se alterarán (salvo posibles situaciones excepcionales que deberemos justificar) y se utilizar los archivos por defecto de drupal. 

### Sobre git y github

Para las personas que no estéis familiarizadas con eso de github, os explico brevemente para que podais participar. ¡No hace falta saber programar!

* Git es un software para controlar los cambios en el desarrollo de proyectos, habitualmente de progamación. Puedes controlar qué cambios se han hecho al código de un proyecto a lo largo del tiempo ([más info sobre git](http://www.git-scm.com/)).
* [Github](http://github.com) es un servicio web muy popular que aloja proyectos de desarrollo software y que utiliza Git. Es gratuito hacerse una cuenta y colgar tus proyectos. Se utiliza para compartir y abrir el código de los proyetos y permitir la participación y replica por otros. Un proyecto en github es solamente el código, tienes que descargarlo en tu ordenador o subirlo a un servidor web para poder verlo. Cada proyecto en Github, como el de la web de cadáveres inmobiliadios tiene:

 * [code](https://github.com/cadaveresinmob/c_inmobiliarios): Todos archivos para replicar un proyecto.
 * [commits](https://github.com/cadaveresinmob/c_inmobiliarios/commits/master) cada unos de los cambios que se hace al código se llama commit
 * [issues](https://github.com/cadaveresinmob/c_inmobiliarios/issues): los problemas o sugerencias que tiene un proyecto. En ese lugar estamos teniendo la conversación  (Hace falta crearse un usuario en github para poder comentar).

En Cadáveres inmobiliarios hemos abierto un usuario grupal para albergar todos los proyectos que se vayan haciendo sobre el tema https://github.com/cadaveresinmob Si quereis que os añadamos al grupo ¡decidlo!

Así que os animo a que os hagais un usuario, os animeis a probar la web en pruebas () y participeis en las diferentes conversaciones "issues" abiertos en github. No hace falta saber programación, sino ganas de probar e ir encontrando errores, cosas que mejorar o pensar nuevas ideas.

## Formas de participar

Tal y como se describe en [esta página de la web oficial](http://cadaveresinmobiliarios.org/como-participar/), hay muchas maneras de participar con el proyecto. Una de ellas es ayudar en lo relativo al funcionamiento de la página web que se encuentra en [este mismo repositorio](https://github.com/cadaveresinmob/c_inmobiliarios). Este documento detalla precisamente cómo puedes aydarnos con la web.

Puedes ayudarnos a que la web sea mejor de las siguientes maneras:

* **Testeando** utilizando la web normalmente, y detectando errores o aspectos mejorables.
* **Documentando** el funcionamiento de la web para facilitar el trabajo a los recien llegados.
* **Traduciendo** la interfaz
* **Revisando** código
* Desarrollando código

### Toma de decisiones

Si deseas estar al corriente de las últimas conversaciones y participar en la toma de decisiones deberás suscribirte a la [lista de correo](https://groups.google.com/forum/#!forum/hacia-base-datos-inmobiliaria).

### Testear

El proceso de testeo sería el siguiente:

1. Accede a la web de pruebas: http://new.cadaveresinmobiliarios.org
1. Utiliza la web normalmente o como crees que la podría utilizar otra persona. Si detectas algún problema o aspecto mejorable pasa al punto siguiente.
1. Abrir una issue en github (leer las [directrices](#crear-issues)) teniendo en cuenta que:
  * si es un problema: 
    * explica lo más detalladamente posible lo que estabas haciendo, lo que debería haber pasado y lo que ha pasado realmente.
    * añádele la etiqueta `bug`
  * si es una propuesta de mejora
    * justifica la necesidad y describe lo más detalladamente posible la propuesta.
    * añádele la etiqueta `enhancement`

## Directrices para participar

Lo que se detalla a continuación no son leyes grabadas a fuego, son más bien recomendaciones basadas en la experiencia (propia y de proyectos ajenos) para que la tarea de colaborar con Cadáveres Inmobiliarios sea lo más eficaz y enriquecedora posible.

### Crear issues

Explicar cómo funciona y particularidades de etiquetas, milestones...

### Pull requests 

(Explicar que se prefieren los pull requests y explicar cómo funcionan)

### Sobre el código

Seguir unas normas (Estándares) es crucial cuando se traba en equipo. En este proyecto, además de seguir los [coding standards de drupal](https://www.drupal.org/coding-standards) (En [esta página](https://www.drupal.org/node/147789) explican cómo configurar el entorno de desarrollo, y más concretamente cómo configurar los editores más habituales para seguir los estándares de drupal) deberemos tener en cuenta lo siguiente:

* Mantener la [estructura de archivos y carpetas](#estructura-de-archivos-y-carpetas) especificada anteriormente.
* Git:
 * Nomenclatura de ramas: segiremos el patrón `##_nombre`, donde `##` es el número de la issue a la que nos referimos y nombre puede ser cualquier explicación. A modo de ejemplo podríamos crear una ramma llamada `24_piwik`, ya que la [issue #24](https://github.com/cadaveresinmob/c_inmobiliarios/issues/24) es la que hace referencia a la necesidad de instalar un sistema de estadísticas.
 * Mensajes de los commits: En inglés y termiados en un punto. Siempre que nos refiramos a una issue, los nombres de los commits deberían seguir el patrón Task #<issue> - <mensaje>. De esta forma la issue mostrará los commits, y el commit enlazará a la issue.
