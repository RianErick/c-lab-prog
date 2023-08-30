#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    int dividendo = num1;
    int divisor = num2;
    int quociente = num1 / num2;
    int resto = num1 % num2;

    printf("Dividendo: %d\n", dividendo);
    printf("Divisor: %d\n", divisor);
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}