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
#include "../libreriah/libreria.h"

template<class T> Mochila<T>::Mochila(int capacidad) {
  capacidad_ = capacidad;
  cantidad_ = 0;
  dll_t<Objeto> aux;
  objetos_ = aux;
  consumibles_ = aux;
}

template<class T> int Mochila<T>::get_capacidad(void) const {
  return capacidad_;
}
template<class T> int Mochila<T>::get_cantidad(void) const {
  return cantidad_;
}
template<class T> void Mochila<T>::añadir_objeto(Objeto x) {
  dll_node_t<T>* aux = NULL;
  aux->set_data(x);
  objetos_.push_front(aux);
}