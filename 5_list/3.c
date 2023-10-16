#include <stdio.h>

int main() {
  int num, cont_pares = 0, cont_impares = 0, soma_pares = 0;
  float media_impares = 0;
  
  for (int i = 0; i < 10; i++) {
    printf("Informe um número inteiro: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
      cont_pares++;
      soma_pares += num;
    } else {
      cont_impares++;
      media_impares += num;
      }
  }
  
  if (cont_pares > 0) {
    printf("A Quantidade de números pares: %d\n", cont_pares;
    printf("A Soma dos números pares: %d\n", soma_pares);
  } else {
    printf("Nenhum número par foi digitado.\n");
  }
  
  if (cont_impares > 0) {
    media_impares /= cont_impares;
    printf("A Quantidade de números ímpares: %d\n", cont_impares);
    printf("A Média dos números ímpares: %.2f\n", media_impares);
  } else {
    printf("Nenhum número ímpar foi digitado.\n");
    }
  return 0;
}