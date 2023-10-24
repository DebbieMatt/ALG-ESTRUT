#include <ctype.h>
#include <stdio.h>

int main(){
    
    char palavra[3][30], caractere;
    int linha, qtdVogal = 0, maiorQtdVogal = 0, maiorP =- 1;
    
    for(linha = 0; linha < 3; linha++){
        printf("Digite a %d° palavra:", linha);
        fgets(palavra[linha], 30, stdin);
    }
    
    printf("\nAs palavras digitadas:\n");
    
    for(linha = 0; linha < 3; linha++){
        printf("%s", palavra[linha]);
    }
    
    for(linha = 0; linha < 3; linha++){
        
        for(int coluna = 0; palavra[linha][coluna] != '\0'; coluna++){ // o que significa esse '\0' ?
        
            if (isalpha(palavra[linha][coluna])){
                
                caractere = toupper(palavra[linha][coluna]);
                
                switch(caractere){
                    case 'A':
                    case 'E':
                    case 'I':
                    case 'O':
                    case 'U':
                    qtdVogal++;
                }
            }
        }
    
        if (qtdVogal > maiorQtdVogal){
            
            maiorQtdVogal = qtdVogal;
            maiorP = linha;
        }
        qtdVogal = 0;
    }
    printf("A palavra com maior quantidade de vogais: ");
    printf("%s", palavra[maiorP]);
}
