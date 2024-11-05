#include <stdio.h>
#include <math.h>

int conta(int a, int b, int c){
    int delta;
    delta = (b*b) - (4*a*c);
    return delta;
}

int main(){

    int a, b, c, r;

    printf("Entre com os valores de a, b e c separados por espaco: ");
    scanf("%d %d %d", &a, &b, &c);

    r = conta(a, b, c);

    printf("O valor de delta e: %d", r);

return 0;
}
