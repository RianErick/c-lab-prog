#include <stdio.h>

//10. Lê o raio de um círculo e mostre como saída o perímetro (2*π*Raio) e a área (π*Raio2).

int main() {
 float raio, pi=3.14, area, perimetro;

 printf("\nInforme o valor do raio: ");
 scanf("%f", &raio);

 perimetro = 2 * pi * raio;
 area = pi * (raio * raio);

 printf("Perímetro: %.2f\n", perimetro);
 printf("Área: %.2f\n", area);

 return 0;
}