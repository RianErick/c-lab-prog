#include <stdio.h>

int main(void) {
  int num_mes;
  
  printf("Informe um número do mês (1 a 12): ");
  scanf("%d", &num_mes);

    if (num_mes == 1) {
      printf("Janeiro\n");
    } else if (num_mes == 2) {
      printf("Fevereiro\n");
    } else if (num_mes == 3) {
      printf("Março\n");
    } else if (num_mes == 4) {
      printf("Abril\n");
    } else if (num_mes == 5) {
      printf("Maio\n");
    } else if (num_mes == 6) {
      printf("Junho\n");
    } else if (num_mes == 7) {
      printf("Julho\n");
    } else if (num_mes == 8) {
      printf("Agosto\n");
    } else if (num_mes == 9) {
      printf("Setembro\n");
    } else if (num_mes == 10) {
      printf("Outubro\n");
    } else if (num_mes == 11) {
      printf("Novembro\n");
    } else if (num_mes == 12) {
      printf("Dezembro\n");
    } else {
      printf("Mês Inválido\n");
    }

    return 0;
}