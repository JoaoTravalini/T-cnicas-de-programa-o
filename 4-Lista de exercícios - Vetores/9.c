#include <stdio.h>

int main(){

    char palavra[20];
    int comprimento;

    printf("Entre com uma palavra: ");
    scanf(" %s", &palavra);

    comprimento = strlen(palavra);

    printf("\n\nA palavra %s possui %d caracteres!\n\n", palavra, comprimento);

return 0;
}
