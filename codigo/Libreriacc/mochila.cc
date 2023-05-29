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
#include <iostream>
#include "salud.h"
#include "atributos.h"
#include "conocimientos.h"
#include "personaje.h"
#include "dll_node_t.h"
#include "dll_t.h"
#include <cassert>
#include "mochila.h"

template<class T> int Mochila<T>::get_capacidad(void) const {
  return capacidad_;
}
template<class T> int Mochila<T>::get_cantidad(void) const {
  return cantidad_;
}
template<class T> void Mochila<T>::añadir_objeto(objeto) {
  dll_node_t<T>* aux = NULL;
  aux->set_data(obejeto);
  lista_.push_front(aux);
}