#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char**argv){

    int valor[3][3], i;

    srand(time(NULL));

    printf("Matrix: \n");

    for (int linha = 0; linha < 3; linha++ ){
        
        printf("\n");
        
        for (int coluna = 0; coluna < 3; coluna++ ){

        valor[linha][coluna] = 3 + rand() % 99;

        printf("%3d", valor[linha][coluna]);
        }
    } 
}