// Façaumalgoritmoqueleia10valoreseretorne: a) Quantosvaloresestãonointervalo[5,15] b) Quantosvaloresestãonointervalo[32,45] c) Quantosvaloresestãoforadosintervalosprevistosacima
#include <stdio.h>

int main()
{
    int y, var, var2, var3;
  
    for (int i = 0; i < 10; i++){
    printf("Digite um valor: ");
    scanf("%i", &y);

        if (y >= 5 && y <= 15){
            var++;
        }
        else if (y >= 32 && y <= 45){
            var2++;
        }
        else {
            var3++;
        }
}

printf("\n %d : dos numeros digitados estao dentro do intervalo de 5 a 15 \n", var);
printf("%d : dos numeros digitados estao dentro do intervalo de 32 a 45 \n", var2);
printf("Dos numeros digitados %d nao esta dentro dos intervalos \n", var3);

    return 0;
}
