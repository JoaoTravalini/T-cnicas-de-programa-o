#include <stdio.h>

int main() {
    char visual[10][10];
    char jogo[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            visual[i][j] = '?';
            jogo[i][j] = ' ';
        }
    }

    jogo[1][1] = '*';
    jogo[1][7] = '*';
    jogo[2][6] = '*';
    jogo[2][7] = '*';
    jogo[4][3] = '*';
    jogo[4][9] = '*';
    jogo[5][3] = '*';
    jogo[7][6] = '*';
    jogo[8][2] = '*';
    jogo[9][8] = '*';

    int jogadas = 0;
    int lin, col;

    while (jogadas < 90) {

        printf("Digite a linha: ");
        scanf("%d", &lin);
        printf("Digite a coluna: ");
        scanf("%d", &col);
        printf("\n");

        if (jogo[lin][col] == '*') {
            int i, j;

            visual[lin][col] = '*';

            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    printf("%c ", visual[i][j]);
            }
            printf("\n");
        }
            printf("\nVoce perdeu!");

            break;

        } else {
            int count = 0;
            for (int i = lin - 1; i <= lin + 1; i++) {
                for (int j = col - 1; j <= col + 1; j++) {
                    if (i >= 0 && i < 10 && j >= 0 && j < 10 && jogo[i][j] == '*') {
                        count++;
                    }
                }
            }

            if (count > 0) {
                visual[lin][col] = count + '0';
            } else {
                visual[lin][col] = ' ';
            }

            jogadas++;
        }

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                printf("%c ", visual[i][j]);
            }
            printf("\n");
        }

        printf("\n");
    }

    printf("\nJogadas = %d\n", jogadas + 1);

    return 0;
}


