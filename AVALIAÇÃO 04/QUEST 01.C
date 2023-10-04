#include <stdio.h>
#include <ctype.h>

int main(){

    int letraM = 0, num = 0;

    char palavra[40], i;

    printf("Digite uma palavra: ");

    scanf("%40[^\n]s", &palavra[i]); 

    for (int i = 0; i < 40; i++){        //  todos os caracteres

       if (isupper(palavra[i])){  // se é uma letra maiuscula

           letraM++;
        }

        else if (isdigit(palavra[i])){ // se for numero

           num++;
        }
    }

    printf("Tem %d letras maiusculas", letraM);

    printf("\nTem %d numeros", num);
}