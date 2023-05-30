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
    int Atributos::get_edad(void) const {
        return edad_;
    }
    int Atributos::get_altura(void) const{
        return altura_;
    }
    int Atributos::get_peso(void) const {
        return peso_;
    }
    bool Atributos::get_genero(void) const {
        return genero_;
    }