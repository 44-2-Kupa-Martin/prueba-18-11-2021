// implementar las funciones de libprueba.h aca
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void saludar(char *name) {
  printf("Hola, %s\n", name);
  return;
}

int potencia_de_dos(int n) {
  int result= 1;
  for (size_t i = 0; i < n; i++) {
    result*= 2;
  }
  return result;
}

// imprime un array de enteros de dimension size
void print_array(int a[], int size) {
  for (size_t i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  return;
}

// pone el resultado de u + v en result
// todos vectores de dimension n
void suma_vectorial(int u[], int v[], int result[], int n) {
  for (size_t i = 0; i < n; i++) {
    result[i]= u[i] + v[i];
  }
  return;
}

// realiza un cifrado por desplazamiento usando el entero key
// como cantidad de letras a desplazar
void cifrar(char word[], int key) {
  size_t length= strlen(word);
  for (size_t i = 0; i < length; i++) {
    word[i]= ((word[i]+key-97)%26)+97;
  }
  return;
}
