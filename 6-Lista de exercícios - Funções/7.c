#include <stdio.h>
#include <math.h>

float calcularDistancia(float x1, float y1, float x2, float y2){

    float distancia;

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return distancia;
}

int main(){

    float x1, x2, y1, y2, d;

    printf("Entre com as coordenadas do primeiro ponto separadas por espaco: ");
    scanf("%f %f", &x1, &y1);

    printf("Entre com as coordenadas do segundo ponto separadas por espaco: ");
    scanf("%f %f", &x2, &y2);

    d = calcularDistancia(x1, x2, y1, y2);

    printf("A distancia entre os dois pontos e: %.2f", d);

return 0;
}
