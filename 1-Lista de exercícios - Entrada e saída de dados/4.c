#include <stdio.h>

int main(){

float sf, tv, cm, sl;

printf("Entre com seu salario fixo: ");
scanf("%f", &sf);
printf("Entre com o total de vendas em dinheiro: ");
scanf("%f", &tv);

cm = 0.15*tv;
sl = sf+cm;

printf("\n\nSeu salario liquido e: %.2f\n\n", sl);

return 0;
}
