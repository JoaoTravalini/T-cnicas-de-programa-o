#include <stdio.h>

int main(){

int ts, h, m, r;

printf("Entre com o tempo decorrido em segundos: ");
scanf("%d", &ts);

h = ts / 3600;
r = ts % 3600;
m = r / 60;
ts = r % 60;

printf("\n\nTempo correspondente: %d horas, %d minutos e %d segundos\n\n", h, m, ts);

return 0;
}
