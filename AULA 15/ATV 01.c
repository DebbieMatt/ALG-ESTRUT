#include <stdio.h>

int main(){
    
    int quant = 0;
    char palavra[30], i;
    
    printf("Digite uma palavra: ");
    scanf("%30[^\n]s", &palavra[i]); // sempre utilizar %s, para gravar uma palavra inteira.
    // [^\n] faz com que o sistema reconheça a palavra depois do espaço.
    
    printf("A palavra digitade eh: ");
    puts(palavra);
    
    for (i = 0; i < 30; i++){
        if (palavra[i] == 'a'){
            quant++;
        }
    }
    
    printf("A letra 'a' apareceu %d vezes em sua palavra.", quant);
}
