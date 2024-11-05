#include <stdio.h>

void calcula(int *X, int *Y) {
    int soma = *X + *Y;
    int subtracao = *X - *Y;

    *X = soma;
    *Y = subtracao;
}

int main(){

    int n1, n2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    calcula(&n1, &n2);

    printf("Soma: %d\n", n1);
    printf("Subtracao: %d\n", n2);

return 0;
}
