#include <stdio.h>

int main (void) {

int varE, rM, nP, vP;

printf("Digite o valor do emprestimo:");
scanf("%i", &varE);

printf("Digite o numero de prestações:");
scanf("%i", &nP);

printf("Qual a sua renda mensal ?");
scanf("%i", &rM);

vP = varE / nP;

if (vP >= ( rM * 8) &&  vP  >= (rM * 0.3)){
printf("O empréstimo pode ser concedido!");
}

else {
printf("O empréstimo não pode ser concedido!");
}

}