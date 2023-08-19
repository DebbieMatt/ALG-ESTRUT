
#include <stdio.h>

int main(){
    
    int num, divs, i;
    
    printf("Digite um numero:");
    scanf("%d", &num);
    
if (num > 1){

    while (num > 1){
        divs = 0;
        
        for (i = 1; i <= (num / 2); i++ ){
            if (num % i == 0){
                divs++;
            }
        }
    
            if (divs < 2){
             printf("O numero %d é primo \n", num);
        }
            else {
             printf("O numero %d não é primo \n", num);
        }

    printf("Digite um numero:");
    scanf("%d", &num);
}
}

else {
    printf("Voce digitou um numero manor ou igual a 1. \n");
    printf("O loop não sera iniciado.");
}
}
