#include <stdio.h>

//2. Desenvolva um algoritmo que efetue a leitura de três valores para os lados de um triângulo, considerando lados como: A, B e C. O algoritmo deverá verificar se os lados fornecidos forma realmente um triângulo (cada lado é menor que a soma dos outros dois lados). Se for esta condição verdadeira, deverá ser indicado qual tipo de triângulo foi formado: isósceles (dois lados iguais e um diferente), escaleno (todos os lados diferentes) ou eqüilátero (todos os lados são iguais).

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