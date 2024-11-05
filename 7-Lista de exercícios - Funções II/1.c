#include <stdio.h>

void ordenar(float *a, float *b, float *c, float *d) {
    float temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*a > *d) {
        temp = *a;
        *a = *d;
        *d = temp;
    }

    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }

    if (*b > *d) {
        temp = *b;
        *b = *d;
        *d = temp;
    }

    if (*c > *d) {
        temp = *c;
        *c = *d;
        *d = temp;
    }
}

int main() {
    float num1, num2, num3, num4;

    printf("Digite quatro números: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    ordenar(&num1, &num2, &num3, &num4);

    printf("Os números em ordem crescente: %.2f %.2f %.2f %.2f\n", num1, num2, num3, num4);

    return 0;
}
