#include <stdio.h>

int main(){

    float altura, peso;
    char sexo;

    printf("Entre com sua altura (m): ");
    scanf("%f", &altura);

    printf("Entre com seu sexo (m ou f): ");
    scanf(" %c", &sexo);

    if(sexo == 'm' || sexo == 'M'){

        peso = (72.7 * altura) - 58;

        printf("\n\nSeu peso ideal e: %.2fKG\n\n", peso);
    }else if(sexo == 'f' || sexo == 'F') {

        peso = (62.1 * altura) - 44.7;

        printf("\n\nSeu peso ideal e: %.2fKG\n\n", peso);
    }else{

        printf("\n\nEntrada invalida!\n\n");

    }
return 0;
}
