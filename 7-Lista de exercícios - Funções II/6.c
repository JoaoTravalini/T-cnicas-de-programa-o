#include <stdio.h>
#include <ctype.h>

void converterParaMaiusculo(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    converterParaMaiusculo(string);

    printf("String convertida para mai�sculo: %s\n", string);

    return 0;
}
