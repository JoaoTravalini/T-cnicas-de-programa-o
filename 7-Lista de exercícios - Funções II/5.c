#include <stdio.h>

void calcula(float r, float *p, float *a){
    *p = 2*3.14159265*r;
    *a = 3.14159265*r*r;
}

int main(){

    float r, per, are;

    printf("Entre com o valor do raio: ");
    scanf("%f", &r);

    calcula(r, &per, &are);

    printf("\nO perimetro e: %.2f", per);
    printf("\nA area e: %.2f", are);

return 0;
}
