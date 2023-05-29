/*
AUTORES :Javier González Brito .
        :Javier ...
        :Izan ...
        :Airan...
        :Jose...
        :Franco
        :Alejandro Barreto
ULT FECHA: 17/04/2023
Clase mochila
COMENTARIOS: Aquí estarán los objetos que obtenga el personaje
*/
#ifndef MOCHILA_H_
#define MOCHILA_H_
#include <iostream>
#include <cctype>
#include "salud.h"
#include "atributos.h"
#include "conocimientos.h"
#include "personaje.h"
#include "dll_node_t.h"
#include "dll_t.h"
#include <cassert>

template <class T> class Mochila {
 public:
    int get_capacidad(void) const; // Capacidad que tiene
    int get_cantidad(void) const; // Obejtos que tiene
    void añadir_objeto(objeto);
 private:
    int capacidad_;
    int cantidad_; 
    dll_t<T> lista_;                
}

















#endif  // MOCHILA_H_