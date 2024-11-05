#include <stdio.h>

int main(){

float nht, vs, vht, sb, imp, sr;

printf("Entre com o numero de horas trabalhadas: ");
scanf("%f", &nht);
printf("Entre com o valor do salario minimo: ");
scanf("%f", &vs);

vht = vs/2;
sb = nht*vht;
imp = 0.03*sb;
sr = sb - imp;

printf("\n\nO salario a receber e: %.2fR$\n\n", sr);

return 0;
}
