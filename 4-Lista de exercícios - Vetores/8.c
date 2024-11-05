#include <stdio.h>

#define SIZE 3

int main() {
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE], result[SIZE][SIZE];
    int i, j, k;

    printf("Digite os valores da primeira matriz:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Digite os valores da segunda matriz:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Multiplicação das matrizes
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (k = 0; k < SIZE; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultado da multiplicação das matrizes:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
