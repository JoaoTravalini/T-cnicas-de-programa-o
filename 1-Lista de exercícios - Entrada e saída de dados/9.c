#include <stdio.h>

int main(){

float vc, vp;

printf("Entre com o valor da compra: ");
scanf("%f", &vc);

vp = vc/5;

printf("\n\nO valor de cada uma das cinco prestacoes e: %.2fR$\n\n", vp);

return 0;
}
