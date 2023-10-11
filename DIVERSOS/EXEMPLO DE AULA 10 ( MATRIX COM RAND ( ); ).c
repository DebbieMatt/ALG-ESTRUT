
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int matrix[3][2], linha, coluna;
    
    srand(time(0));
    
    for (int linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 2; coluna++){
            matrix [linha][coluna] = rand() % 10;
        }
    }
    
    printf("\nMinha matriz:\n");
    
    /*impressão da matriz*/
    
    for(linha = 0; linha < 3; linha++){
        
         printf("\n");
         
            for(coluna = 0; coluna < 2; coluna++){
                
                printf("\t %d ", matrix[linha][coluna]);
            }
    }
}
