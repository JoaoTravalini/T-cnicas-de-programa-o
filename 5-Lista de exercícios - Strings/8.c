#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[100];
    int i, j;
    int isPalindrome = 1;

    printf("Entre com uma string: ");
    fgets(string, 100, stdin);

    // Remover o caractere de nova linha ('\n')
    string[strcspn(string, "\n")] = '\0';

    // Remover espaços em branco e converter para minúsculas
    char cleanString[100];
    int cleanIndex = 0;
    for (i = 0; i < strlen(string); i++) {
        if (!isspace(string[i])) {
            cleanString[cleanIndex] = tolower(string[i]);
            cleanIndex++;
        }
    }
    cleanString[cleanIndex] = '\0';

    int length = strlen(cleanString);
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (cleanString[i] != cleanString[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("A frase e um palindromo!\n");
    } else {
        printf("A frase nao e um palindromo!\n");
    }

    return 0;
}
