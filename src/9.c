#include <stdio.h>

//9. Entre com a base e a altura de um retângulo e mostre os resultados:
//a.Perímetro (Perímetro é igual à soma dos 4 lados)
//b.Área (Área é igual à lado vezes lado)

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
