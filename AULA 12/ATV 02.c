
#include <stdio.h>

// Faça um procedimento que leia o início e o fim de um intervalo e imprima os números ímpares contidos neste intervalo. Considere os extremos como parte do intervalo.

void intervaloImpar(int inicio, int fim){ // procedimento
    
    for (int cont = inicio; cont <= fim; cont++) {
    if (cont % 2 != 0) {
        
      printf("%d ", cont);
    }
}
}

int main (int argc, char** argv) {
  int inicio, fim, resultado;

  for (int cont = 0; cont <= 0 ; cont++) {
    printf("Digite um numero para o inicio de intervalo: \n");
    scanf("%d", &inicio);
    
    printf("Digite um numero para o fim de intervalo: \n");
    scanf("%d", &fim);
      
    }
  
  intervaloImpar (inicio, fim);
}