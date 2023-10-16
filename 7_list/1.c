#include <stdio.h>
#include <string.h>

int main(void) {
  char aprovados[10][50] = {
  "Ana Santos", "Joao Souza", "Maria Silveira", "Geovana Correia","Alyne Matos","Rafaela Costa","Ryan Erick", "Eduarda dos Santos","Ariadina","Isadora"
  };
    
  char nome[50];
  int i;
  int encontrado = 0;
    printf("Informe o nome do aluno: ");
    scanf("%s", nome);

  for(i = 0; i < 10; i++) {
    if(strcmp(nome, aprovados[i]) == 0) {
      printf("O aluno %s foi aprovado em %do. lugar\n", nome, i + 1);
      encontrado = 1;
  break;
 }}
  if(!encontrado) {
    printf("Nome informado não consta na lista dos aprovados\n");
  }
return 0;
}