// Faça um algoritmo que imprima todos os números ímpares entre 450 e 680

#include <stdio.h>

int main() {

  int i;

  printf(" Imprima todos os números ímpares entre 450 e 680:");

  for (i = 450; i <= 680; i++) {

    if (i % 2 != 0) {

      printf("%d \n", i);
    }
  }
}