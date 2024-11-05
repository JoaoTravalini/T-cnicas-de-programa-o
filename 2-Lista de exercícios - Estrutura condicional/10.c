#include <stdio.h>

int main(){

    int codigo;

    printf("Entre com o codigo do seu produto: ");
    scanf("%d", &codigo);

    switch(codigo){

    case 1:
        printf("\nAlimento nao-pereceivel\n");
        break;
    case 2:
        printf("\nAlimento perecivel\n");
        break;
    case 3:
        printf("\nAlimento perecivel\n");
        break;
    case 4:
        printf("\nAlimento perecivel\n");
        break;
    case 5:
        printf("\nVestuario\n");
        break;
    case 6:
        printf("\nVestuario\n");
        break;
    case 8:
        printf("\nHigiene Pessoal\n");
        break;
    case 9:
        printf("\nHigiene Pessoal\n");
        break;
    case 10:
        printf("\nHigiene Pessoal\n");
        break;
    case 11:
        printf("\nHigiene Pessoal\n");
        break;
    case 12:
        printf("\nHigiene Pessoal\n");
        break;
    case 13:
        printf("\nHigiene Pessoal\n");
        break;
    case 14:
        printf("\nHigiene Pessoal\n");
        break;
    case 15:
        printf("\nHigiene Pessoal\n");
        break;
    default:
        printf("\nInvalido\n");
        break;
    }
return 0;
}
