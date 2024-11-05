#include <stdio.h>

int main(){

    int n = 3;

    printf("Entre com um numero de 1 a 4: ");
        scanf("%d", &n);

    if(n >= 1 && n <=4){
        printf("\n\n%d\n\n", n);
    }else if(n < 1 || n > 4) {
        while(n < 1 || n > 4){
            printf("Entrada invalida!\n\n");

            printf("Entre com outro numero entre 1 e 4: ");
            scanf("%d", &n);
    }
    }

    printf("\nO numero digitado e: %d\n\n", n);

return 0;
}
