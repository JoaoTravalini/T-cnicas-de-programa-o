#include <stdio.h>

int main(){

int qc, qf;

printf("Entre com a quantidade de cavalos existentes no haras: ");
scanf("%d", &qc);

qf = qc*4;

printf("\n\nA quantidade de ferraduras necessarias para equipar todos os cavalos e: %d\n\n", qf);

return 0;
}
