#include <stdio.h>
#include <stdbool.h>

bool isPrimo(int num) {
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

void encontrarPrimosAteMil() {
    printf("Números primos até 1000:\n");

    for (int i = 2; i <= 1000; i++) {
        if (isPrimo(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    encontrarPrimosAteMil();

    return 0;
}
