#include <stdio.h>

int main(){

    float a, b, r;
    char opcao;

    printf("Entre com dois numeros inteiros separados por espaco: ");
    scanf("%f %f", &a, &b);

    printf("Escolha uma das opcoes abaixo: \n A - SOMA \n S - SUBTRACAO \n M - MULTIPLICACAO \n Q - DIVISAO \n");
    scanf(" %c", &opcao);

    switch(opcao){

    case 'A':
        r = a + b;
        printf("\n O resultado da soma e: %.2f", r);
        break;

    case 'S':
        r = a - b;
        printf("\n O resultado da subtracao e: %.2f", r);
        break;

    case 'M':
        r = a * b;
        printf("\n O resultado da multiplicacao e: %.2f", r);
        break;

    case 'Q':
        r = a / b;
        printf("\n O resultado da divisao e: %.2f", r);
        break;

    default:
        printf("\n Opcao invalida!");
        break;
    }
return 0;
}
