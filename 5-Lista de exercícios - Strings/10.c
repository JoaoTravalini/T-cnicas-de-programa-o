#include <stdio.h>
#include <string.h>

int main() {
    char strings[4][50];  // Matriz para armazenar as strings
    int i, j;
    char temp[50];

    // Ler as quatro strings
    for (i = 0; i < 4; i++) {
        printf("Digite a string %d: ", i + 1);
        fgets(strings[i], 50, stdin);

        // Remover o caractere de nova linha ('\n')
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    // Ordenar as strings em ordem de tamanho
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            if (strlen(strings[i]) > strlen(strings[j])) {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }

    // Imprimir as strings em ordem de tamanho
    printf("\nAs strings em ordem de tamanho são:\n");
    for (i = 0; i < 4; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
