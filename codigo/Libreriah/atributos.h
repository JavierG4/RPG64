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
class Atributos {
 public:
   // constructor
   Atributos(int, int, int, bool);
   //getters
    int get_edad(void) const; //  Edad
    int get_altura(void) const; // Altura
    int get_peso(void) const; // Peso
    bool get_genero(void) const // Genero 
//Setters
    void set_edad(int); //set de capacidad
    void set_altura(int); // Set de cantidad
    void set_peso(int); // Set de cantidad
    void genero(bool); // set genero
// Metodos de la clase

 private:
   int edad_;
   int altura_;
   int peso_;
   bool genero_; // True hombre , False mujer  (la mujer siempre por debajo del hombre)
}