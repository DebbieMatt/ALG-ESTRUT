#include <stdio.h>
#include <time.h>

int main(void) {
    time_t mytime; // Representar tempo do calendario;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    int tm_mon;   // Indica os meses do ano de 0 a 11
    
    int ano_nasc;
    int mes_nasc;
    int idade_usuario;
    int prox_aniv;
    
    printf("Digite o ano em que vc nasceu:");
    scanf("%i", &ano_nasc);
    
    printf("Digite o mês que vc nasceu:");
    scanf("%i", &mes_nasc);
    
    idade_usuario =  (tm.tm_year + 1900) - ano_nasc; // a variavel tm.tm_year carrega valor 122 somado com 1900 = ano atual.
    prox_aniv = (tm.tm_mon + 1) - mes_nasc;

    printf("Daqui %i vc fará %i anos de idade.", prox_aniv, idade_usuario);
}