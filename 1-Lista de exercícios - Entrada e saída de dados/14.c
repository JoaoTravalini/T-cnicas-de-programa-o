#include <stdio.h>

int main(){

float pfabrica, pl, pi, ld, vi, pfinal;

printf("Entre com o preco de fabrica do veiculo: ");
scanf("%f", &pfabrica);
printf("Entre com o percentual de lucro do distribuidor: ");
scanf("%f", &pl);
printf("Entre com o percentual de impostos: ");
scanf("%f", &pi);

ld = (pl/100)*pfabrica;
vi = (pi/100)*pfabrica;
pfinal = pfabrica + ld + vi;

printf("\n\nO valor correspondente ao lucro do distribuidor e: %.2fR$\n\n", ld);
printf("O valor correspondente aos impostos e: %.2fR$\n\n", vi);
printf("O preco final do veiculo e: %.2fR$\n\n", pfinal);

return 0;
}
