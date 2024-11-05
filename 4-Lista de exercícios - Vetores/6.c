#include <stdio.h>

int main (){

    int quantidade_alunos, nota1[quantidade_alunos], nota2[quantidade_alunos], media[quantidade_alunos];
    int i;

    printf("Entre com a quantidade de alunos: ");
    scanf("%d", &quantidade_alunos);

    system("cls");

    for(i = 0; i < quantidade_alunos; i++){
        printf("Entre com a nota 1 do aluno %d: ", i + 1);
        scanf("%d", &nota1[i]);

        if(nota1[i] == -1){
            break;
        }

        printf("Entre com a nota 2 do aluno %d: ", i + 1);
        scanf("%d", &nota2[i]);

        media[i] = (nota1[i] + nota2[i]) / 2;

        if(media[i] >= 6){
            printf("O aluno %d esta aprovado!\n\n", i+1);
        }else if(media[i] < 6){
            printf("O aluno %d esta reprovado!\n\n", i+1);
        }
    }

return 0;
}
