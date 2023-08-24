// faça um algoritmo que imprima os números pares compreendidos no intervalo fechado de 20 até 63.

#include <stdio.h>

int main()
{
    int n;

    for (n = 20; n <= 63; n++) {

        if ( n % 3 != 0){
            
            printf("%d \n", n);
        }
    }
    
    return 0;
}