/*
AUTORES :Javier González Brito .
        :Javier ...
        :Izan ...
        :Airan...
        :Jose...
        :Franco
        :Alejandro Barreto
ULT FECHA: 17/04/2023
Clase salud
COMENTARIOS: Clase salud
Atributos clase salud:
    Cabeza
    Torso
    Piernas
    Brazos
*/
#include <iostream>
#include <cctype>
#include "salud.h"

int Salud::get_torso() const {
  return torso_;
}
int Salud::get_brazos() const {
  return brazos_;
}
int Salud::get_piernas() const {
  return piernas_;
}
int Salud::get_cabeza() const {
  return cabeza_;
}
int Salud::get_interior() const {
  return interior_;
}
void Salud::curarse(objeto x ) {
  if( x == botiquin) { // botiquín por ejmeplo
    torso_ = 100;
    brazos_ = 100;
    piernas_ = 100;
    interior_ = 100;
    cabeza_ = 100;
  }
}
