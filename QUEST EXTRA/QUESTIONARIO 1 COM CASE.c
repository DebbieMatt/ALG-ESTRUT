#include <stdio.h>

int main (){
    
int combo, n;
float c1, c2, c3, desc, total, quant;

printf("Estamos em promoção os combos: \n");
printf("Combo 1 - Lanche P, batata M e refrigerante P \n");
printf("Combo 2 - Lanche M, batata G e refrigerante M \n");
printf("Combo 3 - Lanche G, batata G e refrigerante G \n");
printf("Por favor nos informe a sua escolha: \n");
scanf("%i", &combo);

printf("Quantos combos deseja:");
scanf("%i", &n);

switch (combo){
    
case 1:
c1 = 28.90;
quant = c1 * n;
    printf("Voce escolheu o Combo 1 - Lanche P, batata M e refrigerante P \n");
    printf("Lhe custará R$ %.2f", quant);

break;

case 2:

c2 = 33.90;
quant = c2 * n;

if (quant > 100){
desc = quant * 0.1;
total = quant - desc;
    printf("Voce escolheu o Combo 2 - Lanche M, batata G e refrigerante M \n" );
    printf("Lhe custará R$ %.2f", total);
}

else {
    printf("Voce escolheu o Combo 2 - Lanche M, batata G e refrigerante M \n" );
    printf("Lhe custará R$ %.2f", quant);
}
break;

case 3:

c3 = 36.90;
quant = c3 * n;

if (quant > 100){
desc = quant * 0.1;
total = quant - desc;
    printf("Voce escolheu o Combo  3 - Lanche G, batata G e refrigerante G \n");
    printf("Lhe custará R$ %.2f", total);
}

else {
    printf("Voce escolheu o Combo 2 - Lanche M, batata G e refrigerante M \n" );
    printf("Lhe custará R$ %.2f", quant);
}
break;

default: 
    printf("Desculpe, mas este produto não esta no nosso cardápio");
}

return 0;
}