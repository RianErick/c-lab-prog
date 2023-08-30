#include <stdio.h>

//6. Lê dois números e mostre os seguintes resultados:
//a. Dividendo:
//b. Divisor:
//c. Quociente:
//d. Resto (para calcular o resto de uma divisão, utilize o operador MOD (em C: %)

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