#include <stdio.h>

int main () {

int var1, var2, var3, sm1, sm2, sm3, s_v_m1, s_v_m2, s_v_m3;

printf("Digite um numero:");
scanf("%i", &var1);

printf("Digite mais um numero:");
scanf("%i", &var2);

printf("Digite outro numero numero:");
scanf("%i", &var3);

if (var1 < var2 && var2 < var3  ){ //1, 2 , 3 : 1 2, 1 3, 2 3, 
sm1 = var1 + var2;

printf("Se compararmos: valor1 < valor2 e valor2 < valor3. A soma dos dois menores numeros é: %i \n", sm1);
s_v_m1 = sm1%2 != 0;

printf("O triplo desses  numeros é: %i \n", sm1 * 3);
} 

else if (s_v_m1%2 == 0 ) {
printf("O somatorio deles resulta no numero par : %i \n", sm1);
}

else if (var2 < var1 && var3 < var1){
sm2 = var2 + var3;

printf("Se compararmos: valor2 < valor1 e valor3 < valor1. A soma dos dois menores numeros é: %i \n", sm2);
s_v_m2 = sm2%2 != 0;

printf("O triplo desses  numeros é: %i \n", sm2 * 3);
}

else if (s_v_m2%2 == 0) {
printf("O somatorio deles resulta no numero par : %i \n", sm2);
}

else if (var3 < var2 && var1 < var2){
sm3 = var3 + var1;

printf("Agora se compararmos: valor3 < valor2 e var1 < var2. A soma dos dois menores numeros é: %i \n", sm3);

s_v_m3 = sm3%2 != 0;

printf("O triplo desses  numeros é: %i \n", sm3 * 3);
}

else if ( s_v_m3%2 == 0) {
printf("O somatorio deles resulta no numero par : %i \n", sm3);
}

else {
    printf("Opca invalida");
}
return 0;
}

