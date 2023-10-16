#include <stdio.h>

int main(void) {
  
  int num_alunos, i;
  printf("Informe o número de alunos: ");
  scanf("%d", &num_alunos);
    
  float notas_G1[num_alunos];
  float notas_G2[num_alunos];
  float medias[num_alunos];
    
  for(i = 0; i < num_alunos; i++) {
    printf("Informe a nota G1 do aluno %d: ", i + 1);
    scanf("%f", &notas_G1[i]);
        
    printf("Informe a nota G2 do aluno %d: ", i + 1);
    scanf("%f", &notas_G2[i]);  
    medias[i] = (notas_G1[i] + notas_G2[i]) / 2;
  }
    for(i = 0; i < num_alunos; i++) {
      printf("Notas do aluno %d - G1: %.2f, G2: %.2f, Media: %.2f\n", i + 1, notas_G1[i], notas_G2[i], medias[i]);
  } 
    return 0;
}