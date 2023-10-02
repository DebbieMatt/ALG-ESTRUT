#include <stdio.h>

int main()
{
    double nota[5], soma = 0;
    
    for(int i = 0; i < 5; i++){
        printf("Digite a %d° nota:", i + 1);
        scanf("%lf", &nota[i]);
    }
    
    printf("As notas digitadas foram:");
    
    //for( int i = 0; i < 5; i){
     //   printf("%.2lf\t", nota[i]);
   // }
    
    for( int i = 0; i < 5; i++){
        soma += nota[i]; 
    }
    
    printf(" A soma da média aritmedica: %.2lf", soma / 5);
}
