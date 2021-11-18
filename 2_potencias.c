// escribir un programa que llame 4 veces a la funcion
// potencia_de_dos de libprueba.h para imprimir cuatro
// potencias de dos correspondientes a los numeros a, b, c y d
// ingresados como argumentos
// ejemplo: ./a.out 0 1 2 3 imprime 1 2 4 8
#include "libprueba.h"
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[]) {
  size_t length= argc-1;
  int result[length];
  for (size_t i = 1; i < argc; i++) {
    result[i-1]= potencia_de_dos(atoi(argv[i]));
  }
  for (size_t i = 0; i < length-1; i++) {
    printf("%d ", result[i]);
  }
  printf("%d\n", result[length-1]);
  return 0;
}
