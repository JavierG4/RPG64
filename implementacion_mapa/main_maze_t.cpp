// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 6
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html
// Se compila con:
// g++ main_maze_t.cpp maze_t.cpp -o main_maze_t

#include <iostream>
#include "maze_t.hpp"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

void printWithDelay(const std::string& s, int delay = 50000) {
  for (char c : s) {
    std::cout << c;
    std::flush(std::cout); // asegúrate de que se imprima inmediatamente
    usleep(delay); // espera el tiempo de retraso especificado
  }
}

int main() {
  system("clear"); 
  std::string p = "Habia una vez una pobre niña que quería tu preciado helado. \nIntentó arrancártelo de la mano, pero rapidamente tu pudiste esquivarla con gran perspicacia.\nFinalmente te caiste por el balanceo que te proporcionó aquella maniobra evasiva\n";
  printWithDelay(p);

  maze_t M;
  // ifstream is used for reading files
  // We'll read from a file called data_maze_1.txt
  std::ifstream inf{ "mapa.txt" };

  // If we couldn't open the input file stream for reading
  if (!inf) {   
    // Print an error and exit
    std::cout << "Uh oh, Sample.txt could not be opened for reading!\n";
    return 1;
  }
  // lee el mapa del inf
  inf >> M;
  // se hace un clear y se imprime el mapa.
  system("clear"); 
  std::cout << M << endl;

  return 0;
}

