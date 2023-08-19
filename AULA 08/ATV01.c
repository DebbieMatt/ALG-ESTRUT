// Faça um programa que receba um número digitado pelo usuário e imprimaatabuada
// de multiplicação desse número de 1 a 10. Dica: para formatar visualmente,
// utilize \n e \t dentro do printf.

#include <stdio.h>

int main() {
  int i, num;

  do {
    printf("Digite um valor entre 1 e 10: ");
    scanf("%d", &num);

  }

  while (num < 1 || num > 10);

  for (i = 1; i <= 10; i++) {
    printf("%d * %d = %d \n", num, i, num * i);
  }
}