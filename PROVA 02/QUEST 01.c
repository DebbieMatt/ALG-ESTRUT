#include <stdio.h>

int divs(int valor){

    int dividendo = 0, soma = 0;

    for (int i = 1; i <= valor; i++){

        if (valor% i == 0){

        soma += i;
        }
    }
    
    return soma;
}

int main(){

    int valor = 0, resultado;

    do{
        printf("Digite um numero inteiro: \n");
        scanf("%d", &valor);

        resultado = divs (valor);

        printf("A soma dos divisores eh: %d \n", resultado);

    }while (valor >= 0);
}