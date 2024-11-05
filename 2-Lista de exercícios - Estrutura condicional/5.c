#include <stdio.h>

int main(){

int a, b, c;

printf("Entre com 3 valores: ");
scanf("%d %d %d", &a, &b, &c);

if((a+b)>c){
    printf("\n\na+b e maior que c!!!!\n\n");
}else{
    printf("\n\na+b e menor ou igual a c!!!!\n\n");
}
return 0;
}
