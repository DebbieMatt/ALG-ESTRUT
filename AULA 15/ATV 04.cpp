#include <stdio.h> 
#include <ctype.h>

main(){
    
    char frase[80], maiúscula[80], minuscula[80], i;
    
    printf ("Digite uma frase: ");
    scanf("%80[^\n]s", &frase[i]);
    
    printf("A palavra digitade eh: ");
    puts(frase);
    
    for (i = 0; i < 80; i++){
        
        maiúscula[i] = toupper(frase[i]);
    }
    
    for (i = 0; i < 80; i++){
         
        minuscula[i] = tolower(frase[i]);
    }
    
    printf ("\nA string em maiúscula é: %s ", maiúscula);
    printf ("\nA string em maiúscula é: %s ", minuscula);
}