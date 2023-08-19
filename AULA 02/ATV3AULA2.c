#include <stdio.h>

int main(void) {

int custo, percentual_lucro, percentual_imposto, preco_final, valor_impostos, valor_lucro, preco_imposto;

printf("Digite o preço de fabrica do seu automovel: ");
scanf("%i", &custo);

preco_final = custo + (custo * 0.2) + (custo * 4.5);

printf("Preço Final: %i \n", preco_final);
return 0;
}

