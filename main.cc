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
# include <iostream>
# include <cstdio>
# include <cstlib>

void Suma() {
  int numero1, numero2, resultado;
  std::cout << "Introduzca 1: ";
  std::cin >> numero1;
  std::cout << "\nIntroduzca 2: ";
  std::cin >> numero2;

  resultado = numero1 + numero2;

  std::cout << "\nLa suma total es: " << resultado << std::endl;
}
int main() {
  
  Suma();
  return 0;
}