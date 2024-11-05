#include <stdio.h>

int main() {
    int n, m = 1;
    printf("Digite um numero inteiro (0 para sair): ");
    scanf("%d", &n);

    while(n != 0) {
        m *= n;
        printf("Digite um numero inteiro (0 para sair): ");
        scanf("%d", &n);
    }

    printf("O produto dos numeros digitados e: %d", m);
    return 0;
}
