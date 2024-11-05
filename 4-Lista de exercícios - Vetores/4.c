#include <stdio.h>

int main(){

    int matriz[3][3];
    int i, j;

    printf("Entre com os valores da matriz 3x3: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 2; i >= 0; i--){
        for(j = 2; j >= 0; j--){
            if(i == j){
                printf("%d ", matriz[i][j]);
            }
        }
    }


return 0;
}
