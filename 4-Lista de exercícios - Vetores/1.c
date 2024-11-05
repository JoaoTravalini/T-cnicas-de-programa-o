#include <stdio.h>

int main(){

    const int vetores = 10;
    int valores[vetores];
    int i;

    for(i = 0; i < vetores; i++){
        printf("Insira o vetor %d: ", i+1);
        scanf("%d", &valores[i]);
    }
    for(i = 0; i < vetores; i++){
         printf("Os valor do vetor %d eh: %d\n", i + 1, valores[i]);
    }

    printf("\n");

return 0;
}
