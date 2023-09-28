#include <stdio.h>

int main() {

char palavra [20];
int contador = 0;

printf("Digite uma palavra qualquer: ");
scanf("%s", &palavra);

for (int i = 0; palavra[i] != 0; i++){
contador++;
}

printf("\nA string possui %d caracteres", contador);

}