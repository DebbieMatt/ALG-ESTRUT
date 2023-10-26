#include <stdio.h>
#include <ctype.h>

int main(int argc, char**argv){

    char vetor[40], i, maiuscula[40];
    int linha, num;

    printf("Digite uma string:");
    scanf("%40[^\n]s", &vetor[i]);
    
    printf("A palavra digitade eh: ");
    puts(vetor);

    for (int i = 0; i < 40; i++){
        if(isalpha(vetor[i])){
            num++;
            
            maiuscula[i] = toupper(vetor[i]);
        }
    }
    
    printf("existe %d caracteres.\n", num);
    printf("a string transformada: %s", maiuscula);
}
