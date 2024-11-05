#include <stdio.h>
#include <math.h>

int main(){

float a, b, c, delta;
float x1,x2;

printf("Entre com os coeficientes da equacao: ");
scanf("%f %f %f", &a, &b, &c);

delta = b*b-4*a*c;

if(delta < 0){
    printf("Solucao impossivel");
}else if(delta == 0){
    x1 = (-b/(2*a));
    printf("\n\nA solucao da equacao e %.2f\n\n", x1);
}else{
    x1 = ((-b + sqrt(delta))/(2*a));
    x2 = ((-b - sqrt(delta))/(2*a));
    printf("\n\nAs solucoes da equacao sao %.2f e %.2f\n\n", x1, x2);
}

return 0;
}
