#include <stdio.h>
#include <string.h>

int main(){

    char mercadoria[100];
    int valor, desconto;

    printf("Entre com o nome da mercadoria: ");
    gets(mercadoria);

    printf("Entre com o valor do produto: ");
    scanf("%d", &valor);

    desconto = valor * 0.9;

    printf("\nO valor a ser pago pela mercadoria %s e: %d\n", mercadoria, desconto);










return 0;
}
