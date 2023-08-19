
#include <stdio.h>

int main()
{
    int operacao, senha, i, tentativa;
    float dep, valor;
    
  do {
      printf("Bem vindo, qual operacao deseja realizar: 1 - DEPOSITAR; 2 - CONSULTAR O EXTRATO DA CONTA; 3 - SACAR DINHEIRO; \n ");
      printf("Por favor, digite a operacao que deseja realizar: \n");
      scanf ("%d", &operacao);
      getchar();
      
      switch (operacao){
          case 1:
          printf("Por favor digite, o valor que deseja depositar: \n");
          scanf("R$ %.2f", &dep);
          valor++;
          break;
          
          case 2:
          printf("Voce tem R$ %.2f de saldo em conta \n", valor);
          break;
          
          case 3:
          printf("Voce tem R$ %.2f de saldo em conta \n", valor);
          break;
      }
  } while(operacao != -1);
  
  printf("É preciso definir uma senha para autorizar as transações, por favor digite uma senha de 4 digitos: \n");
  scanf("%d", &senha);
  
for (i = 0; i < 3; i++){
     printf("Por favor, para prosseguir com a transação, digite a senha: \n");
     scanf("%d", &tentativa);
     
      if (tentativa == senha){
          printf("Senha correta. \n");
      } 
      else if (tentativa != senha){
          printf("Senha incorreta. \n");
      }
  }
  
  printf("Sua senha foi broqueada, procure uma central de atendimento.");
  
}
