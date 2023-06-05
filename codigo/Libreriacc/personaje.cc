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

template<class T> Personaje<T>::Personaje(Atributos atributos, Estadistica estadistica) {
  atributos_ = atributos;
  estadisticas_ = estadistica;
  Salud salud(100,100,100,100,100,100);
  salud_ = salud;
  Mochila Mochila(10);
  }