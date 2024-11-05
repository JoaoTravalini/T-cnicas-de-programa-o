#include <stdio.h>
#include <string.h>

int main(){

    char palavra1[50], palavra2[50];

    printf("Entre com a primeira palavra: ");
    fgets(palavra1, 50, stdin);

    printf("Entre com a segunda palavra:");
    fgets(palavra2, 50, stdin);

    if(palavra1[0] < palavra2[0]){
        printf("Em ordem alfabetica :\n%s%s", palavra1, palavra2);
    }else if(palavra2[0] < palavra1[0]){
        printf("Em ordem alfabetica :\n%s%s", palavra2, palavra1);
    }else if(palavra1[0] == palavra2[0]){
            if(palavra1[1] < palavra2[1]){
            printf("Em ordem alfabetica :\n%s%s", palavra1, palavra2);
    }   else if(palavra2[1] < palavra1[1]){
            printf("Em ordem alfabetica :\n%s%s", palavra2, palavra1);
    }
    }
return 0;
}
