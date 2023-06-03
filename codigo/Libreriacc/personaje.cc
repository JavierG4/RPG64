/*
AUTORES :Javier González Brito .
        :Javier ...
        :Izan ...
        :Airan...
        :Jose...
        :Franco
        :Alejandro Barreto
ULT FECHA: 17/04/2023
Clase Personaje
COMENTARIOS: Clase principal del personaje
*/
#include "libreria.h"

Personaje::Personaje(Atributos atributos, Estadisctica estadisctica) {
  atributos_ = atributos;
  estadisticas_ = estadisticas;
  mochila_.set_capacidad(15);
  mochila_.set_cantidad(0);
  salud_.set_cabeza(100);
  salud_.set_piernas(100);
  salud_.set_interior(100);
  salud_.set_torso(100);
  salud_.set_brazos(100);
  }