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
#include "../Libreriah/libreria.h"

Mochila::Mochila(int capacidad) {
  capacidad_ = capacidad;
  cantidad_ = 0;
  dll_objeto aux;
  objetos_ = aux;
  consumibles_ = aux;
}

int Mochila::get_capacidad(void) const {
  return capacidad_;
}
int Mochila::get_cantidad(void) const {
  return cantidad_;
}
void Mochila::añadir_objeto(Objeto x) {
  dll_node_t<Objeto>* aux = NULL;
  aux->set_data(x);
  objetos_.push_front(aux);
}