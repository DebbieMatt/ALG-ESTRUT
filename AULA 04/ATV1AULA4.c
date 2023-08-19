#include <stdio.h>

int main () {

int peso;
float altura;
double imc;

printf("Digite seu peso:");
scanf("%i", &peso);

printf("Digite sua altura:");
scanf("%f", &altura);

imc = peso /  (altura * altura);
printf("Seu imc é: %lf \n", imc); 

if (imc < 17){
    printf("Voce esta muito abaixo do peso \n");
} 
else if ( 17 < imc && imc < 18.49) {
    printf("Voce esta abaixo do peso \n");
}

else if(18.5 < imc  && imc < 24.99){
    printf("Voce esta com o peso normal \n");
}
else if (25 < imc && imc < 29.99) {
    printf("Voce esta acima do peso \n");
}

else if(30 < imc && imc < 34.99){
    printf("Voce esta com Obesidade I \n");
} 
else if (35 < imc && imc < 39.99) {
    printf("Voce esta com Obesidade II (severa) \n");
}

else if (40 < imc){
    printf("Voce esta com Obesidade III (mórbida) \n");
} 
else {
    printf("invalido");
}

return 0;

}
