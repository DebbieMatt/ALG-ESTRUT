#include <stdio.h>

char verificador(char resp){ // função 
    
switch (resp){
    case 'a' ... 'z' :
    return '1';
    break;
    
    case 1 ... 9 :
    return '0';
    break;

    default:
    return '0';
    break;
}
}
int main (){

// Escreva uma função que após receber um caractere como entrada, retorne 1 se o caractere recebido for uma letra do alfabeto e 0 caso contrário

char resp, resultado;

printf("Escreva um caractere:\n");
scanf("%c", &resp);

resultado = verificador (resp);

printf (" %c", resultado);
}
