#include <stdio.h>

int main(void) {
  int sexo, idade, livros, T_livros = 0;
  int M_leram_5_ou_mais = 0, H_que_leram_menos_que_5 = 0;
  int T_entrevistados = 0, T_mulheres = 0, T_homens = 0;
  float idade_homens_leu_menos_que_5 = 0.0, percent_nao_leu = 0.0;
    
  while (1) {
    printf("Informe o sexo (0 para homem, 1 para mulher) ou um número negativo para encerrar: ");
    scanf("%d", &sexo);
        
  if (sexo < 0) {
    break;
  }
  
  printf("Informe a idade: ");
  scanf("%d", &idade); 
  printf("Informe a quantidade de livros lidos em 2006: ");
  scanf("%d", &livros);
  
  if (idade < 10) {
    T_livros += livros;
  }
  
  if (sexo == 1) {
    T_mulheres++;
    if (livros >= 5) {
      M_leram_5_ou_mais++;
    }
  } else {
      T_homens++;
    if (livros < 5) {
      H_que_leram_menos_que_5++;
      idade_homens_leu_menos_que_5 += idade;
  }}   
  
  T_entrevistados++;
 }
 
 if (T_mulheres > 0) {
  printf("A Quantidade de mulheres que leram 5 livros ou mais: %d\n", M_leram_5_ou_mais);
 } else {
  printf("Nenhuma mulher foi entrevistada.\n");
   }
   
   if (T_homens > 0) {
    if (H_que_leram_menos_que_5 > 0) {
      idade_homens_leu_menos_que_5 /= H_que_leram_menos_que_5;
      printf("A Média de idade dos homens que leram menos de 5 livros: %.2f\n",idade_homens_leu_menos_que_5);
    } else {
      printf("Nenhum homem leu menos de 5 livros.\n");
      }
    } else {
      printf("Nenhum homem foi entrevistado.\n");
    }
    percent_nao_leu = (float)(T_entrevistados - T_livros) / T_entrevistados * 100;
    printf("Percentual de pessoas que não leram livros: %.2f", percent_nao_leu);
  return 0;
}