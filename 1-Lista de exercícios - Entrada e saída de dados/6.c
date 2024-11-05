#include <stdio.h>

int main(){

float tc, tf;

printf("Entre com a temperatura em graus Celsius: ");
scanf("%f", &tc);

tf = (9*tc+160)/5;

printf("\n\nA temperatura convertida em Fahrenheit e: %.2f\n\n", tf);

return 0;
}
