#include <stdio.h>

#define TAMANHO 10

int main() {
    int matriculas[TAMANHO];  // Vetor para armazenar as matrículas
    int i, j, matricula, presente;

    // Lendo as matrículas
    printf("Digite as 10 matriculas:\n");
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &matriculas[i]);
    }

    // Verificando as matrículas
    for (j = 0; j < 3; j++) {
        printf("Digite a matricula a ser verificada: ");
        scanf("%d", &matricula);

        presente = 0;
        for (i = 0; i < TAMANHO; i++) {
            if (matriculas[i] == matricula) {
                presente = 1;
                break;
            }
        }

        if (presente) {
            printf("Matricula %d esta presente no vetor.\n", matricula);
        } else {
            printf("Matricula %d nao esta presente no vetor.\n", matricula);
        }
    }

    return 0;
}
