#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 2
#define C 2

int main(int argc, char**argv){
    
    int matriz[2][2], i, determinante;
    int sub = 0, soma = 1, somaSec = 1;

    srand(time(NULL));

    printf( "Matriz:\n" );
    
    for(int linha = 0; linha < L; linha++ ){
        for(int coluna = 0; coluna < C; coluna++ ){
            
            matriz[linha][coluna] = 2 + rand() % 4;
            
            printf( "%3d", matriz[linha][coluna] );
            
            if( linha == coluna ){ // diagonal principal multiplica
                
                soma *= matriz[linha][coluna];
            }
            
            else if (coluna == C - linha - 1 ){ // soma diagonal secundaria da principal 
               
                somaSec *= matriz[linha][coluna];
            }
            
        }
        printf( "\n" );
    }
    
    determinante = soma - somaSec;
    printf("\n%d", soma);
    printf("\n%d", somaSec);
    printf("\nA determinante eh: %d", determinante);
    
    
}