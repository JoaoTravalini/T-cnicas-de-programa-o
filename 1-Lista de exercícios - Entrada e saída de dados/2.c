#include <stdio.h>

int main(){

float numero, quadrado, cubo, metade, sucessor;

printf("Entre com um numero positivo e maior que zero: ");
scanf("%f", &numero);

quadrado = numero*numero;
cubo = numero*numero*numero;
metade = numero/2;
sucessor = numero-1;

printf("\n\nO numero digitado ao quadrado e: %.2f\n\n", quadrado);
printf("\n\nO numero digitado ao cubo e: %.2f\n\n", cubo);
printf("\n\nA metade do numero digitado e: %.2f\n\n", metade);
printf("\n\nO sucessor do numero digitado e: %.2f\n\n", sucessor);

return 0;
}
