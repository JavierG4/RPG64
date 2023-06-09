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
#include "../libreriah/libreria.h"

    Atributos::Atributos(int edad, int altura, int peso, bool genero) :
    edad_(edad),
    altura_(altura),
    peso_(peso),
    genero_(genero)
    {}

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
    void Atributos::set_edad(int edad){
        edad_ = edad;
    }
    void Atributos::set_altura(int altura){
        altura_ = altura;
    }
    void Atributos::set_peso(int peso) {
        peso_ = peso;
    }
    void Atributos::genero(bool genero){
        genero_ = genero;
    }