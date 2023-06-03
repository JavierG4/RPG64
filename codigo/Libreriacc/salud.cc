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
#include "../Libreriah/libreria.h"
Salud::Salud(int torso, int cabeza, int interior, int brazos, int piernas){
  torso_ =  torso;
  cabeza_ = cabeza;
  interior_ = interior;
  piernas_ = piernas;
  brazos_ = brazos_;
}
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
// void Salud::damage_body() {}

void Salud::curarse(Consumible x ) { // aquí en vez de tantos if iría un switch
  //if( x.get_nombre() == "botiquin") { // botiquín por ejmeplo
  //  torso_ = 100;
  //  brazos_ = 100;
  //  piernas_ = 100;
  //  interior_ = 100;
  //  cabeza_ = 100;
  //}
  //if(x.get_nombre() == "pastillas") {cabeza_ = 100;}
  //if(x.get_nombre() == "torniquete") {piernas_ = 100;}
  //if(x.get_nombre() == "venda") {brazos_ = 100;}
  //if(x.get_nombre() == "kit") {torso_ == 100;}
}


