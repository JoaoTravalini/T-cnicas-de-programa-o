#include <stdio.h>

int main(){

float r, area;

printf("Entre com o valor do raio da circunferencia: ");
scanf("%f", &r);

area = 3.14159265*r*r;

printf("\n\nA area da circunferencia e: %.2f", area);


return 0;
}
