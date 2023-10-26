#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

char meuVetor[40];

printf("Digite a string: ");
fgets (meuVetor, 40, stdin);

int tamanho = strlen(meuVetor);
int contaNumeros=0;

for (int i=0; i < tamanho; i++){
    if (isdigit(meuVetor[i]) != 0){
        contaNumeros++;
    }
}

if (contaNumeros == 0){
    for (int i=0; i <tamanho; i++){
        meuVetor[i] = tolower(meuVetor[i]);
    }
    printf("\nA string possui %d caracteres", tamanho-1);
    printf("\nA string transformada eh: %s", meuVetor);

    printf("\nEncerrando o programa...");
}
else{
    printf("\nString invalida\nEncerrando o programa...");
}

return 0;
}
