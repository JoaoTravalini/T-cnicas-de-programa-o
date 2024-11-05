#include <stdio.h>
#include <string.h>

int main(){

    char nome[50];
    int i, tam;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    tam = strlen(nome);

    printf("O nome ao contrario e: ");

    for(i = tam-1; i >= 0; i--){
        printf("%c", nome[i]);
    }

    printf("\n");


return 0;
}
