#include <stdio.h>

int main(){

  int n, cont = 0, max = 0;

    while(cont < 10){

        cont++;

        printf("Entre com um numero: ");
        scanf("%d", &n);

        if(n > max){
            max = n;
        }
  }

    printf("O maior numero e: %d", max);

return 0;
}
