
#include <stdio.h>

// Faça um algoritmo que soma apenas os números múltiplos de 3 contidos no
// intervalo de 2 até 42.

int main() {
  int cont, soma = 0;

  for (cont = 2; cont <= 42; cont++) {
    if (cont % 2 != 0) {
      soma += cont;
      printf("%d ", cont);
    }
  }
  printf("\n %d ", soma);
  return 0;
}
