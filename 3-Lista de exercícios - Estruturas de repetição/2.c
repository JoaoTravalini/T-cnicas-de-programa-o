#include <stdio.h>

int main(){

    float n, i = 0;

    printf("Entre com um numero: ");
    scanf("%f", &n);

    printf("Os primeiros %d numeros pares sao: ", n);
    for(i = 1; i < (n/2); i++){
        printf("%.0f ", i*2);
    }

    printf("\nOs primeiros %d numeros impares sao: ", n);
    for(i = 0; i < n/2; i++){
        printf("%.0f ", i*2+1);
    }

return 0;
}
