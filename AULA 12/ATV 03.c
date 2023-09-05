
#include <stdio.h>

// Faça um procedimento que leia o início e o fim de um intervalo e imprima os números ímpares contidos neste intervalo. Considere os extremos como parte do intervalo.

void meses(int mes){ // procedimento

switch (mes){
    
case 1:
    printf("Mes %i eh janeiro", mes);

break;

case 2:
    printf("Mes %i eh fevereiro", mes);

break;

case 3:
    printf("Mes %i eh março", mes);

break;

case 4:
    printf("Mes %i eh abril", mes);

break;

case 5:
    printf("Mes %i eh maio", mes);

break;

case 6:
    printf("Mes %i eh junho", mes);

break;

case 7:
    printf("Mes %i eh julho", mes);

break;

case 8:
    printf("Mes %i eh agosto", mes);

break;

case 9:
    printf("Mes %i eh setembro", mes);

break;

case 10:
    printf("Mes %i eh outubro", mes);

break;

case 11:
    printf("Mes %i eh novembro", mes);

break;

case 12:
    printf("Mes %i eh dezembro", mes);

break;

default: 
    printf("Nao existe, mes que corresponde a esse numero");
}

}

int main (int argc, char** argv) {
  int mes;

  for (int cont = 0; cont <= 0 ; cont++) {
    printf("Digite um numero e lhe retornarei o mes: \n");
    scanf("%i", &mes);
    
    }
  
  meses (mes); 
}