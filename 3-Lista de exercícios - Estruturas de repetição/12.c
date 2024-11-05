#include <stdio.h>

int main(){

    int i, cont = 0, a = 0;

    for(i = 1;i <= 100;i++){
        printf("%d ", i);
    }

    printf("\n\n\n");

    while(cont < 100){
        cont++;
        printf("%d ", cont);
    }

    printf("\n\n\n");

    do{
        a++;
        printf("%d ", a);
    }while(a < 100);

    printf("\n\n\n");

return 0;
}
