#include <stdio.h>

int main()

{
    float imp;
    int n, cont;

    while (n != -2) {

        printf("Digite um numero:");

        scanf("%d", &n);

       if (n > 0 && n%2 != 0 ){
          imp += n;
          cont++;
       }

       else {
           printf(" %d : numero par ou negativo\n", n);
       }
    } 
    
    printf ("A média dos valores impares digitados eh: %.2f \n.", imp/cont);
}