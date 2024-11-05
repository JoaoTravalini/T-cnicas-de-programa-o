#include <stdio.h>
#include <string.h>

int main(){

    char nome[50];

    printf("Entre com seu nome: ");
    fgets(nome, 50, stdin);

    if(nome[0] == 'a' || nome[0] == 'A'){
        printf("%s", nome);
    }else{
        printf("Invalido!\n Tente novamente com um nome que comece por A");
        printf("\n\n\nEntre com seu nome: ");
        fgets(nome, 50, stdin);

    if(nome[0] == 'a' || nome[0] == 'A'){
        printf("%s", nome);
    }else{
        printf("Invalido! \nTente novamente com um nome que comece por A\n\n\n");
    }

    }










return 0;
}
