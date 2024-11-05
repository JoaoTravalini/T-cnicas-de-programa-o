#include <stdio.h>

int encontrarMaior(int num1, int num2, int num3) {
    int maior = num1;

    if (num2 > maior) {
        maior = num2;
    }

    if (num3 > maior) {
        maior = num3;
    }

    return maior;
}

int main() {
    int num1, num2, num3;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    int maiorNumero = encontrarMaior(num1, num2, num3);

    printf("O maior número é: %d\n", maiorNumero);

    return 0;
}
