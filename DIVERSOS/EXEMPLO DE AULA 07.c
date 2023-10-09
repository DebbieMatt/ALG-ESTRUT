
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int verificaSenha (char senha[]){
    
    int tam = strlen(senha);
    
    int num = 0, letra = 0, simb = 0;
    
    for (int i = 0; senha[i] != 0; i++){
        
        if (isdigit(senha[i]) != 0){
            num++;
        }
        if (ispunct(senha[i])!= 0){
            simb++;
        }
        if (isupper(senha[i])!= 0){
            letra++;
        }
    }
        
    if(tam < 8){
            
            return 0;
    }
    
    else if((tam >= 8) && (num >= 1)&& (simb >= 0)&& (letra >= 0)){
            
            return 1;
    }
        
    else if ((tam >= 8) && (num >= 1) && (simb >= 1)&& (letra >= 0)){
            
            return 2;
            
    }
        
    else if ((tam >= 8) && (num >= 1) && (simb >= 1) && (letra >= 1)){
            
            return 3;
    }
        
}

int main (){
    
    int result;
    char senha[15], i;
    
    do {
        
    printf("Digite uma senha:");
    scanf("%s", &senha[i]);
    
    result = verificaSenha(senha);
    
    } while(result == 0);
    
    switch (result){
        
        case 1:
            printf("\nSenha fraca");
        break;
        
        case 2:
            printf("\nSenha mediana");
        break;
        
        case 3:
            printf("\nSenha forte");
        break;
    }
    
    return 0;
}
