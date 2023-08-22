#include <stdio.h>
#include <float.h>

int main(){

float media=0, maior_media=FLT_MIN, menor_media=FLT_MAX, somadorMedia=0;
int i;


/*
maior_media = media;
menor_media = media; */

for(i=0; media >=0; i++){
    printf("Digite o valor da media: (-1 para parar)");
    scanf("%f", &media);
    if (media >=0){
    somadorMedia += media;
    if (media > maior_media){
        maior_media = media;
    }
    if (media < menor_media){
        menor_media = media;
    }
    }
}

printf("A maior media eh: %.2f \n", maior_media);
printf("A menor media eh: %.2f \n", menor_media);
printf("A media aritmetica da turma eh: %.2f", somadorMedia/(i-1));




}
