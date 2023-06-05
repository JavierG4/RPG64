/*
AUTORES :Javier González Brito .
        :Javier ...
        :Izan ...
        :Airan...
        :Jose...
        :Franco
        :Alejandro Barreto
ULT FECHA: 17/04/2023
Clase atributos
COMENTARIOS: Aquí estarán los atributos de cada personaje
*/
#include "../Libreriah/libreria.h"
Estadistica::Estadistica(int fuerza, int resistencia, int inteligencia){
  fuerza_ = fuerza;
  resistencia_ = resistencia;
  inteligencia_ = inteligencia;
}
int Estadistica::get_fuerza(void)const {
  return fuerza_;
}
int Estadistica::get_inteligencia(void)const {
  return inteligencia_;
}
int Estadistica::get_resistencia(void)const {
  return resistencia_;
}
void Estadistica::set_fuerza(int fuerza){
  fuerza_ = fuerza;
}
void Estadistica::set_inteligencia(int inte){
  inteligencia_ = inte;
}
void Estadistica::set_resistencia(int resis){
  resistencia_ = resis;
}