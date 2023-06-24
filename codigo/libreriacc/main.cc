/*
AUTORES :Javier González Brito .
        :Javier ...
        :Izan ...
        :Airan...
        :Jose...
        :Franco
        :Alejandro Barreto
ULT FECHA: 17/04/2023
Programa Principal
COMENTARIOS: 
*/
#include "../libreriah/libreria.h"

// imprime con delay un string pasado por parámetro
void printWithDelay(const std::string& s, int delay = 50000) {
  for (char c : s) {
    std::cout << c;
    std::flush(std::cout); // asegúrate de que se imprima inmediatamente
    usleep(delay); // espera el tiempo de retraso especificado
  }
}

// motodo para poder leer lentamente una linea (hasta el carcter *) de un fichero .txt
// Los inputs de la función son: una string que tiene que tener el nombre del fichero del que queremos extraer la info y la linea que queremos leer
void printoftxt( std::string s, int linea) {
  std::string direccion{"../archivostxt/lore/"};
  s = direccion + s;
  std::ifstream inf( s );
  // If no pudimos abrir el fichero:
  if (!inf) {   
    // imprime un error y retorna
    std::cout << "Uh oh, el fichero no se pudo abrir!\n";
    return;
  }
  // lee del inf
  char a = '*';
  int lin_actual {1};
  while(lin_actual < linea) {
    std::getline(inf,s,a);
  }
  std::getline(inf,s,a);
  printWithDelay(s);
  std::cout << "\n";
}

// para la ejecución del programa hasta que pulsas enter (algunas veces le tienes que dar dos veces en vez de una)
void stop() {
  std::cout << "\nPresiona enter para continuar... ";
  std::cin.ignore();
  std::cin.ignore();
}

// imprime el mapa en la pantalla.
void mapa() {
  maze_t M;
  // leemos el mapa data_maze_1.txt
  std::ifstream inf{ "../archivostxt/mapa_ini.txt" };
  // If no pudimos abrir el fichero:
  if (!inf) {   
    // imprime un error y retorna
    std::cout << "Uh oh, mapa.txt no se pudo abrir!\n";
    return;
  }
  // lee el mapa del inf
  inf >> M;
  // se hace un clear y se imprime el mapa.
  system("clear"); 
  std::cout << M << endl;
  stop();
}

// hace un cout de las opciones que tiene dicha zona.
void opZona(int a, int b) {
  //falta por hacerlo
  std::cout << "(m) para mirar el mapa\n";

  char eleccion;
  std::cin >> eleccion;

  if (eleccion == 'm') {
  //imprime el mapa
    mapa();
  }
}

// .cc que estan quitados: de mochila una función de salud y consumible entero

int main() {
  //string que utilizarás para poner el nombre de los ficheros que quieres leer
  std::string p;
  char eleccion;
  system("clear");
  std::cout << "\033[1;31m";
  p = "intro.txt";
  printoftxt(p,1);
  std::cout << "\033[0m";
  //printoftxt(p,2);
    //elección de personajes
  std::cout << "------------------------------------ELECCION DE PERSONAJE------------------------------------" << std::endl;
  std::cout << "\n";
  Atributos personaje1(50,190,90,true); // Mediana edad (50), Alto, 90 kilos, Tio
  Atributos personaje2(20,160,60,false); // Edad joven (20), Baja, 60 kilos, Tia  
  Atributos personaje3(70,170,70, false); // Mediana edad (65), media, 70 kilos, Tia  
  Atributos personaje4(100,250,150,true); // Mediana edad (100), Alto de cojones, 150 kilos, Tio

  Estadistica personaje11(40,20,40); //40 Fuerza, 20, resis, 40 Inteli
  Estadistica personaje22(15,25,60); //15 Fuerza, 25, resis, 60 Inteli
  Estadistica personaje33(10,10,80); // 10 Fuerza, 10, resis, 80 Inteli
  Estadistica personaje44(75,15,10); // 75 Fuerza, 15, resis, 10 Inteli

  //Personaje<Objeto> personaje111(personaje1,personaje11);
  //Personaje<Objeto> personaje222(personaje2,personaje22);
  //Personaje<Objeto> personaje333(personaje3,personaje33);
  //Personaje<Objeto> personaje444(personaje44,personaje44);



  //Estadistica
  std::cout << "_____________________________________________________________________________________________" << std::endl;
  std::cout << "|     ___  ___  ___          ___  ___  ___          ___  ___  ___          ___  ___  ___     |" << std::endl;
  //std::cout << "|    |             |        |             |        |             |        |             |    |" << std::endl;
  std::cout << "|    |   __   __   |        |   __   __   |        |   __   __   |        |    _____    |    |" << std::endl;
  std::cout << "|    |  |O|   |O|  |        |  |0|   |0|  |        |  |@|   |@|  |        |   | @@@ |   |    |" << std::endl;
  std::cout << "|    |  |O|   |O|  |        |  |0|   |0|  |        |  |@|   |@|  |        |   | @@@ |   |    |" << std::endl;
  std::cout << "|    |  ¯¯¯|^|¯¯¯  |        |  ¯¯¯|^|¯¯¯  |        |  ¯¯¯|^|¯¯¯  |        |   ¯¯|^|¯¯   |    |" << std::endl;
  std::cout << "|    |             |        |             |        |             |        |             |    |" << std::endl;



  //bucle
  opZona(0,0);// hay que poner en el personaje la posición y hacer que el mapa se corresponda con ello.
}