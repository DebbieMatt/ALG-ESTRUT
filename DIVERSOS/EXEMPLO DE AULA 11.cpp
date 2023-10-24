
#include <stdio.h>

int main(){
    
    int matriz[4][4], linhaEnc =- 1; // Pq '=-' ?
    int colunaEnc =- 1, valor;
    
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            printf("Insira a posição do elemento [%d][%d]:", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    
    printf("O valor a ser buscado:");
    scanf("%d", &valor);
    
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            if(matriz[linha][coluna] == valor){
                linhaEnc = linha;
                colunaEnc = coluna;
            }
        }
    }
    
    if (linhaEnc ==- 1 && colunaEnc ==- 1){
        printf("Valor não encontrado na matriz");
    }
    
    else {
        printf("O valor buscado esta na posição: [%d][%d]", linhaEnc, colunaEnc);
    }
}
