#include <stdio.h>

int main(){

float b, h, a;

printf("Entre com o valor da base do triangulo: ");
scanf("%f", &b);
printf("Entre com o valor da altura do triangulo: ");
scanf("%f", &h);

a = b*h/2;

printf("\n\nA area do triangulo e: %.2f\n\n", a);

return 0;
}
