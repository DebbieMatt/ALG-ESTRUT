#include <stdio.h>

int main (){
    
int n;
double salario, desc, s_l;

printf("BEM VINDO AO INSS, NOS INFOME SUA IDADE: \n");
scanf("%i", &n);

printf("NOS INFOME O SEU SÁLARIO BRUTO:");
scanf("%lf", &salario);

if ((n >= 18 && n <= 22) || (n > 50)){
    if (salario <= 1903.98){
    printf("O seu salario liquido é: R$ %.2lf \n", salario);
    }
    else if (salario > 1903.99 && salario < 2826.65){
        desc = salario * 0.075;
        s_l = salario - desc;
        printf ("O seu salario liquido é: R$ %.2lf \n", s_l);
    }
    else if (salario > 2826.66 && salario < 3751.05){
        desc = salario * 0.15;
        s_l = salario - desc;
        printf ("O seu salario liquido é: R$ %.2lf \n", s_l);
    }
    else if (salario > 3751.06 && salario < 4664.68){
        desc = salario * 0.225;
        s_l = salario - desc;
        printf ("O seu salario liquido é: R$ %.2lf \n", s_l);
    }
    else if (salario > 4664.69){
        desc = salario * 0.275;
        s_l = salario - desc;
        printf ("O seu salario liquido é: R$ %.2lf \n", s_l);
    }
}   
else {
    printf("Voce não se enquadra na faixa etaria para contribuição ou seu salario é insuficiente\n");
}
}