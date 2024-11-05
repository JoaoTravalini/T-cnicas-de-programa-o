#include <stdio.h>

int main() {
   int i;
   float num, maior, menor;

   printf("Digite o 1º valor: ");
   scanf("%f", &num);
   maior = num;
   menor = num;

   for (i = 2; i <= 15; i++) {
      printf("Digite o %dº valor: ", i);
      scanf("%f", &num);
      if (num > maior) {
         maior = num;
      } else if (num < menor) {
         menor = num;
      }
   }

   printf("Maior valor: %.2f\n", maior);
   printf("Menor valor: %.2f\n", menor);

   return 0;
}
