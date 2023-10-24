#include <stdio.h>



int main(){

    int matriz[4][5], contador, intervalo;

    // gerando a matriz

    for (int linha = 0; linha < 4; linha ++){

        for (int coluna = 0; coluna < 5; coluna++){

            printf("Posição [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    // verificando se o numero digitado pertence ao intervalo

    do {

        printf("\ndigite um numero entre 2 e 9: ");
        scanf("%d", &intervalo);

        
    }while ( intervalo < 2 || intervalo > 9);
    
    // Imprimindo a matriz

    printf("\nminha matriz:\n");

    for (int linha = 0; linha < 4; linha ++){

        for (int coluna = 0; coluna < 5; coluna++){

            printf("\t%d\t", matriz[linha][coluna]);

            // verificando se é multiplo do intervalo

            if (matriz[linha][coluna]%intervalo == 0){

                contador++;
            }
        }
        
        printf("\n");
    }

    // imprimindo os multiplos

    printf("\na matriz possui %d multimplos de %d.", contador, intervalo);

}