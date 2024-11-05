#include <stdio.h>

int main(){

float vs, c1, c2, r1, r2, sa;

printf("Entre com o valor do salario: ");
scanf("%f", &vs);
printf("Entre com o valor do primeiro cheque emitido: ");
scanf("%f", &c1);
printf("Entre com o valor do segundo cheque emitido: ");
scanf("%f", &c2);

r1 = c1+(0.0038*c1);
r2 = c2+(0.0038*c2);
sa = vs-r1-r2;

printf("\n\nO saldo atual de sua conta e: %.2fR$\n\n", sa);

return 0;
}
