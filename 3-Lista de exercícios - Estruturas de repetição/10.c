#include <stdio.h>

int main(){

int qa, i;
float na, media, soma;

    printf("Entre com a quantidade de alunos na sala: \n");
    scanf("%d", &qa);

    for(i = 0; i < qa; i++){
        printf("Entre com a nota do aluno: ");
        scanf("%f", &na);

        soma += na;
        media = soma/qa;
    }

    printf("\nA media da nota de todos os alunos e: %.1f\n\n", media);

return 0;
}
