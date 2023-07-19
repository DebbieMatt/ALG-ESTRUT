
#include <stdio.h>

int main (){
    
int num;

printf("Digite um numero de 1 até 7:");
scanf("%d", &num);

switch  (num){
    
case 1:
    printf("domingo");

break;

case 2:
    printf("segunda");
    
break;

case 3:
    printf("terca");
    
break;

case 4: 
    printf("quarta");
break;

case 5:
   printf("quinta");
break;

case 6:
    printf("sexta");
    
break;

case 7:
    printf("sabado");
    
break;

default: 
    printf("Escolha invalida");
}


return 0;
}