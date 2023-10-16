#include <stdio.h>
int main(void) {
  float a, b, c;
  printf("Digite o primeiro lado do triângulo: ");
  scanf("%f", &a);
  printf("Digite o segundo lado do triângulo: ");
  scanf("%f", &b);
  printf("Digite o terceiro lado do triângulo: ");
  scanf("%f", &c);

  if (a + b > c && a + c > b && b + c > a) {

    if (a == b && b == c) {
      printf("Triângulo equilátero\n");
    } else if (a == b || a == c|| b == c) {
      printf("Triângulo isósceles\n");
    } else {
      printf("Triângulo escaleno\n");
    }
  }
  return 0;
}