#include <stdbool.h>

bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

void primo(int M, int *p1, int *p2) {
    *p1 = -1;
    *p2 = -1;

    for (int i = M - 1; i >= 2; i--) {
        if (ehPrimo(i)) {
            *p1 = i;
            break;
        }
    }

    for (int i = M + 1;; i++) {
        if (ehPrimo(i)) {
            *p2 = i;
            break;
        }
    }
}

int main() {
    int M, p1, p2;

    printf("Digite um valor inteiro M: ");
    scanf("%d", &M);

    primo(M, &p1, &p2);

    if (p1 == -1) {
        printf("Não há número primo menor que M.\n");
    } else {
        printf("Maior número primo menor que M: %d\n", p1);
    }

    if (p2 == -1) {
        printf("Não há número primo maior que M.\n");
    } else {
        printf("Menor número primo maior que M: %d\n", p2);
    }

    return 0;
}
