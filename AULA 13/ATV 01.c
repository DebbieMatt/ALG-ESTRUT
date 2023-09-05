#include <stdio.h>

int converter(int F){ // função 
   
   int C;
   
C = ((F - 32) * 5) / 9; 

   return C;
}
int main (){

// Faça uma função que receba como entrada um valor de graus em Fahrenheit e retorne a conversão para Celsius.

int F, resultado;

printf("Escreva a temperatura em graus Fahrenheit:\n");
scanf("%i", &F);

resultado = converter (F);

printf ("Valor em Celsius: %i °C", resultado);
}