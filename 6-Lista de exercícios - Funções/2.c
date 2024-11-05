#include <stdio.h>

int verificacao(int num){
    if(num > 0){
        return 1;
    }else if(num < 0){
        return -1;
    }else{
        return 0;
    }
}

int main(){

    int n, r;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    r = verificacao(n);

    if(r == 1){
        printf("\n\nO valor e positivo!\n\n");
    }else if(r == -1){
        printf("\n\nO valor e negativo!\n\n");
    }else{
        printf("\n\nO valor e 0!\n\n");
    }

return 0;
}
