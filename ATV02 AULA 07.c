// Escreva um algoritmo que leia 8 números digitados pelo usuário e realize a
// soma apenas se o número for par.

#include <stdio.h>

int main() {
    
    int i, var, quantP = 0;
    float somatorioI = 0.0, somatorioP = 0.0;

    i = 1, i <= 20, i++;
    
      printf("Digite 1° valor: ");
      scanf("%d", &var);
      
    if (var % 2 == 0){ // se valor for par
        somatorioP += var; // somatório dos pares
        quantP++; // quantidade de pares
    }
    
    else {
        somatorioI++; // impares 
    }
      printf("Digite 2° valor: ");
      scanf("%d", &var);
     
    if (var % 2 == 0){ // se valor for par
        somatorioP += var; // somatório dos pares
        quantP++; // quantidade de pares
    }
    
    else {
        somatorioI++; // impares 
    }
    
      printf("Digite 3° valor: ");
      scanf("%d", &var);
        
    if (var % 2 == 0){ // se valor for par
        somatorioP += var; // somatório dos pares
        quantP++; // quantidade de pares
        
    }
    
    else {
        somatorioI++; // impares
    }
    
      printf("Digite 4° valor: ");
      scanf("%d", &var);
        
    if (var % 2 == 0){ // se valor for par
        somatorioP += var; // somatório dos pares
        quantP++; // quantidade de pares
        
    }
    
    else {
        somatorioI++; // impares
    }
  
    printf("Digite 5° valor: ");
      scanf("%d", &var);
        
    if (var % 2 == 0){ // se valor for par
        somatorioP += var; // somatório dos pares
        quantP++; // quantidade de pares
        
    }
    
    else {
        somatorioI++; // impares
    }
  
  printf(" Média dos pares: %.2f ", somatorioP);
}