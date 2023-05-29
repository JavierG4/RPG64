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
#include "personaje.h"
// Getters
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
//Setters
void Salud::set_cabeza(int cabeza) {
  cabeza_ = cabeza;
}
void Salud::set_torso(int torso) {
  torso_ = torso;
}
void Salud::set_piernas(int piernas) {
  piernas_ = piernas;
}
void Salud::set_brazos(int brazos) {
  brazos_ = brazos;
}
void Salud::set_interior(int interior) {
  interior_ = interior;
}



/*void Salud::curarse(objeto x ) { // aquí en vez de tantos if iría un switch
  if( x == botiquin) { // botiquín por ejmeplo
    torso_ = 100;
    brazos_ = 100;
    piernas_ = 100;
    interior_ = 100;
    cabeza_ = 100;
  }
  if(x == pastillas) {cabeza_ = 100;}
  if(x == torniquete) {piernas_ = 100;}
  if(x == venda) {brazos_ = 100;}
  if(x == kit) {torso_ == 100;}
}
*/

