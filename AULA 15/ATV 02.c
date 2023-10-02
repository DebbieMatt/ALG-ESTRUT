#include <stdio.h>
#include <ctype.h>

char verifica(char palavra[30]){
    
    int letra = 0, num = 0;
    char i;
    
    for (int i = 0; i < 30; i++){        //  todos os caracteres
    
       if (isalpha(palavra[i])){  // se é uma letra  'isalpha'
           letra++;
    
        }
        else if (isdigit(palavra[i])){ // se for numero 'isdigit'
           num++;
           
        }
    }
    printf("Tem %d letras", letra);
    printf("\nTem %d letras", num);
}

int main(){
    
    char palavra[30], i;
    
    printf("Digite uma palavra: ");
    scanf("%30[^\n]s", &palavra[i]); // sempre utilizar %s, para gravar uma palavra inteira.
    // [^\n] faz com que o sistema reconheça a palavra depois do espaço.
    
    printf("A palavra digitade eh: ");
    puts(palavra);
    
    verifica(palavra);
    
    // printf("A letra 'a' apareceu %d vezes em sua palavra.", quant);
}
