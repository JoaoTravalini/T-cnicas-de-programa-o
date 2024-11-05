#include <stdio.h>

int main(){

    int i, j;

    for(i = 0; i < 10; i++){
        printf("\nTabuada do %d: \n\n", i);
        for(j = 0; j <=10; j++){
            printf("%d X %d = %d\n", i, j, i*j);
        }
    }

return 0;
}
