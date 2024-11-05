#include <stdio.h>

float media3(int nota1, int nota2, int nota3) {
    float media = 0;
    media = (float)(nota1 + nota2 + nota3) / 3.0;
    return media;
}

float media2(int nt1, int nt2, int nt3) {
    float media = 0;
    if (nt1 > nt3 && nt2 > nt3) {
        media = (nt1 + nt2) / 2.0;
        return media;
    }
    else if (nt1 > nt2 && nt3 > nt2) {
        media = (nt1 + nt3) / 2.0;
        return media;
    }
    else {
        media = (nt2 + nt3) / 2.0;
        return media;
    }
}

int main() {
    int n1, n2, n3;
    float r3, r2;

    printf("Entre com os valores das notas 1, 2 e 3 separadas por espaço: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    r3 = media3(n1, n2, n3);
    printf("\nA media das tres provas e: %.2f", r3);

    r2 = media2(n1, n2, n3);
    printf("\nA media das duas maiores notas e: %.2f", r2);

    if (n1 > n2 && n1 > n3) {
        printf("\nA nota %d e a maior!", n1);
    }
    else if (n2 > n1 && n2 > n3) {
        printf("\nA nota %d e a maior!", n2);
    }
    else {
        printf("\nA nota %d e a maior!", n3);
    }

    if (n1 < n2 && n1 < n3) {
        printf("\nA nota %d e a menor!\n\n", n1);
    }
    else if (n2 < n1 && n2 < n3) {
        printf("\nA nota %d e a menor!\n\n", n2);
    }
    else {
        printf("\nA nota %d e a menor!\n\n", n3);
    }

    return 0;
}
