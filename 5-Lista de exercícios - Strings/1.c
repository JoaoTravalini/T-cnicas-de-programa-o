#include <stdio.h>
#include <string.h>

int main(){

    char nome[50];

    printf("Insira seu nome: ");
    fgets(nome, 50, stdin);

    printf("\n\n%c", nome[0]);
    printf("%c", nome[1]);
    printf("%c", nome[2]);
    printf("%c\n\n", nome[3]);

return 0;
}
