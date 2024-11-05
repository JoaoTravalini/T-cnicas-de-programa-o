#include <stdio.h>

int main(){

float l1, l2, l3;

printf("Entre com os valores dos lados do triangulo: ");
scanf("%f %f %f", &l1, &l2, &l3);

if(l1==l2 && l1==l3 && l2==l3){
    printf("\n\nO triangulo e equilatero!\n\n");
}else if(l1!=l2 && l1!= l3 && l2!=l3){
    printf("\n\nO triangulo e escaleno!\n\n");
}else{
    printf("\n\nO triangulo e isoceles!\n\n");
}
return 0;
}
