// Desenvolva um código que receba a idade de 15 pessoas e retorne quantas são maiores de 25 anos.

#include <stdio.h>

int main()
{
    int y, var, var2, var3;
  
    for (int i = 0; i < 15; i++){
    printf("Digite a sua idade: ");
    scanf("%i", &y);

        if (y >= 25){
            var++;
        }
}

printf("\n %d : pessoas são maiores de 25 anos \n", var);


    return 0;
}
