#include <stdio.h>
int main(void) {
  
  float indice_poluicao;
  
  printf("Digite o índice de poluição: ");
  scanf("%f", &indice_poluicao);
  
  if (indice_poluicao >= 0.3 && indice_poluicao < 0.4) {
    printf("Indústrias do 1º grupo devem suspender suas atividades.\n");
  } 
  else if (indice_poluicao >= 0.4 && indice_poluicao < 0.5) {
    printf("Indústrias do 1º e 2º grupos devem suspender suas atividades.\n");
  }
  else if (indice_poluicao >= 0.5) {
    printf("Todos os grupos devem paralisar suas atividades.\n");
  }
  else {
    printf("Índice de poluição aceitável.\n");
  }
  return 0;
}