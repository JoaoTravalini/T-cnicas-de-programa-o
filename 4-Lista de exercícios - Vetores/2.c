#include <stdio.h>

#define MAX_ALUNOS 10

int main() {
    int matriculas[MAX_ALUNOS] = {0};  // Inicializa o vetor com zeros
    int contador = 0;
    int matricula;

    printf("Digite as matriculas dos alunos:\n");

    while (contador < MAX_ALUNOS) {
        printf("Matricula %d: ", contador + 1);
        scanf("%d", &matricula);

        // Verifica se a matrícula já foi inserida
        int matriculaRepetida = 0;
        for (int i = 0; i < contador; i++) {
            if (matriculas[i] == matricula) {
                matriculaRepetida = 1;
                break;
            }
        }

        if (matriculaRepetida) {
            printf("Matricula repetida. Digite novamente.\n");
            continue;  // Reinicia o loop sem incrementar o contador
        }

        matriculas[contador] = matricula;
        contador++;
    }

    printf("\nMatriculas dos alunos:\n");
    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Aluno %d: Matricula %d\n", i + 1, matriculas[i]);
    }

    return 0;
}
