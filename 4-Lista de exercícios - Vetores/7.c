#include <stdio.h>

#define VETOR 10

int main(){

    int i, valor[VETOR], soma = 0;

    for(i = 0; i < VETOR; i++){
        printf("Entre com o valor do vetor %d: ", i + 1);
        scanf("%d", &valor[i]);

        if(valor[i]%2 != 0){
            soma += valor[i];
        }
    }

    printf("A soma de todos os numeros impares sao: %d", soma);












return 0;
}
