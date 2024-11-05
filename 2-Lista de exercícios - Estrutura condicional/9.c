#include <stdio.h>

int main(){

    float h1, h2, g1, g2, sf1, sf2, comp1, comp2;

    printf("Quantas horas o professor 1 trabalhou? E quanto ele ganha por hora?");
    scanf("%f %f", &h1, &g1);

    printf("Quantas horas o professor 2 trabalhou? E quanto ele ganha por hora?");
    scanf("%f %f", &h2, &g2);

    sf1 = h1 * g1;
    sf2 = h2 * g2;
    comp1 = sf1 - sf2;
    comp2 = sf2 - sf1;

    if(sf1>sf2){
        printf("\nO professor 1 tem o salario maior por R$%.2f\n", comp1);
    }else{
        printf("\nO professor 2 tem o salario maior por R$%.2f\n", comp2);
    }
return 0;
}
