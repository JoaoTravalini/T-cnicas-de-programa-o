#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int comprimento, cont = 0, i;

    printf("Entre com alguma palavra: ");
    scanf("%s", palavra);

    comprimento = strlen(palavra);

    for (i = 0; i < comprimento; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' ||
            palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U') {
            cont++;
        }
    }

    printf("\nA quantidade de vogais na palavra %s e: %d\n\n", palavra, cont);

    return 0;
}
