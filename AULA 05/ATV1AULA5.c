
#include <stdio.h>

int main (){
    
char letra;

printf("Digite alguma letra do alfabeto:");
scanf("%c", &letra);

switch (letra){
    
case 'a':
    printf("Voce digitou uma vogal: %c", letra);

break;

case 'e':
    printf("Voce digitou uma vogal: %c", letra);

break;

case 'i':
    printf("Voce digitou uma vogal: %c", letra);

break;

case 'o':
    printf("Voce digitou uma vogal: %c", letra);

break;

case 'u':
    printf("Voce digitou uma vogal: %c", letra);

break;

default: 
    printf("vc digitou uma consoante: %c", letra);
}

return 0;

/*
#include <stdio.h>

int main (){
    
int mes;

printf("Digite o numero, que corresponde ao mes que deseja:");
scanf("%i", &mes);

switch (mes){
    
case 1:
    printf("Mes %i eh janeiro", mes);

break;

case 2:
    printf("Mes %i eh fevereiro", mes);

break;

case 3:
    printf("Mes %i eh março", mes);

break;

case 4:
    printf("Mes %i eh abril", mes);

break;

case 5:
    printf("Mes %i eh maio", mes);

break;

case 6:
    printf("Mes %i eh junho", mes);

break;

case 7:
    printf("Mes %i eh julho", mes);

break;

case 8:
    printf("Mes %i eh agosto", mes);

break;

case 9:
    printf("Mes %i eh setembro", mes);

break;

case 10:
    printf("Mes %i eh outubro", mes);

break;

case 11:
    printf("Mes %i eh novembro", mes);

break;

case 12:
    printf("Mes %i eh dezembro", mes);

break;

default: 
    printf("Nao existe, mes que corresponde a esse numero");
}

return 0;
}
*/

/*

#include <stdio.h>

int main (){
    
int codigo, quant;
float lanche, custo;

printf("Digite o codigo do lanche, que deseja:");
scanf("%i", &codigo);

printf("Digite a quantidade do lanche, que deseja:");
scanf("%i", &quant);

switch (codigo){
    
case 200:
lanche = 21.70;
custo = 21.70 * quant; 
    printf("O lanche que vc escolheu é baguncinha \n");
    printf("Lhe custará R$ %.2f", custo);

break;

case 201:
lanche = 28.90;
custo = 28.90 * quant; 
    printf("O lanche que vc escolheu é o Bagunça caseiro \n");
    printf("Lhe custará R$ %.2f", custo);

break;

case 202:
lanche = 18.20;
custo = 18.20 * quant; 
    printf("O lanche que vc escolheu é X salada \n");
    printf("Lhe custará R$ %.2f", custo);

break;

case 203:
lanche = 15.99;
custo = 15.99 * quant; 
    printf("O lanche que vc escolheu é Bauru simples \n");
    printf("Lhe custará R$ %.2f", custo);

break;

case 204:
lanche = 6;
custo = 6 * quant; 
    printf("A bebida que vc escolheu é Refrigerante lata \n");
    printf("Lhe custará R$ %.2f", custo);

break;

case 205:
lanche = 4;
custo = 4 * quant; 
    printf("A bebida que vc escolheu é Água mineral \n");
    printf("Lhe custará R$ %.2f", custo);

break;

default: 
    printf("Nao existe este produto, na nossa lanchonete Chapa Quente");
}


return 0;
}
*/

// Prof, por favor dá uma olhada nesse 4° codigo, não sei mais ao certo o que esta errado, não é a lógica de programação, mas sim a matematica.

/*
#include <stdio.h>

int main (){
    
int opcao;
float m_terreno, area, custo, total, desc,desc2, desc_p, total_2, todo;

printf("Qual dos tipos de serviços de pulverizaçãode deseja: \n");
printf("Tipo 1 - lagartas \n");
printf("Tipo 2 - gafanhotos \n");
printf("Tipo 3 - ferrugem \n");
printf("Tipo 4 - todos acima \n");
scanf("%i", &opcao);

printf("Me informe o tamanho da area quadrada do seu terreno:");
scanf("%f", &area);

switch (opcao){
case 1 :

if (area >= 500){
m_terreno = 75; 
custo = area * m_terreno;
desc = custo * 0.05;
total = custo - desc;
printf("Lhe custará R$%.2f pulvorizar contra lagartas", total);
}

else if (total >= 50000){
desc2 = total - 50000;
desc_p = desc2 * 0.15;
total_2 = desc2 - desc_p;
todo = total_2 + 50000;

printf("Lhe custará R$%.2f pulvorizar contra lagartas", todo);
}

else {
m_terreno = 75; 
custo = area * m_terreno;
printf("Lhe custará R$%.2f pulvorizar contra lagartas", custo);
}

break;

case 2 :

if (area >= 500){
m_terreno = 98; 
custo = area * m_terreno;
desc = custo * 0.05;
total = custo - desc;
printf("Lhe custará R$%.2f pulvorizar contra gafanhotos", total);
}

else if (total >= 50000){
desc2 = total - 50000;
desc_p = desc2 * 0.15;
total_2 = desc2 - desc_p;
todo = total_2 + 50000;
printf("Lhe custará R$%.2f pulvorizar contra gafanhotos", todo);
}

else {
m_terreno = 98; 
custo = area * m_terreno;
printf("Lhe custará R$%.2f pulvorizar contra gafanhotos", custo);
}

break;

case 3 :

if (area >= 500){
m_terreno = 108; 
custo = area * m_terreno;
desc = custo * 0.05;
total = custo - desc;
printf("Lhe custará R$%.2f pulvorizar contra ferrugem", total);
}

else if (total >= 50000) {
desc2 = total - 50000;
desc_p = desc2 * 0.15;
total_2 = desc2 - desc_p;
todo = total_2 + 50000;
printf("Lhe custará R$%.2f pulvorizar contra ferrugem", todo);
}

else {
m_terreno = 108; 
custo = area * m_terreno;
printf("Lhe custará R$%.2f pulvorizar contra ferrugem", custo);
}

break;

case 4 :

if (area >= 500){
m_terreno = 202; 
custo = area * m_terreno;
desc = custo * 0.05;
total = custo - desc;
printf("Lhe custará R$%.2f pulvorizar contra lagartas, gafanhotos e ferrugem", total);
}

else if (total >= 50000){
desc2 = total - 50000;
desc_p = desc2 * 0.15;
total_2 = desc2 - desc_p;
todo = total_2 + 50000;

printf("Lhe custará R$%.2f pulvorizar contra lagartas, gafanhotos e ferrugem", todo);
}

else {
m_terreno = 202; 
custo = area * m_terreno;
printf("Lhe custará R$%.2f pulvorizar contra lagartas, gafanhotos e ferrugem", custo);
}

break;

default: 
    printf("Nao existe este produto");
}

return 0;
}
*/
}