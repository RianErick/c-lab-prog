#include <stdio.h>

int main(void) {
  float salarios[5];
  int i;
  
  for(i = 0; i < 5; i++) {
    printf("Informe o salário da pessoa %d: ", i + 1);
    scanf("%f", &salarios[i]);

    if(salarios[i] < 1000) {
      salarios[i] *= 1.1;
    }
  }
    printf("Salários atualizados:\n");
    for(i = 0; i < 5; i++) {
        printf("%.2f\n", salarios[i]);
  }

    return 0;
}