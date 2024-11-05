#include <stdio.h>

int main(){

float vr, vd;

printf("Entre com o valor em real: ");
scanf("%f", &vr);

vd = vr*4.93;        // cotacao do dia 13/04/2023

printf("\n\nO valor inserido em dolar e: %.2f\n\n", vd);

return 0;
}
