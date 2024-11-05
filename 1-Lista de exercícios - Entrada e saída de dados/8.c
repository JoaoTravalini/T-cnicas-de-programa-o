#include <stdio.h>

int main(){

float vd, vr;

printf("Entre com o valor depositado na conta poupanca: ");
scanf("%f", &vd);

vr = 1.007*vd;

printf("\n\nO valor com rendimento apos um mes e: %.2fR$\n\n", vr);

return 0;
}
