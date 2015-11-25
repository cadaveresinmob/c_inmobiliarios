# Notas migración

Sobre el google docs:

* Campos que contienen números mal formateados (en realidad son textos con puntos o comas mal puestos):
** superficie_terreno
** numero_habitantes_previsto_planeamiento -> en la hoja de cálculo de drive es un campo calculado, pero al importarlo se importa como texto, ya que añade comas al separador de miles y puntos como deparador de decimales.
* Campos de fecha que no son fechas (tienen el nombre del mes)

Sobre la migración de datos a drupal:

* Los archivos adjuntos se pierden, pues en google están como urls. Quizá estaría mejor mapearlos como enlaces.