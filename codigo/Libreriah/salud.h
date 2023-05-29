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
#ifndef SALUD_H_
#define SALUD_H_
class Salud {
 public:
    int get_cabeza(void) const; // Te indica la salud que tiene tu cabeza
    int get_brazos(void) const; // Te indica la salud que tienen tus brazod
    int get_piernas(void) const; // Te indica la salud que tienen tus piernas
    int get_torso(void) const;  // Te indica la salud que tiene tu torso
    int get_interior(void) const; // Te indica la salud que tiene tu interior
 
// Setters
    void set_cabeza(int);
    void set_interior(int);
    void set_torso(int);
    void set_brazos(int);
    void set_piernas(int);
//Metodos de la clase
    void damage_body(); // Función que te hace daño
    void curarse(objeto); // Funcion que te indica si tienes curaciones o no para curarte.
                    // Dentro de la funcion tambien podemos meter por parametro con lo qu ete curas
                    // Es decir venda, botiquin, pastillas... y que cada una te de una mejora

 private: 
    int torso_; // Vida del torso
    int cabeza_; // Vida de la cabeza
    int piernas_; // Vida de las piernas
    int brazos_; // Vida de los brazos
    int interior_; // Vida de los organos

}


#endif  // SALUD_H_