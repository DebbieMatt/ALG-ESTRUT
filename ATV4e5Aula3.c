#include <stdio.h>

int main (void){

/* Desenvolva um algoritmo que leia os valores A, B, C e imprima na tela se a soma de B + C é menor que A.

int A, B, C;

printf("Escreva um numero:\n");
scanf("%d", &A);

printf("Escreva um numero:\n");
scanf("%d", &B);

printf("Escreva um numero:\n");
scanf("%d", &C);

  if (A < B + C){
  printf("A soma de %d + %d eh maior que %d \n", B, C, A);
  }else {
  printf("A soma de %d + %d eh menor que %d \n", B, C, A);
  }
  
return 0;

*/

/*
Desenvolva um codigo em C que simule uma venda nesse posto de combustivel. Dessa forma, o codigo deve ser capaz de ler o número de litros vendidos e o tipo do combustivel. Com essas informações, o algoritmo deve calcular e imprimir o valor a ser pago pelo o cliente. Considere os seguintes preços por litro:
R$ 4.50 para o alcool
R$ 5.10 para a gasolina
R$ 5.25 para o diesel
*/

int escolha;
float l_quant, cust_l, desc_l, preco_f;

printf("Qual destes combustiveis abastecera ?\n");
printf("Se for alcool, digite 1 \n ");
printf("Se for gasolina, digite 2 \n ");
printf("Se for diesel, digite 3 \n ");
printf("Voce escolheu:");

scanf("%d", &escolha);

printf("Quantos litros pretende abastecer ?\n");
scanf("%f", &l_quant);

if (escolha == 1 && l_quant <= 10){
  cust_l = l_quant * 4.50 ; // custo por litro vezes o preco do alcool.
  desc_l = cust_l * 0.3; // desconto sobre a quantidade de litro que eh menor ou igual 10 litros.
  preco_f = cust_l - desc_l; //preco final repassado ao consumidor: custo do litro menos o desconto por litro.
  
  printf("O alcool, esta custando R$4.50 , logo %.2f litros, lhe custara: R$ %.2f . \n ",  l_quant, preco_f);

} else (escolha == 1 && l_quant > 10); {
  cust_l = l_quant * 4.50 ; // custo por litro vezes o preco do alcool.
  desc_l = cust_l * 0.5; // desconto sobre a quantidade de litro que eh maior que 10 litros.
  preco_f = cust_l - desc_l; //preco final repassado ao consumidor: custo do litro menos o desconto por litro.
  
  printf("A gasolina, esta custando R$4.50, logo %.2f litros, lhe custara: R$ %.2f. \n ",  l_quant, preco_f);
}

if (escolha == 2 && l_quant <= 15){
  cust_l = l_quant * 5.10 ; // custo por litro vezes o preco da gasolina.
  desc_l = cust_l * 0.1; // desconto sobre a quantidade de litro que eh menor ou igual a 15 litros.
  preco_f = cust_l - desc_l; //preco final repassado ao consumidor: custo do litro menos o desconto por litro.
  
  printf("A gasolina, esta custando R$5.10, logo %.2f litros, lhe custara: R$ %.2f. \n ",  l_quant, preco_f);

} else (escolha == 2 && l_quant > 15);{
  cust_l = l_quant * 5.10 ; // custo por litro vezes o preco da gasolina.
  desc_l = cust_l * 0.4; // desconto sobre a quantidade de litro que eh maior que 15 litros.
  preco_f = cust_l - desc_l; //preco final repassado ao consumidor: custo do litro menos o desconto por litro.
  
  printf("A gasolina, esta custando R$5.10, logo %.2f litros, lhe custara: R$ %.2f. \n ",  l_quant, preco_f);
}

if (escolha == 3 && l_quant <= 20){
  cust_l = l_quant * 5.25 ; // custo por litro vezes o preco do diesel.
    desc_l = cust_l * 0.3; // desconto sobre a quantidade de litro que eh menor ou igual a 20 litros.
    preco_f = cust_l - desc_l; //preco final repassado ao consumidor: custo do litro menos o desconto por litro.
    
    printf("O diesel, esta custando R$5.25, logo %.2f litros, lhe custara: R$ %.2f. \n ",  l_quant, preco_f);
  
  } else (escolha == 3 && l_quant > 20);{
    cust_l = l_quant * 5.25 ; // custo por litro vezes o preco do diesel.
    desc_l = cust_l * 0.6; // desconto sobre a quantidade de litro que eh maior que 20 litros.
    preco_f = cust_l - desc_l; //preco final repassado ao consumidor: custo do litro menos o desconto por litro.
    
    printf("O diesel, esta custando R$5.25, logo %.2f litros, lhe custara: R$ %.2f. \n ",  l_quant, preco_f);
  }
}