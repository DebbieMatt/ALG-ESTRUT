
// Faça um algoritmo que leia 5 valores e que calcule a média apenas dos
// ímpares.

#include <stdio.h>

int main() {

  int i, var, quantI = 0;
  float somatorioI = 0.0, somatorioP = 0.0;

  i = 1, i <= 20, i++;

  printf("Digite 1° valor: ");
  scanf("%d", &var);

  if (var % 2 != 0) {  // se valor for impar
    somatorioI += var; // somatório dos impares
    quantI++;          // quantidade de impares
  }

  else {
    somatorioP++; // pares
  }
  printf("Digite 2° valor: ");
  scanf("%d", &var);

  if (var % 2 != 0) {  // se valor for impar
    somatorioI += var; // somatório dos impares
    quantI++;          // quantidade de impares
  }

  else {
    somatorioP++; // pares
  }

  printf("Digite 3° valor: ");
  scanf("%d", &var);

  if (var % 2 != 0) {  // se valor for impar
    somatorioI += var; // somatório dos impares
    quantI++;          // quantidade de impares

  }

  else {
    somatorioP++; // pares
  }

  printf("Digite 4° valor: ");
  scanf("%d", &var);

  if (var % 2 != 0) {  // se valor for impar
    somatorioI += var; // somatório dos impares
    quantI++;          // quantidade de impares

  }

  else {
    somatorioP++; // pares
  }

  printf("Digite 5° valor: ");
  scanf("%d", &var);

  if (var % 2 != 0) {  // se valor for impar
    somatorioI += var; // somatório dos impares
    quantI++;          // quantidade de impares

  }

  else {
    somatorioP++; // pares
  }

  printf(" Média dos pares: %.2f ", somatorioI / quantI);
}