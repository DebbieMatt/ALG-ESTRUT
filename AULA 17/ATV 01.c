#include <stdio.h> 

int main(){
    
    /*declaração das variáveis*/
    
    int matriz[5][5], i;
    int indice1, indice2, maior;
    
    printf("Digite a %d° numero inteiro:\n", i + 1);
    
    /*utilização do for para percorrer as linhas da matriz do índice 0 até 5 */
    
    for(indice1 = 0; indice1 < 5; indice1++){
        
            /*utilização do for para percorrer as colunas da matriz do índice 0 até 5 */
            
            for(indice2 = 0; indice2 < 5; indice2++){
            
            /*a posição correspondente do vetor recebe o valor digitado*/
            
            scanf("%d", &matriz[indice1][indice2]);
        }
    }
    
    maior = 0;
    
    /*busca pela matriz pelo maior número, a váriavel maior armazenará o maior elemento*/
    
    for(indice1 = 0; indice1 < 5; indice1++){
        
           for(indice2 = 0; indice2 < 5; indice2++){
               
                if(maior < matriz[indice1][indice2]){
                
                    maior = matriz[indice1][indice2];
                }
            }
    }
    
    printf("\nMinha matriz:\n");
    
    /*impressão da matriz*/
    
    for(indice1 = 0; indice1 < 5; indice1++){
        
         printf("\n");
         
            for(indice2 = 0; indice2 < 5; indice2++){
                
                printf("\t %d ", matriz[indice1][indice2]);
            }
    }
    
    /*impressão do maior número*/
    
    printf("\nMaior numero: %d ", maior);
    
    return 0;
}	