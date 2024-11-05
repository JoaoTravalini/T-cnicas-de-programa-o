#include <stdio.h>

int main(){

int A, B, varA, varB;

printf("Entre com o valor de A: ");
scanf("%d", &A);
printf("Entre com o valor de B: ");
scanf("%d", &B);

varA = B;
varB = A;

printf("\n\nAgora o valor de A e %d, e o valor de B e %d\n\n", varA, varB);

return 0;
}
