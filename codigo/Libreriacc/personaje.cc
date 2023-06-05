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
#include "../Libreriah/libreria.h"

Personaje::Personaje(Atributos atri, Estadistica estad) {
  atributos_ = atri;
  estadisticas_ = estad;
  Salud salud(100,100,100,100,100);
  salud_ = salud;
  Mochila Mochila(10);
  }