#include <stdio.h>

int main(){

    int vetor[10], contador, i, opcao, posicao1, posicao2;
    double soma = 0, impares = 0;
    
    // gerando a vetor

    for (int i = 0; i < 10; i++){

        printf("\nPosição %d°: ", i);
        scanf("%d", &vetor[i]);
    }
    
        printf("\nmeu vetor: ");
        
    for (int i = 0; i < 10; i++){

        printf("%d ", vetor[i]);
        
        soma += vetor[i];
    }
    
    printf("\n");

    // menu

    do{

        printf("\nQual operação deseja realizar:");
        
        printf("\n1 - Exibir na tela apenas os elementos do vetor que são pares");

        printf("\n2 - Realizar a operação de multiplicação entre dois elementos do vetor");

        printf("\n3 - Calcular e exibir a média de todos os elementos do vetor");

        printf("\nquiser para a operação, digite (-1)");

        scanf ("%d", &opcao);

        if (opcao == 1) {

    printf("\npares:\t");

    for (int i = 0; i < 10; i++){

            // verificando se é par

            if (vetor[i] % 2 == 0){

                printf("\t%d\t", vetor[i]);
            }
    }

    }

        else if (opcao == 2){

            do{
                printf("\ndigite a 1° posição:");
                scanf("%d", &posicao1);
                
            }while(posicao1 < 0 || posicao1 > 9);
            
            do{
                printf("\ndigite a 2° posição:");
                scanf("%d", &posicao2);
                
            }while(posicao2 < 0 || posicao2 > 9);
            
            printf("\nA multiplicação da posição 1 e posição 2 eh: %d", vetor[posicao1] * vetor[posicao2]);
        } 

        else if (opcao == 3){
            
            printf("\nA média eh: %.2lf", soma/10);
        }
        
        else {
            printf("\nOpção invalida ou encerrando o programa.");
        }
        
    } while (opcao != -1);

}

