/*
AUTORES :Javier González Brito .
        :Javier ...
        :Izan ...
        :Airan...
        :Jose...
        :Franco
        :Alejandro Barreto
ULT FECHA: 17/04/2023
Clase Personaje
COMENTARIOS: Clase principal del personaje
*/
#ifndef PERSONAJE_H_
#define PERSONAJE_H_
#include "libreria.h"
#include "salud.h"
class Personaje{
 public:
    Personaje(Atributos, Estadistica); // Constructor del personaje
    int get_salud(int parte_del_cuerpo = 0) const; 
    void añadir_objeto(Objeto);
    void dañado(int parte_del_cuerpo, int cantidad);









 private:
    Salud salud_;
    Atributos Atributos_; // Atributos fisicos como altura, edad, peso, etc
    Mochila<T> mochila_;
    Estadistica estadisticas_; // Fuerza, inteligencia...



};
#endif  // PERSONAJE_H_