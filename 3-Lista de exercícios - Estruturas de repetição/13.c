#include <stdio.h>
#include <math.h>

int main(){

    int v;
    float q, c, r;

    while(v > 0){
        printf("Entre com um valor: ");
        scanf("%d", &v);

        q = v*v;
        c = v*v*v;
        r = sqrt(v);

        printf("A numero ao quadrado, cubo e a raiz respectivamente sao: %.2f, %.2f, %.2f\n\n", q, c, r);
    }
return 0;
}
