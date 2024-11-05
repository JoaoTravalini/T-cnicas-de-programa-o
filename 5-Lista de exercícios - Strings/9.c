#include <stdio.h>
#include <string.h>

int main(){

    char strings[4][50];
    int i, j;
    char temp[50];

    for(i = 0; i < 4; i++){
        printf("Entre com a string %d: ", i+1);
        fgets(strings[i], 50, stdin);
    }

    strings[i][strcspn(strings[i], "\n")] = '\0';

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }

    printf("\nAs strings em ordem alfabetica sao:\n");
    for(i = 0; i < 4; i++){
        printf("%s\n", strings[i]);
    }




return 0;
}
