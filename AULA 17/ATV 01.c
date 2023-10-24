#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char**argv){
    
    int matriz[4][4], i;
    int mult = 1, somaAcim = 0, somaAbaix = 0;

    srand(time(NULL));

    printf( "Matriz:\n" );
    
    for(int linha = 0; linha < 4; linha++ ){
        for(int coluna = 0; coluna < 4; coluna++ ){
            
            matriz[linha][coluna] = 4 + rand() % 4;
            
            printf( "%3d", matriz[linha][coluna] );
            
            if( linha == coluna ){ // diagonal principal multiplica
                
                mult *= matriz[linha][coluna];
            }
            
            else if (coluna > linha ){ // soma diagonal acima da principal 
               
                somaAcim += matriz[linha][coluna];
            }
            
            else if (linha > coluna){ // soma diagonal abaixo da principal
            
                somaAbaix += matriz[linha][coluna];
            }
        }
        printf( "\n" );
    }
    
    printf("\nA) A soma dos  elementos  que  estão  acima  da diagonal  principal: %d", somaAcim);
    printf("\nB) A soma dos  elementos  que  estão  abaixo  da diagonal  principal: %d", somaAbaix);
    printf("\nC) A multiplicação  dos  elementos da diagonal principal: %d", mult); 
}