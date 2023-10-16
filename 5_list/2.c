#include <stdio.h>

int main(void) {
  
  int num, soma = 0, cont = 0;
  
  while (1) {
    printf("Informe um número inteiro positivo (digite zero ou negativo para encerrar; ");
    scanf("%d", &num);
    
    if (num <= 0) {
      break;
    }
    soma += num;
    cont++;
    }
    
    if (cont > 0) {
      float media = (float)soma / cont;
      printf("A média dos números positivos é: %.2f\n", media);
    } else {
      printf("Nenhum número positivo foi digitado.\n");
    }
    return 0;
}