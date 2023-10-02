#include <stdio.h>

int main()
{
    double nota[5];
    
    for(int i = 0; i < 5; i++){
        printf("Digite a %d° nota:", i + 1);
        scanf("%lf", &nota[i]);
    }
    
    printf("As notas digitadas foram:");
    
    for( int i = 0; i < 5; i++){
        printf("%.2lf\t", nota[i]);
    }
}
