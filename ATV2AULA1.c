#include <stdio.h>

int main () {

/*
int peso;
float altura;
double imc;

printf("Digite seu peso:");
scanf("%i", &peso);

printf("Digite sua altura:");
scanf("%f", &altura);

imc = peso /  (altura * altura);
printf("Seu imc é: %lf", imc); 
return 0; 



double preco;

printf("Digite o preco do produto:");
scanf("%lf", &preco);

int valor_desc = preco * ( 5 / 100);
float desc = preco - valor_desc;

printf("Seu produto terá um desconto de: %f", desc);

int base1;
int base2;
int altura;
int area;

printf("Digite a numero da base maior:");
scanf("%i", &base1);

printf("Digite a numero da base menor:");
scanf("%i", &base2);

printf("Digite a altura:"); 
scanf("%i", &altura);

area = (base1 + base2) * altura / 2;

printf("A area do triangulo é: %i", area); */

int valor1, valor2;

printf("Digite um numero qualquer:");
scanf("%i", &valor1);

printf("Digite outro numero qualquer:");
scanf("%i", &valor2);

if (valor1 > valor2) {
    printf("O numero %i é maior que %i", valor1, valor2);
} else {
    printf("O numero %i é maior que %i", valor2, valor1);

} 
}
