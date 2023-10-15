#include <stdio.h>

//2. A Secretaria de Meio Ambiente, que controla o índice de poluição, mantém 3 grupos de indústrias que são altamente poluentes do meio ambiente. O índice de poluição aceitável varia de 0,05 até 0,29. Se o índice sobe para 0,3 as indústrias do 1o grupo são intimadas a suspenderem suas atividades, se o índice crescer para 0,4 as industrias do 1o e 2o grupo são intimadas a suspenderem suas atividades, se o índice atingir 0,5 todos os grupos devem ser notificados a paralisarem suas atividades. Faça um programa que leia o índice de poluição

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