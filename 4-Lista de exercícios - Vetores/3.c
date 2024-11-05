#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int vetor[MAX_SIZE];
    int numero, indice = 0;

    // Preenchimento do vetor
    printf("Digite os numeros inteiros (999 para parar):\n");
    while (1) {
        scanf("%d", &numero);
        if (numero == 999) {
            break;
        }
        vetor[indice] = numero;
        indice++;
    }

    // Impressão do vetor na ordem inversa
    printf("\nVetor na ordem inversa:\n");
    for (int i = indice - 1; i >= 0; i--) {
        printf("%d \n", vetor[i]);
    }
    printf("\n\n");

    return 0;
}
