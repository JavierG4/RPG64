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
#include <iostream>
#include "consumible.h"
#include "objetos.h"
#include "dll_node_t.h"
#include "dll_t.h"
#include "mochila.h"
#include "salud.h"
#include "atributos.h"
#include "estadistica.h"
#include "personaje.h"
#include <cassert>
#include <string>
#include "maze_t.hpp"
#include <cstdlib>
#include <fstream>
#include <unistd.h>


Personaje<T>::Personaje(Atributos atributos, Estadistica estadistica) {
  atributos_ = atributos;
  estadisticas_ = estadistica;
  Salud salud(100,100,100,100,100,100);
  salud_ = salud;
  Mochila<dll_node_t> Mochila()
  }