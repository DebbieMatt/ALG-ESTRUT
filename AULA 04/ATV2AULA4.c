#include <stdio.h>

int main () {

int var1, var2, var3;
float peso1, peso2, peso3, media_p, num, den;

printf("Escreva um numero:\n");
scanf("%i", &var1);

printf("Escreva outro numero:\n");
scanf("%i", &var2);

printf("Digite mais outro numero:\n");
scanf("%i", &var3);


if (var1 % 2 == 0){
    peso1= 5.5; //par
}
else{
    peso1 = 4.5;
}

if (var2 % 2 == 0){
    peso2= 5.5; //par
}
else{
    peso2 = 4.5;
}

if (var3 % 2 == 0){
    peso3 = 5.5; //par
}
else{
    peso3 = 4.5;
}

num = (var1 * peso1) + (var2 * peso2) + (var3 * peso3);
den = (peso1 + peso2 + peso3);

media_p = num / den ;

printf("Sua média ponderada é: %.2f", media_p);

return 0;

}