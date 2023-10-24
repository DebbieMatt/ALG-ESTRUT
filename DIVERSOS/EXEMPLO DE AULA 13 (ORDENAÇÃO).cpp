#include <stdio.h>
#define TAM 8

int main(){

    int vetor[TAM] = {9, 7, 0, 2, 54, 75, 5, 15};
    int auxiliar;
    
    printf("Vetor desordenado: ");
    
    for(int i = 0; i < TAM; i++){
        printf(" %d ", vetor[i]);
    }
    
    for(int i = 0; i < TAM - 1; i++){
        for(int j = 0; j < TAM - 1; j++){
            
            if(vetor[j] > vetor[j + 1]){
                
                auxiliar = vetor [j + 1];
                vetor[j + 1] = vetor [j];
                vetor[j] = auxiliar;
            }
        }
    }
    
    printf("\nVetor ordenado:");
    
    for(int i = 0; i < TAM; i++){
        printf(" %d ", vetor[i]);
    }

}

