#include <stdio.h>
#include <stdlib.h>

int main() {

    float base, altura, perimetro, area;

    printf("\nDigite a base do retângulo: ");
    scanf("%f", &base);
    printf("\nDigite a altura do retângulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);
    area = base * altura;

    printf("O perímetro do retângulo é: %.2f\n", perimetro);
    printf("A área do retângulo é: %.2f\n", area);

    return 0;
}
