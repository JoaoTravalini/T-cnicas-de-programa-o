#include <stdio.h>

int main(){

int idade, dias;

printf("Informe sua idade: ");
scanf("%d", &idade);

dias = idade*365;

printf("\nVoce ja viveu %d dias!\n\n", dias);

return 0;
}
