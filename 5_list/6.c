#include <stdio.h>

int main(void) {
  int idade, identificador, opiniao;
  int quant_respostas_10 = 0;
  int T_idades = 0, cont_idades = 0;
  int quant_opiniao_5_ou_menos = 0;
  int ident_pessoa_mais_velha = -1;
  int idade_pessoa_mais_velha = -1;
    
  while (1) {
    printf("Informe a idade da pessoa (digite um valor negativo para encerrar): ");
    scanf("%d", &idade);
        
  if (idade < 0) {
    break;
    }
    printf("Informe o identificador da pessoa: ");
    scanf("%d", &identificador);
    printf("Informe a opinião em relação à peça (de 0 a 10): ");
    scanf("%d", &opiniao);
        
  if (opiniao == 10) {
    quant_respostas_10++;
  }
    T_idades += idade;
    cont_idades++;
        
  if (opiniao <= 5) {
    quant_opiniao_5_ou_menos++;
  } 
  if (idade > idade_pessoa_mais_velha) {
    idade_pessoa_mais_velha = idade;
    ident_pessoa_mais_velha = identificador;
  }
  }
    printf("A Quantidade de respostas 10: %d\n", quant_respostas_10);
    
  if (cont_idades > 0) {
  float media_idades = (float)T_idades / cont_idades;
    printf("Média de idade das pessoas que responderam o questionário: %.2f\n", media_idades);
  } else {
    printf("Nenhuma resposta foi registrada.\n");
  }
    
  if (quant_opiniao_5_ou_menos > 0) {
    float percent_opiniao_5_ou_menos = (float)quant_opiniao_5_ou_menos / cont_idades * 100;
    printf("Percentual de pessoas que responderam 5 ou menos para a opinião da peça: %.2f%%\n", percent_opiniao_5_ou_menos);
  } else {
    printf("Nenhuma pessoa respondeu 5 ou menos para a opinião da peça.\n");
    }
    
  if (ident_pessoa_mais_velha != -1) {
    printf("Identificador da pessoa mais velha: %d\n", ident_pessoa_mais_velha);
  } else {
    printf("Nenhum identificador de pessoa foi registrado.\n");
  }
    return 0;
}