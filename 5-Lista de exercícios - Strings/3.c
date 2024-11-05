#include <stdio.h>
#include <string.h>

int main(){

    char string1[40], string2[40];

    printf("Entre com a primeira palavra: ");
    gets(string1);

    printf("Entre com a segunda palavra: ");
    gets(string2);

    strcat(string1, string2);

    printf("%s", string1);

return 0;
}
