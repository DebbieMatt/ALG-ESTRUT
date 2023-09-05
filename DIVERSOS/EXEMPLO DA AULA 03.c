#include <math.h>
#include <stdio.h>

int exponcial (int base, int expo){
    int resultado;
    resultado = pow (base, expo);
    return resultado;
}

int main()
{
    int base, expo, resultado;
    
    printf("Por favor digite a base:");
    scanf("%d", &base);
    
    printf("Agora digite o expoente:");
    scanf("%d", &expo);

  resultado = exponcial (base, expo);
  
    printf("O resultado eh: %d", resultado);
}
