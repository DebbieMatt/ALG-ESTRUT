
#include <stdio.h>

int main()
{
    int i, notas [5];
    
    for (i=0; i<5; i++){
        printf("Digite a %d nota : \n", i +1);
        scanf("%d", &notas[i]);
    }
    
    printf("As notas digitadas foram: \n");
    
    for (i=4; i>=0; i--){ // inicia na ultima posição e para na primeira posição, decrementando.
        printf("%d \n", notas [i]);
    }
    return 0;
 
}
