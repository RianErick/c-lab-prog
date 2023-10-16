#include <stdio.h>

int main(void) {
  
  int vet_1[5], vet_2[5], i;
  printf("Informe 5 valores para o Vetor 1:\n");
  
  for(i = 0; i < 5; i++) {
    scanf("%d", &vet_1[i]);
    }
  printf("Informe 5 valores para o Vetor 2:\n");
  for(i = 0; i < 5; i++) {
    scanf("%d", &vet_2[i]);
    }
  printf("Soma dos elementos:\n");
  for(i = 0; i < 5; i++) {
    printf("%d ", vet_1[i] + vet_2[i]);
  }
  printf("\nDiferença dos elementos:\n");
  for(i = 0; i < 5; i++) {
    printf("%d ", vet_1[i] - vet_2[i]);
  } 
  printf("\nProduto dos elementos:\n");
  for(i = 0; i < 5; i++) {
    printf("%d ", vet_1[i] * vet_2[i]);
  }
    
  printf("\nDivisão dos elementos:\n");
  for(i = 0; i < 5; i++) {
    if (vet_2[i] != 0) {
      printf("%.2f ", (float) vet_1[i] / vet_2[i]);
  } else {
      printf("Divisão por zero ");
  }}
return 0;

}