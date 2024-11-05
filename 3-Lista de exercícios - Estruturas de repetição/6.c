#include <stdio.h>

int main(){

    int idade, menos = 0, mais = 0;

    do{
        printf("Entre com a idade da pessoa (99 para terminar o programa): ");
        scanf("%d", &idade);

        if(idade < 21){
            menos++;
        }else if(idade > 50){
            mais++;
        }

    }while(idade != 99);

    printf("Total com menos de 21: %d \n", menos);
    printf("Total com mais de 50: %d \n", mais - 1);

return 0;
}
