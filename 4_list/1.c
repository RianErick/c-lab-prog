#include <stdio.h>

int main(void) {
  int x, y, 
  printf("Digite o primeiro valor: ");
  scanf("%d", &x);
  printf("Digite o segundoz;
 valor: ");
  scanf("%d", &y);
  printf("Digite o terceiro valor: ");
  scanf("%d", &z);

  if (x < y && x < z) {
    printf("O menor número é: %d\n", x);
  } else if (y < x && y < z) {
    printf("O menor número é: %d\n", y);
  } else {
    printf("O menor número é: %d\n", z);
  }
  return 0;
}