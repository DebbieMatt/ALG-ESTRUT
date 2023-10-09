#include <stdio.h> 

int main(){
    
    /*declaração das variáveis*/
    
    double matriz[7][10], maior, media, media_total;
    int indice1, indice2, i;
    
    printf("Digite a %d° numero inteiro:\n", i + 1);
    
    /*utilização do for para percorrer as linhas da matriz do índice 0 até 7 */
    
    for(indice1 = 0; indice1 < 7; indice1++){
        
            /*utilização do for para percorrer as colunas da matriz do índice 0 até 10 */
            
            for(indice2 = 0; indice2 < 10; indice2++){
            
            /*a posição correspondente do vetor recebe o valor digitado*/
            
            scanf("%lf", &matriz[indice1][indice2]);
        }
    }
    
     maior = 0;
    
    /*busca pela matriz pelo maior número, a váriavel maior armazenará o maior elemento*/
    
    for(indice1 = 0; indice1 < 7; indice1++){
        
           for(indice2 = 0; indice2 < 10; indice2++){
               
                if(maior < matriz[indice1][indice2]){
                
                    maior = matriz[indice1][indice2];
                }
            }
    }
    
     media = 0;
    
    /* média dos valores armazenados*/
    
    for(indice1 = 0; indice1 < 7; indice1++){
        
           for(indice2 = 0; indice2 < 10; indice2++){
                
                media += matriz[indice1][indice2];
            }
    }
    
    printf("\nTABELA DE COMPRAS POR DIAS DA SEMANA:\n");
    
    /*impressão da matriz*/
    
    for(indice1 = 0; indice1 < 7; indice1++){
        
         printf("\n");
         
            for(indice2 = 0; indice2 < 10; indice2++){
                
                printf("\t %.3lf ", matriz[indice1][indice2]);
            }
    }
    
    /*impressão do maior número*/
    
    printf("\nMaior numero: %.3lf ", maior);
    printf("\nMedia numero: %.3lf ", media/70);
}	