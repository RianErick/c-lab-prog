#include <stdio.h>

int main(void) {
  
  float salarioHora = 12.0;
  float v_dependente = 40.0;
  float desc_INSS = 0.085;
  float desc_IR = 0.05;
    
  for (int i = 0; i < 10; i++) {
    int codigo, H_trabalhadas, dependentes;
    printf("Informe o código do funcionário: ");
    scanf("%d", &codigo);
    printf("Informe o número de horas trabalhadas: ");
    scanf("%d", &H_trabalhadas);
    printf("Informe o número de dependentes: ");
    scanf("%d", &dependentes);
        
  float s_bruto = (float)H_trabalhadas * salarioHora + (float)dependentes * v_dependente;
  float desconto_T = (s_bruto * desc_INSS) + (s_bruto * desc_IR);
  float s_liquido = s_bruto - desconto_T; 
    printf("Código: %d\n", codigo);
    printf("Desconto INSS: %.2f\n", s_bruto * desc_INSS);
    printf("Desconto IR: %.2f\n", s_bruto * desc_IR);
    printf("Salário Líquido: %.2f\n", s_liquido);
  }
  return 0;
}