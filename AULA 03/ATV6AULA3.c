#include <stdio.h>

int main (){

/*Escreva um algoritmo que calcule o valor a ser pago em uma peça de vestuário, considerando o preço original da etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela (1, 2, 3, 4) abaixo para identificar a condição de pagamento e efetuar o desconto adequado. 

1- No pix, recebe 10% de desconto
2- No cartão de débito, recebe 5% de desconto
3- À vista no cartão de crédito, recebe 2% de desconto
4- Parcelado no cartão de crédito, não recebe desconto */

int escolha;
float preco_etiq, form_pag, desc_pix, desc_cd, desc_cc, preco_f;

printf("Por favor, informe o valor da peça de vestuário, que vc acabou de escolher: \n");
scanf("%f", &preco_etiq);

printf("Voce acabou de comprar uma peça de vestuário. Qual das seguintes formas de pagamento, vc deseja ?\n");
printf("No pix, digite 1 \n ");
printf("No cartão de débito, digite 2 \n ");
printf("À vista no cartão de crédito, digite 3 \n ");
printf("Parcelado no cartão de crédito, digite 4 \n");

printf("Voce escolheu:");
scanf("%d", &escolha);

switch  (escolha){

case 1:
    desc_pix = preco_etiq * 0.1;
    preco_f = preco_etiq - desc_pix;
    printf("Pelo pagamento via pix, lhe custara R$ %.2f \n", preco_f);

break;

case 2:
    desc_cd = preco_etiq * 0.05;
    preco_f = preco_etiq - desc_cd;
    printf("Pelo pagamento via cartao de debito, lhe custara R$ %.2f \n", preco_f);
    
break;

case 3:
    desc_cc = preco_etiq * 0.02;
    preco_f = preco_etiq - desc_cc;
    printf("Pelo pagamento via cartao de credito, lhe custara R$ %.2f \n", preco_f);
    
break;

case 4: 
    printf("Voce escolheu por parcelamente no cartão de credito. \n");
    
default: 
    printf("Escolha invalida");
}


return 0;
}
