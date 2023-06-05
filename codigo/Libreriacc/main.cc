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
#include "../Libreriah/libreria.h"

void printWithDelay(const std::string& s, int delay = 50000) {
  for (char c : s) {
    std::cout << c;
    std::flush(std::cout); // asegúrate de que se imprima inmediatamente
    usleep(delay); // espera el tiempo de retraso especificado
  }
}

void printoftxt( std::string s, int linea) {
  std::string direccion{"../Archivostxt/lore/"};
  s += direccion;
  std::ifstream inf( s );
  // If no pudimos abrir el fichero:
  if (!inf) {   
    // imprime un error y retorna
    std::cout << "Uh oh, el fichero no se pudo abrir!\n";
    return;
  }
  // lee el mapa del inf
  std::getline(inf,s);
  printWithDelay(s);
}

// .cc que estan quitados: y de mochila una función de salud y consumible entero

int main() {
  system("clear");

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

  //Personaje personaje111(personaje1,personaje11);
  //Personaje personaje222(personaje2,personaje22);
  //Personaje personaje333(personaje3,personaje33);
  //Personaje personaje444(personaje4,personaje44);



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
  std::cout << "\033[1;31m"; 
  std::string p = "Habia una vez una pobre niña que quería tu preciado helado. \nIntentó arrancártelo de la mano, pero rapidamente tu pudiste esquivarla con gran perspicacia.\nFinalmente te caiste por el balanceo que te proporcionó aquella maniobra evasiva\n";
  printWithDelay(p);
  std::cout << "\033[0m";
  p = "Ahora tienes la decisión, que querrá hacer el protagonista?\n(m) mostrar el mapa\n(s) ir al sur\n";
  printWithDelay(p);
  char eleccion;
  std::cin >> eleccion;
  if (eleccion == 'm') {
  maze_t M;
  // leemos el mapa data_maze_1.txt
  std::ifstream inf{ "../Archivostxt/mapa.txt" };

  // If no pudimos abrir el fichero:
  if (!inf) {   
    // imprime un error y retorna
    std::cout << "Uh oh, mapa.txt no se pudo abrir!\n";
    return 1;
  }
  // lee el mapa del inf
  inf >> M;
  // se hace un clear y se imprime el mapa.
  system("clear"); 
  std::cout << M << endl;
  std::cin.ignore();
  }
  
}