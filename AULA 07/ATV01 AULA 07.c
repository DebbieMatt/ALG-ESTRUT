// Faça um programa que leia 10 valores inteiros e conte quantos são negativos,
// retornando isso como resultado.

#include <stdio.h>

int main() {
  int var, pos = 0, neg = 0;

  printf("Digite o primeiro valor: ");
  scanf("%i", &var);

  if (var % 2 != 0)
    neg++;
  else
    pos++;

  printf("Digite o segundo valor: ");
  scanf("%i", &var);

  if (var % 2 != 0)
    neg++;
  else
    pos++;

  printf("Digite o terceiro valor: ");
  scanf("%d", &var);

  if (var % 2 != 0)
    neg++;
  else
    pos++;

  printf("Digite o quarto valor: ");
  scanf("%i", &var);

  if (var % 2 != 0)
    neg++;
  else
    pos++;

  printf("Digite o quinto valor: ");
  scanf("%i", &var);

  if (var % 2 != 0)
    neg++;
  else
    pos++;

  printf("Digite o sexto valor: ");
  scanf("%i", &var);

  if (var % 2 != 0)
    neg++;
  else
    pos++;

  printf("Digite o setimo valor: ");
  scanf("%i", &var);

  if (var % 2 != 0)
    neg++;
  else
    pos++;

  printf("Digite o oitavo valor: ");
  scanf("%i", &var);

  if (var % 2 != 0)
    neg++;
  else
    pos++;

  printf("Digite o nono valor: ");
  scanf("%i", &var);

  if (var % 2 != 0)
    neg++;
  else
    pos++;

  printf("Digite o décimo valor: ");
  scanf("%i", &var);

  if (var % 2 != 0)
    neg++;
  else
    pos++;

  printf("\n São %i Positivos.", pos);
  printf("\n São %i Negativos.", neg);
  return 0;
}