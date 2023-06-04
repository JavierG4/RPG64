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

void printWithDelay(const std::string& s, int delay = 10000) {
  for (char c : s) {
    std::cout << c;
    std::flush(std::cout); // asegúrate de que se imprima inmediatamente
    usleep(delay); // espera el tiempo de retraso especificado
  }
}

// .cc que estan quitados: el constructor de personaje y de mochila una función de salud y consumible entero

int main() {
  system("clear");

    //elección de personajes
  std::cout << "------------------------------------ELECCION DE PERSONAJE------------------------------------" << std::endl;
  std::cout << "\n";
  Atributos personaje1(50,190,90,true); // Mediana edad (50), Alto, 90 kilos, Tio
  Atributos personaje2(20,160,60,false); // Edad joven (20), Baja, 60 kilos, Tia  
  Atributos personaje3(70,170,70, false); // Mediana edad (70), media, 70 kilos, Tia  
  Atributos personaje4(100,250,150,true); // Mediana edad (100), Alto de cojones, 150 kilos, Tio
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
  }
  
}