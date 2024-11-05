#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int tamanho, i;

    printf("Insira uma palavra: ");
    fgets(palavra, 50, stdin);

    tamanho = strlen(palavra);

    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }

    printf("\n");

    return 0;
}
