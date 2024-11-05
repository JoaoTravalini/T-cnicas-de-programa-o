#include <math.h>

void teste(int N, int *B, int *K) {
    int limite = sqrt(N);  // limite superior para B

    *B = 1;
    *K = N;

    for (int i = 2; i <= limite; i++) {
        if (N % i == 0) {
            *B = i;
            *K = N / i;
            break;
        }
    }
}

int main() {
    int N, B, K;

    printf("Digite um valor inteiro N: ");
    scanf("%d", &N);

    teste(N, &B, &K);

    printf("B: %d\n", B);
    printf("K: %d\n", K);

    return 0;
}
