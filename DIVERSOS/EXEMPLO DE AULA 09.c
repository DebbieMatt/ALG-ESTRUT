#include <stdio.h> 

int main(){
    
    /*declaração das variáveis*/
    
    int matriz[3][2][2], i;
    int indice1, indice2, indice3, maior;
    
    printf("Digite a %d° numero inteiro:\n", i + 1);
    
    /*utilização do for para percorrer as linhas da matriz do índice 0 até 2 */
    
    for(indice1 = 0; indice1 < 3; indice1++){
        
            /*utilização do for para percorrer as colunas da matriz do índice 0 até 1 */
            
            for(indice2 = 0; indice2 < 2; indice2++){
                
                for(indice3 = 0; indice3 < 2; indice3++){
            
            /*a posição correspondente do vetor recebe o valor digitado*/
            
            scanf("%d", &matriz[indice1][indice2][indice3]);
            
            }
        }
    }
    
    printf("\nMinha matriz:\n");
    
    /*impressão da matriz*/
    
    for(indice1 = 0; indice1 < 3; indice1++){
        
         printf("\n");
         
            for(indice2 = 0; indice2 < 2; indice2++){
                
                for(indice3 = 0; indice3 < 2; indice3++){
                
                printf("\t %d ", matriz[indice1][indice2][indice3]);
            }
        }
    }
    
    return 0;
}	