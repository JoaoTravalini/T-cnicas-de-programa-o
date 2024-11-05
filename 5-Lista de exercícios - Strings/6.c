#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int i;

    printf("Entre com uma palavra: ");
    fgets(palavra, 50, stdin);

    for (i = 0; i < 50; i++) {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
            palavra[i]+=32 ;
        }
        printf("%c", palavra[i]);
    }

    printf("\n\n\n\n\n\n");

    return 0;
}
