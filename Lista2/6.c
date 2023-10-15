#include <stdio.h>

int main() {
    int idadeEmDias;
    int anos, meses, dias;

    // Solicita a idade em dias ao usuário
    printf("Digite a idade em dias: ");
    scanf("%d", &idadeEmDias);

    // Calcula a idade em anos, meses e dias
    anos = idadeEmDias / 365;
    idadeEmDias %= 365;
    meses = idadeEmDias / 30;
    dias = idadeEmDias % 30;

    // Exibe a idade em anos, meses e dias
    printf("A idade em anos, meses e dias é: %d anos, %d meses e %d dias\n", anos, meses, dias);

    return 0;
}
