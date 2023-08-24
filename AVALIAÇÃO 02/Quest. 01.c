#include <stdio.h>

int main()
{
    int voto, t_v, somador1, somador2, somador3, somador4, somadorB, somadorN;
    
    printf("Bem vindo a eleição presidencial \n");
    printf("Considere os seguintes números e seus respectivos candidatos: \n");
    printf(" Digite 50 - Candidato 1 \n");
    printf(" Digite 55 - Candidato 2 \n");
    printf(" Digite 60 - Candidato 3 \n");
    printf(" Digite 65 - Candidato 4 \n");
    printf(" Digite 70 - Voto em branco \n");
    printf(" Digite 75 - Voto nulo");  // 20 votos no total; 
    printf("\n Por favor nos informe o seu voto: (tecle 0 se quiser encerrar)");
    scanf("%i", &voto);
    
do { 
    
    printf("\n Por favor nos informe o seu voto: (tecle 0 se quiser encerrar)");
    scanf("%i", &voto);
    
    
    if (voto != 0){
}  
    else if ( voto == 50){
    somador1++;
}
    else if ( voto == 55){
    somador2++;
}
    else if ( voto == 60){
    somador3++;
}
    else if ( voto == 65){
    somador4++;
}
    else if ( voto == 70){
    somadorB++;
}
    else if ( voto == 75){
    somadorN++;
}
    else { printf("Opcao inavalida"); }

} while (voto != 0);

 t_v = somador1 + somador2 + somador3 + somador4;

printf("O candidato 1 teve %d , votos e %.2f %% de votos validos \n.", somador1, ((somador1 * 1.0)/ t_v)* 100 );
printf("O candidato 2 teve %d , votos e %.2f %% de votos validos \n.", somador2, ((somador2 * 1.0)/ t_v)* 100);
printf("O candidato 3 teve %d , votos e %.2f %% de votos validos \n.", somador3, ((somador3 * 1.0)/ t_v)* 100);
printf("O candidato 4 teve %d , votos e %.2f %% de votos validos \n.", somador4, ((somador4 * 1.0)/ t_v)* 100);
printf("O numero total de votos nulos: %d \n", somadorN);
printf("O numero total de votos brancos: %d \n", somadorB);
    return 0;

}