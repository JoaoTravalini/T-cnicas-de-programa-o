#include <stdio.h>
#include <math.h>

int potencia(int base, int expoente){
    int i, resultado = 1;
    for(i = 0; i < expoente; i++){
        resultado *= base;
    }
    return resultado;
}

int main(){

    int b, e, r;

    printf("Entre com a base e o expoente separados por espaco: ");
    scanf("%d %d", &b, &e);

    r = potencia(b, e);

    printf("%d elevado a %d = %d", b, e, r);

return 0;
}
