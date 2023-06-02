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
#include "libreria.h"

template <class T> class Mochila {
 public:
//getters
    int get_capacidad(void) const; // Capacidad que tiene
    int get_cantidad(void) const; // Obejtos que tiene
//Setters
    void set_capacidad(int); //set de capacidad
    void set_cantidad(int); // Set de cantidad
// Metodos de la clase mochila
    void añadir_objeto(Objeto);
    Objeto sacar_objeto(dll_t<T>* posObj);
   
 private:
    int capacidad_; // capacidad maxima
    int cantidad_; // cantidad de objetos que lleva
    dll_t<T> objetos_;
    dll_t<T> consumibles_;                
}

















#endif  // MOCHILA_H_