#include <stdio.h>

int main(){

    float preco1, precof;
    char modo;

    printf("Entre com o preco do produto: ");
    scanf("%f", &preco1);

    printf("Escolha o metodo de pagamento abaixo (a,b,c ou d) \n a) A vista em dinheiro ou cheque, recebe 10% de desconto \n b) A vista no cartão de credito, recebe 15% de desconto \n c) Em duas vezes, preço normal de etiqueta sem juros \n d) Em duas vezes, preço normal de etiqueta mais juros de 10%");
    scanf(" %c", &modo);

    if(modo == 'a' || modo == 'A'){

        precof = preco1 * 0.9;

        printf("\n\n O preco final e: %.2fR$ \n\n", precof);

    }else if(modo == 'b' || modo == 'B'){

        precof = preco1 * 0.85;

        printf("\n\n O preco final e: %.2fR$ \n\n", precof);
    }else if(modo == 'c' || modo == 'C'){

        printf("\n\n O preco final e: %.2fR$ \n\n", preco1);

    }else if(modo == 'd' || modo == 'D'){

        precof = preco1 * 1.1;

        printf("\n\n O preco final e: %.2fR$ \n\n", precof);

    }else{

        printf("\n\n Modo invalido! \n\n");

    }
return 0;
}
