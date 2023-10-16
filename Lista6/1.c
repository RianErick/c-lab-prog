#include <stdio.h>

int main(void) {
  
  float salarios[10];
  int i;
  float maior_salario = 0;
  
  for(i = 0; i < 10; i++) {
    printf("Salário %d: ", i + 1);
    scanf("%f", &salarios[i]);

    if(salarios[i] > maior_salario) {
      maior_salario = salarios[i];
    }
  }

    printf("\nO maior salário é: %.2f", maior_salario);

    return 0;
}