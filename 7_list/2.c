#include <stdio.h>
#include <string.h>

int main(void) {
  char alunos[5][50] = {
  "Ana Santos", "Joao Souza", "Maria Silveira", "Geovana Correia", "Ariadina", "Isadora"
  };

  float N1[5] = {9.5, 7.0, 4.5, 9.0, 6.5}; 
  float N2[5] = {7.0, 6.5, 8.0, 3.5, 7.5};
  float N3[5] = {9.0, 8.5, 7.5, 6.0, 8.0};
  
  int i;
  float media;
  
  for(i = 0; i < 5; i++) {
    media = (N1[i] + N2[i] + N3[i]) / 3;
    printf("Aluno: %s\n", alunos[i]);
    printf("Média Final: %.2f\n", media);
    if(media >= 6.0) {
      printf("Status: Aprovado\n");
    } else {
      printf("Status: Reprovado\n");
      }
      printf("\n");
    }
    
    return 0;
}