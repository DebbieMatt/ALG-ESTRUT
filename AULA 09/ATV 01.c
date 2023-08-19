#include <stdio.h>

// Faça um programa que imprima na tela os 20 primeiros números em ordem decrescente. 20 19 18 17 ... 0. 

#include <stdio.h>

int main()
{
    int cont;
  
  for(cont = 20; cont >= 0; cont--)
  {
    printf("%d ", cont);
  }

    return 0;
}

