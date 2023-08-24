#include <stdio.h>

int main()

{
    int n;
    
    do {

        printf("Digite um numero:");
        scanf("%d", &n);

       if (n > 0 && n%3 == 0 ){

           printf("eh multiplo de 3, seu dobro eh: %d \n", n * 2);
       }
       else if (n <= 0){

           printf("número menor ou igual a 0 \n"); break;
       }
       else {
           printf(" %d : não é multiplo de 3 e nem o número menor ou igual a 0. \n", n);
       }
    } while (n != 0); 
}