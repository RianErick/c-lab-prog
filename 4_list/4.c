#include <stdio.h>
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