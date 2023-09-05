#include <stdio.h>

int converter(int pol, int escolha){ // função 
   
   float  metro, cent, jarda, pé;
   
 switch (escolha){
     
    case 1 :
    metro = pol * 0.0254;
    printf("Voce escolheu metros: %.3f", metro);
    break;
    
    case 2 :
    cent = pol * 2.54;
    printf("Voce escolheu centímetro: %.2f", cent);
    break;
    
    case 3 :
    jarda = pol * 0.0277778;
    printf("Voce escolheu jarda: %.6f", jarda);
    break;
    
    case 4 :
    pé = pol * 0.0833333;
    printf("Voce escolheu pés: %.5f", pé);
    break;

    default:
    printf("Não corresponde a nenhuma unidade de medida.");
    break;
}
}

int main (){

    int pol, escolha;

    do{
        printf("Digite a quantidade de polegadas: \n");
        scanf("%d", &pol);
        
        printf("Deseja converter em: 1 - metro, 2 - centímetro, 3 - jarda ou 4 - pé ? \n");
        scanf("%d", &escolha);
        
        printf("\n");
        converter(pol, escolha);
        printf("\n");
        
    } while (pol > 0);
}