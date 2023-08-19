#include <stdio.h>

int main (){
int servico;
float desc, total;
char resposta;

printf("Seja bem vindo ao laboratório Análise Ideal \n");
printf("Por favor nos informe se tem o plano de saude. Digite: S - sim ou N - nao: \n");
scanf("%c", &resposta);

printf("Qual dos seguintes exames deseja realizar:");
scanf("%i", &servico);


switch (resposta){
    
case 's':

if (servico == 501){
    desc = 28.97 * 0.15;
    total = 28.97 - desc;
printf("Voce escolheu o exame de Hemograma completo, esta custando R$ %.2f \n", total);
}

else if (servico == 502) {
    desc = 22.87 * 0.15;
    total = 22.87 - desc;
    printf("Voce escolheu o exame de Colesterol, esta custando R$ %.2f \n", total);
}

else if (servico == 503){
    desc = 23.74 * 0.15;
    total = 23.74 - desc;
    printf("Voce escolheu o exame de Creatinina e ureia, esta custando R$ %.2f \n", total);
}

else if (servico == 504){
    desc = 19.74 * 0.15;
    total = 19.74 - desc;
    printf("Voce escolheu o exame de Glicemia, esta custando R$ %.2f \n", total);
}

else if (servico == 505){
    desc = 26.22 * 0.15;
    total = 26.22 - desc;
    printf("Voce escolheu o exame de Triglicerídeos, esta custando R$ %.2f \n", total);
}

else if (servico == 506){
    desc = 33.47 * 0.15;
    total = 33.47 - desc;
    printf("Voce escolheu o exame de Transaminases, esta custando R$ %.2f \n", total);
}

else if(servico == 507){
    desc = 29.99 * 0.15;
    total = 29.99 - desc;
    printf("Voce escolheu o exame de Ácido úrico, esta custando R$ %.2f \n", total);
}

else {
    printf("Desculpe, mas essa opção é invalida ");
}

break;

case 'n':

if (servico == 501){
printf("Voce escolheu o exame de Hemograma completo, esta custando R$ 28.97 \n");
}

else if (servico == 502) {
    printf("Voce escolheu o exame de Colesterol, esta custando R$22.87 \n");
}

else if (servico == 503){
    printf("Voce escolheu o exame de Creatinina e ureia, esta custando R$ 23.74 \n");
}

else if (servico == 504){
    printf("Voce escolheu o exame de Glicemia, esta custando R$ 19.74 \n");
}

else if (servico == 505){
    printf("Voce escolheu o exame de Triglicerídeos, esta custando R$ 26.22 \n");
}

else if (servico == 506){
    printf("Voce escolheu o exame de Transaminases, esta custando R$ 33.47 \n");
}

else if(servico == 507){
    printf("Voce escolheu o exame de Ácido úrico, esta custando R$29.99 \n");
}

else {
    printf("Desculpe, mas essa opção é invalida ");
}

break;

default: 
    printf("Desculpe, mas essa opção é invalida");
}

return 0;
}
