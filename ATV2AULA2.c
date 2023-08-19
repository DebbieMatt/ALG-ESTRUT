#include <stdio.h>

int main(void) {
/*
    int ano, meses, dias;
    double ano_vida, meses_vida, dias_vida;
    double total_dias;
    
    printf("Digite quantos anos vc tem:");
    scanf("%d", &ano);

    printf("Digite quantos meses vc tem:");
    scanf("%d", &meses);

    printf("Digite quantos dias vc tem:");
    scanf("%d", &dias);
    
    ano_vida = ano * 360;
    meses_vida = meses * 30;

    total_dias = ano_vida + meses_vida + dias;
    
    printf("Voce tem %lf dias", total_dias);

    return 0; */

float dias_total;
int ano, meses, dias;

    printf("Quantos dias vc tem ?");
    scanf("%d", &dias_total);

    ano = dias_total / 360;
    meses = dias_total / 30;
    dias = dias_total / 7;

    printf("Voce tem %d anos, %d meses e %d dias", ano, meses, dias);

}
