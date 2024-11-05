#include <stdio.h>

int calculo1(int num1){

    if(num1 < 0){
        return num1 + (num1 * -2);
    }else if(num1 == 0){
        return 0;
    }else{
        return num1;
    }
    }

int calculo2(int num2){

    if(num2 < 0){
        return num2 + (num2 * -2);
    }else if(num2 == 0){
        return 0;
    }else{
        return num2;
    }
    }

int calculo3(int num3){

    if(num3 < 0){
        return num3 + (num3 * -2);
    }else if(num3 == 0){
        return 0;
    }else{
        return num3;
    }
    }

int calculo4(int num4){

    if(num4 < 0){
        return num4 + (num4 * -2);
    }else if(num4 == 0){
        return 0;
    }else{
        return num4;
    }
    }

int calculo5(int num5){

    if(num5 < 0){
        return num5 + (num5 * -2);
    }else if(num5 == 0){
        return 0;
    }else{
        return num5;
    }
    }

int main(){

    int n1, n2, n3, n4, n5, v1, v2, v3, v4, v5;

    printf("Entre com os numeros 1, 2, 3, 4 e 5 separados por espaco: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    v1 = calculo1(n1);
    v2 = calculo2(n2);
    v3 = calculo3(n3);
    v4 = calculo4(n4);
    v5 = calculo5(n5);

    printf("\n\nValor absoluto de %d e %d", n1, v1);
    printf("\nValor absoluto de %d e %d", n2, v2);
    printf("\nValor absoluto de %d e %d", n3, v3);
    printf("\nValor absoluto de %d e %d", n4, v4);
    printf("\nValor absoluto de %d e %d\n\n", n5, v5);

return 0;
}
