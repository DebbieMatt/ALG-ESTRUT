#include <stdio.h>

int main() {
  int letraC = 0, letraD = 0, letraP = 0;
  float valor;
  char escolha;

  for (int i = 0; i < 10; i++){
    printf("Por favor, digite a forma de pagamento: (C - para cartão, P - para pix ou D - para dinheiro). Por favor nos informe o valor:");
    scanf(" %c , R$ %.2f ", &escolha, &valor);
    
    switch (escolha){
       case 'C':
        letraC++;
       break;
        
      case 'D':
       letraD++;
      break;

      case 'P':
       letraP++;
      break;

      default:
      printf("invalido");
      break;
    }
    }

  printf(" O valor total das compras pagas no cartão: %d\n", letraC);
  printf(" O valor total das compras pagas no dinheiro: %d\n", letraD);
  printf(" O valor total das compras pagas no pix: %d\n", letraP);
  printf("O valor total de todas as compras, independente da forma de pagamento: %.2f \n", valor );

  return 0;
}
