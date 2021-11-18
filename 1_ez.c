// escribir un programa que diga "Hola, x" donde x
// es un argumento (string)
// usar la funcion saludar de libprueba.h
#include "libprueba.h"
int main(int argc, char *argv[]) {
  saludar(argv[1]);
  return 0;
}
