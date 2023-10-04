#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int vetor[10], i, soma, media, quant, quant2;

    srand(time(0));

    printf("vetor: ");

    for (int i = 0; i < 10; i++){ // sorteio de 10 numeros

        vetor[i] = rand()%40;

        printf("%d ", vetor[i]);
    }

    for(int i = 0; i < 10; i++){ // calculo da media

        soma += vetor[i]; 
    }

    media = soma / 10;

    // abaixo da media 

    printf("\nA soma da média aritmedica: %d", media);

    printf("\nQuant de numeros que estão abaixo da media: ");

    for (int i = 0; i < 10; i++){

        if (vetor[i] < media){

            quant++;
        }
    }

    printf("%d ", quant);

    // acima da media 

    printf("\nQuant de numeros que estão acima da media: ");

    for (int i = 0; i < 10; i++){

        if (vetor[i] > media){

            quant2++;
        }
    }

    printf("%d ", quant2);
}