#ifndef LIBRERIA_H_
#define LIBRERIA_H_
#include <iostream>
#include "consumible.h"
#include "salud.h"
#include "atributos.h"
#include "estadistica.h"
#include "personaje.h"
#include "dll_node_t.h"
#include "dll_t.h"
#include <cassert>
#include "mochila.h"
#include "objetos.h"
#include <string>
#include "maze_t.hpp"
#include <cstdlib>
#include <fstream>
#include <unistd.h>


void printWithDelay(const std::string& s, int delay = 50000) {
  
  for (char c : s) {
    std::cout << c;
    std::flush(std::cout); // asegúrate de que se imprima inmediatamente
    usleep(delay); // espera el tiempo de retraso especificado
  }
}

#endif  // LIBRERIA_H_