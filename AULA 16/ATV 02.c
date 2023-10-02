#include <stdio.h>

int main()
{
    double peso[15], soma = 0, media;
    
    for(int i = 0; i < 15; i++){
        
        printf("Digite a %d° peso:", i + 1);
        scanf("%lf", &peso[i]);
    }
    
    for(int i = 0; i < 15; i++){
        soma += peso[i]; 
    }
    
    media = soma / 15;
    
    printf("\nA soma da média aritmedica: %.2lf", media);
    
    printf("\nOs pesos que estão abaixo da media: ");
    
    for (int i = 0; i < 15; i++){
        if (peso[i] < media){
            printf("%.1lf \t", peso[i]);
        }
    }
}