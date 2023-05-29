/*
AUTORES :Javier González Brito .
        :Javier ...
        :Izan ...
        :Airan...
        :Jose...
        :Franco
        :Alejandro Barreto
ULT FECHA: 17/04/2023
Aquí estará la lista de objetos disponibles en el juego
COMENTARIOS: 
*/
#include <iostream>
#include "salud.h"
#include "atributos.h"
#include "conocimientos.h"
#include "personaje.h"
#include "dll_node_t.h"
#include "dll_t.h"
#include <cassert>
#include "mochila.h"
#include "objetos.h"

int Objeto::get_vida_extra(void) const{
  return vida_extra_;
}
int Objeto::get_damage(void) const{
  return damage_;
}