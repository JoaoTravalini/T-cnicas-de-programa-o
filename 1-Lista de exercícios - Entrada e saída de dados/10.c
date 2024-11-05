#include <stdio.h>

int main (){

float pc, ac, pv;

printf("Entre com o preco de custo do produto: ");
scanf("%f", &pc);
printf("Entre com a porcentagem de acressimo: ");
scanf("%f", &ac);

pv = (ac/100+1)*pc;

printf("\n\nO preco de venda e: %.2f\n\n", pv);

return 0;
}
