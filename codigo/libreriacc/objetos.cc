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
#include "../libreriah/libreria.h"

// Getters
int Objeto::get_vida_extra(void) const{
  return vida_extra_;
}
int Objeto::get_damage(void) const{
  return damage_;
}
int Objeto::get_resistencia(void) const{
  return resistencia_;
}
std::string Objeto::get_nombre(void) const{
  return nombre_;
}
// setters
void Objeto::set_damage(int damage) {
  damage_ = damage;
}
void Objeto::set_vida_extra(int vida_ex) {
  vida_extra_ = vida_ex;
}
void Objeto::set_resistencia(int resistencia) {
  resistencia_ = resistencia;
}
void Objeto::set_nombre(std::string nombre) {
  nombre_ = nombre;
}
// Funciones del objeto
void Objeto::Info(void) const {
  std::cout << " | El Daño de  = " << get_nombre() << " es de " << get_damage() << " |"<<std::endl;
  std::cout << " | La vida extra que da  = " << get_nombre() << " es de " << get_vida_extra() << " |" << std::endl;
  std::cout << " | La resistencia que da  = " << get_nombre() << " es de " << get_resistencia() << " |" << std::endl;
}