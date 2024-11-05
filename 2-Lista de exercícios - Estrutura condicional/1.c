#include <stdio.h>

int main(){

int x;

printf("Entre com um valor entre 1 e 9: ");
scanf("%d", &x);

if(x<9 && x>1){
    printf("\n\nO valor esta na faixa permitida\n\n");
}else{
    printf("\n\nO valor esta fora da faixa permitida\n\n");
}
return 0;
}
