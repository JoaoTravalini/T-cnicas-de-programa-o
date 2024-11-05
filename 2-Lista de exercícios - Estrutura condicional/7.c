#include <stdio.h>

int main(){

    int ano, idade;

    printf("Entre com seu ano de nascimento: ");
    scanf("%d", &ano);

    idade = 2023 - ano;

    if(idade >= 16 && idade < 18){

        printf("\nVoce ja pode votar!\n");

    }else if(idade >= 18){

        printf("\nVoce ja pode votar e dirigir!\n");

    }else{

        printf("\nVoce nao pode votar nem dirigir!\n");

    }
return 0;
}
