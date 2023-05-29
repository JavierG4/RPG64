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
class Objeto {
 public:       
// getters
   int get_vida_extra(void) const; // Te indica la vida que te da el objeto
   int get_resistencia(void) const; // Te indica la resistencia que te da el objeto
   int get_damage(void) const; // Te indica el daño que te da el objeto
// setters
   void set_damage(int); // set daño
   void set_resistencia(int); // set resistencia
   void set_vida_extra(int); // set vida extra
// Metodos de obejto
   void Info(void) const;
 private:
   int damage_;
   int resistencia_;
   int vida_extra_;
}
