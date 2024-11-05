#include <stdio.h>

int main(){

    int num, soma_par = 0, soma_impar = 0;

    while(1){
        printf("Entre com um numero inteiro positivo: ");
        scanf("%d", &num);

        if(num > 1000){
            break;
        }

        if(num % 2 == 0){
            soma_par += num;
        } else {
            soma_impar += num;
        }
    }

    printf("\n A soma dos numeros pares e: %d \n", soma_par);
    printf("\n A soma dos numeros impares e: %d \n", soma_impar);

return 0;
}
