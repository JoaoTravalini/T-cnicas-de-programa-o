#include <stdio.h>

int main(){
    char nome[50], sexo;

    printf("Entre com seu nome: ");
    scanf("%s", nome);

    printf("Entre com seu sexo (m ou f): ");
    scanf(" %c", &sexo);

    if(sexo == 'M' || sexo == 'm'){
        printf("\n\nIlmo Sr. %s\n\n", nome);
    }else if(sexo == 'F' || sexo == 'f'){
        printf("\n\nIlma Sra. %s\n\n", nome);
    }else{
        printf("\n\nSexo invalido\n\n");
    }





return 0;
}
