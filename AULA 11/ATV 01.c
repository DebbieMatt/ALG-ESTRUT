#include <stdio.h>

int comparador(int A, int B, int C){
    
    int maior, menor;
if (A < B + C){
   return 0;
} else {
   return 1;
}
}

int main (){

// Desenvolva um algoritmo que leia os valores A, B, C e utilizando uma função inteira, retorne 1 caso B + C seja menor do que A e 0 caso B + C NÃO seja menor do que A.

int A, B, C, resultado;

printf("Escreva um numero:\n");
scanf("%d", &A);

printf("Escreva um numero:\n");
scanf("%d", &B);

printf("Escreva um numero:\n");
scanf("%d", &C);

resultado = comparador (A, B, C);

printf ("O retorno eh: %d", resultado);
}
