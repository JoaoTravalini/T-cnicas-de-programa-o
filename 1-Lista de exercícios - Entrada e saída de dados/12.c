#include <stdio.h>

int main(){

int qp, qb;
float vt, cp;

printf("Entre com a quantidade de paes franceses vendidos: ");
scanf("%d", &qp);
printf("Entre com a quantidade de broas vendidas: ");
scanf("%d", &qb);

vt = (qp*0.12)+(qb*1.5);
cp = 0.1*vt;

printf("\n\nO valor total arrecadado hoje e: %.2f\n\n", vt);
printf("E o senhor deve guardar %.2fR$ em sua conta poupanca\n\n", cp);

return 0;
}
