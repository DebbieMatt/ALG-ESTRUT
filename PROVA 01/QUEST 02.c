#include <stdio.h>

int main()

{
    int escolha, preco5, preco6;
    float  preco;

    do {

        printf("Bem vindo A lanchonete Chapa Quente. \n");
        printf("Cardapio, digite: 10 - baguncinha; 20 - bagunça caseiro; 30 - x salada; 40 - bauru simples; 50 - refri lata; 60 - agua. \n");

        scanf("%d", &escolha);

            if (escolha == 10) {
            preco += 21.70;
            }

            else if (escolha == 20) {
            preco += 28.90;
            }

            else if (escolha == 30) {
            preco += 18.20;
            }


            else if (escolha == 40) {
            preco += 15.99;
            }

            else if (escolha == 50) {
            preco += 6;
            }

            else if (escolha == 60) {
            preco += 4;
            }

            else if (escolha == -2){
            printf("parada \n"); break;
            } 
            
            else {
                printf ("Codigo invalido \n");
            }
    } while (escolha != -2);

    printf("O valor total da compra: R$ %.2f", preco);
    
    return 0;
}