#include <stdio.h>

int main(){

float sbase, srecebe, gr, imp;

printf("Informe seu salario-base: ");
scanf("%f", &sbase);

gr = 0.05*sbase;
imp = 0.07*sbase;
srecebe = sbase-imp+gr;

printf("\n\nSeu salario a receber e: %.2f\n\n", srecebe);

return 0;
}
