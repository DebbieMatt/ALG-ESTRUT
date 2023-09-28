#include <stdio.h>

double comparadorM(double media){ // função

if ((media >= 1) & (media <= 10)){
    return '0';
}
else {
    return '1';
}

}

int main (){

double A, B, C, resultado, media;

printf("Escreva 1° nota:\n");
scanf("%lf", &A);

printf("Escreva 2° nota:\n");
scanf("%lf", &B);

printf("Escreva 3° nota:\n");
scanf("%lf", &C);

media = ((A + B + C)/3);

resultado = comparadorM(media);

printf ("O retorno eh: %lf \n", media);
printf("esta entre 0 e 10: %lf \n", resultado); // inusitadamente esta retornando o numero 48
}