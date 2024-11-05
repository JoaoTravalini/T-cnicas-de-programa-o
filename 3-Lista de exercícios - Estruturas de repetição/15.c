#include <stdio.h>

int main() {
    float salario = 2000.0; // Sal�rio inicial em 2005
    int ano;

    for (ano = 2006; ano <= 2023; ano++) { // La�o para calcular o sal�rio de 2006 a 2023
        float aumento = salario * 0.015; // Aumento de 1.5% em 2006

        if (ano >= 2007) {
            aumento *= 2.0; // Aumento dobro do ano anterior a partir de 2007
        }

        salario += aumento; // Atualiza��o do sal�rio com o aumento
    }

    printf("O salario atual do funcionario e: R$ %.2f\n", salario);

    return 0;
}
