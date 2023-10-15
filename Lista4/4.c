#include <stdio.h>

//4. Um Banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. Faça um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo. Mostre uma mensagem informando o saldo médio e o valor do crédito.
//Saldo médio Percentual
//de 0 a 200,00 nenhum crédito (crédito = 0)
//de 201,00 a 400,00 20% do valor do saldo médio
//de 401,00 a 600,00 30% do valor do saldo médio
//acima de 600,00 40% do valor do saldo médio

int main(void) {
  float saldo_m, credito;
  
  printf("Informe o saldo médio do cliente: ");
  scanf("%f", &saldo_m);
  if (saldo_m >= 0 && saldo_m <= 200) {
    credito = 0;
  } 
  else if (saldo_m >= 201 && saldo_m <= 400) {
    credito = 0.2 * saldo_m;
  } 
  else if (saldo_m >= 401 && saldo_m <= 600) {
    credito = 0.3 * saldo_m;
  }
  else {
    credito = 0.4 * saldo_m;
  }
  
  printf("O Saldo Médio é: R$ %.2f\n", saldo_m);
  printf("O Valor do crédito é: R$ %.2f\n", credito);
    
    return 0;
}