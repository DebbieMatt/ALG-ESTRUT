#include <stdio.h>

int comparador(int A, int B){ // função 
    
if (B < A){
   return B;
} else  {
   return A;
}
}

int main (){

// Faça uma função que receba como entrada dois números inteiros e retorne o menor número.

int A, B, resultado;

printf("Escreva um numero:\n");
scanf("%d", &A);

printf("Escreva um numero:\n");
scanf("%d", &B);

resultado = comparador (A, B);

printf ("O retorno do menor eh: %d", resultado);
}
