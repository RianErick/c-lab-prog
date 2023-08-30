#include <stdio.h>

int main() {
    float num1, num2, num3, num4;
    float peso1 = 1, peso2 = 2, peso3 = 3, peso4 = 4;
    float media_ponderada;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    printf("Digite o quarto número: ");
    scanf("%f", &num4);

    media_ponderada = (num1 * peso1 + num2 * peso2 + num3 * peso3 + num4 * peso4) / (peso1 + peso2 + peso3 + peso4);

    printf("A média ponderada é: %.2f\n", media_ponderada);

    return 0;
}

