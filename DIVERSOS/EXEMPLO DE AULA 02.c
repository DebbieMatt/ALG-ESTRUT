#include <stdio.h>


void FuncClasifica(int idade){

    if ((idade >= 5) && (idade <= 7)){

      printf("Infantil A");
    }
    else if ((idade >= 8) && (idade <= 10)){

       printf("Infantil B");
    }
    else if ((idade >= 11) && (idade <= 13)){

      printf("Juvenil A");
    }
    else if ((idade >= 14) && (idade <= 17)){

       printf("Juvenil B");
    }
    else if ((idade >= 18) && (idade <= 50)){

       printf("Adulto");
    }
    else {
        printf("Nao pertence a nenhuma categoria");
    }
}

int main (int argc, char** argv){

    int idade;

    do{
        printf("Quantos anos vc tem ?");
        scanf("%d", &idade);
        printf("\n");
        FuncClasifica(idade);
        printf("\n");
    } while (idade > 0);

    return 0;
}
