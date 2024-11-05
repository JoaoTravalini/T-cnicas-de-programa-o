#include <stdio.h>
#include <string.h>

float verificacao(int num){
    if(num%2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    int n, r;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &n);

    r = verificacao(n);

    if(r == 1){
        printf("\n\nO numero e par!!\n\n");
    }else{
        printf("\n\nO numero e impar!!\n\n");
    }

return 0;
}
