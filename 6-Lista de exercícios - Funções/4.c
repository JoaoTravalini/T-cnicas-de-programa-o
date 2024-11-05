#include <stdio.h>

int comparacao(int num1, int num2){
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}

int main(){

    int n1, n2, r;

    printf("Entre com dois numeros inteiros separados por espaco: ");
    scanf("%d %d", &n1, &n2);

    r = comparacao(n1, n2);

    printf("%d e o maior numero", r);

return 0;
}
