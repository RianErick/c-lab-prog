#include <stdio.h>


int main() {

    float base, altura, perimetro, area;

    printf("\nDigite a base do retângulo: ");

    scanf("%f", &base);
    
    printf("\nDigite a altura do retângulo: ");

    scanf("%f", &altura);

    perimetro = 2 * (base + altura);

    area = base * altura;

    printf(" perímetro do retângulo : %.2f\n", perimetro);

    printf("área do retângulo : %.2f\n", area);

    return 0;
}
