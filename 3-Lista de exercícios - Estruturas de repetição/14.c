#include <stdio.h>

int main() {
    int opcao;
    float velocidade;

    do {
            system("cls");
        printf("Selecione uma opcao:\n");
        printf("1 - Converter km/h para m/s\n");
        printf("2 - Converter m/s para km/h\n");
        printf("0 - Sair do programa\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a velocidade em km/h: ");
                scanf("%f", &velocidade);
                printf("%.2f km/h equivale a %.2f m/s\n\n", velocidade, velocidade / 3.6);
                break;

            case 2:
                printf("Digite a velocidade em m/s: ");
                scanf("%f", &velocidade);
                printf("%.2f m/s equivale a %.2f km/h\n\n", velocidade, velocidade * 3.6);
                break;

            case 0:
                printf("Encerrando o programa...\n\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
