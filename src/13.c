#include <stdio.h>


int main() {
    int numerador, denominador;

    float numero_decimal;

    printf("\nInforme o numerador: ");

    scanf("%d", &numerador);

    printf("\nInforme o denominador: ");

    scanf("%d", &denominador);

    if (denominador != 0){

        numero_decimal = 1.0 * numerador / denominador;

        printf("O número decimal resultante da fração %d / %d é: %.2f\n", numerador, denominador, numero_decimal);
    }
     else 
        printf("O denominador não pode ser zero!");
    

    return 0;
}