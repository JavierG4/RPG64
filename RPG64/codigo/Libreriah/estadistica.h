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
#include "libreria.h"
class Estadistica {
 public:
  Estadistica(int,int,int); //Constructor
//Getters
   int get_fuerza(void) const;
   int get_resistencia(void) const;
   int get_inteligencia(void) const;
//setters
   void set_fuerza(int);
   void set_inteligencia(int);
   void set_resistencia(int);
 private:
   int fuerza_;
   int inteligencia_;
   int resistencia_;
};