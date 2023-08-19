// Faça um algoritmo que imprima todos os números pares entre 200 e 300.

#include <stdio.h>

int main() {

  int i;

  printf(" Imprima todos os números pares entre 200 e 300: \n");

  for (i = 200; i <= 300; i++) {

    if (i % 2 == 0) {

      printf("%d \n", i);
    }
  }
}