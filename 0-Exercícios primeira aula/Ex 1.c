#include <stdio.h>

int main(){

int p1, p2, t, media;

printf("Entre com a nota da P1: ");
scanf("%d", &p1);

printf("Entre com a nota da P2: ");
scanf("%d", &p2);

printf("Entre com a nota do Trabalho: ");
scanf("%d", &t);

media = (p1 + p2 + t) / 3;

printf("\n\n A media final sera: %d", media);

return 0;
}
