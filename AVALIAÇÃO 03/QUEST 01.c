#include <stdio.h>

int converter(int ql, int escolha){ // função
   
   float  grama, libra, onca;
   
 switch (escolha){
     
    case 1 :
    grama = ql * 1000;
    printf("Voce escolheu gramas: %.1f", grama);
    break;
   
    case 2 :
    libra = ql * 2.205;
    printf("Voce escolheu libra: %.3f", libra);
    break;
   
    case 3 :
    onca = ql * 35.274;
    printf("Voce escolheu onca: %.3f", onca);
    break;

    default:
    printf("Não corresponde a nenhuma unidade de medida.");
    break;
}
}

int main (){

    int ql, escolha;

    do{
        printf("Digite a quantidade de quilogramas: \n");
        scanf("%d", &ql);
       
        printf("Deseja converter em:  1 - grama, 2 - libra ou 3 - onca ? \n");
        scanf("%d", &escolha);
       
        printf("\n");
        converter(ql, escolha);
        printf("\n");
       
    } while (ql > 0);
}