#include <stdio.h>

int main (){
int ano;
float salario, bonus, total;

printf("Seja bem vindo ao Saúde e Beleza \n");
printf("SE QUERES SABER O BONUS SALARIAL QUE RECEBRÁ \n ");
printf("Por favor nos informe quanto tempo esta na EMPRESA: \n");
scanf("%i", &ano);

printf("E O SEU SALARIO BRUTO:");
scanf("%f", &salario);

if (ano >= 5){
    
bonus = salario * 0.25;
total = salario + bonus;
printf ("Seu salario somado com o bonus, será de: R$ %.2f", total);
}

else {
bonus = salario * 0.10;
total = salario + bonus;
printf ("Seu salario somado com o bonus, será de: R$ %.2f", total);
}
return 0;
}
