#include <stdio.h>


int main() {
    float A, B, C, Result;


    // Solicita os valores de A, B e C ao usuário
    printf("Digite o valor de A: ");
    scanf("%f", &A);


    printf("Digite o valor de B: ");
    scanf("%f", &B);


    printf("Digite o valor de C: ");
    scanf("%f", &C);


    // Calcula a fórmula e armazena o resultado em Result
    Result = (7 * C + 5 * B) / (2 * A * 3);


    // Exibe o resultado
    printf("O resultado da fórmula é: %.2f\n", Result);


    return 0;
}
