#include <stdio.h>
#include <stdlib.h> // esse é para o malloc //

char * FuncAluno(float nota){
    
    // declara como um ponteiro ...
    char *res;
    
    // alocando 20 posições de char
    // igual ponteiro ...
    res = malloc(20 * sizeof (char));

    if((nota < 0) || (nota > 100)){
       res[0] = 'E';
       res[1] = 'R';
       res[2] = 'R';
       res[3] = 'O';
    }
    else if(nota < 60){
       res[0] = 'R';
       res[1] = 'E';
       res[2] = 'P';
       res[3] = 'R';
       res[4] = 'O';
       res[5] = 'V';
       res[6] = 'A';
       res[7] = 'D';
       res[8] = 'O';
    }
    else{
       res[0] = 'A';
       res[1] = 'P';
       res[2] = 'R';
       res[3] = 'O';
       res[4] = 'V';
       res[5] = 'A';
       res[6] = 'D';
       res[7] = 'O';
    }
    return res;
}
int main (int argc, char** argv) {
    float nota;
    printf("Por favor digite sua nota final:");
    scanf("%f", &nota);
    printf("%s", FuncAluno(nota));
    return 0;
}