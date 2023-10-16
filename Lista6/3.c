#include <stdio.h>

int main(void) {
  float valores[10];
  int i;
  float soma = 0;
  
  for(i = 0; i < 10; i++) {
    printf("\nInforme o valor %d: ", i + 1);
    scanf("%f", &valores[i]);
    soma += valores[i];
    }

  float media = soma / 10;
    printf("\nMedia aritmética: %.2f", media);
    return 0;
}