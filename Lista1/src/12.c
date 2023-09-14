#include <stdio.h>


int main() {

    float prestacao, valor, taxa;
    int tempo;

    printf("\nInforme o valor da prestação: R$");

    scanf("%f", &valor);

    printf("\nInforme o valor da taxa: R$");

    scanf("%f", &taxa);

    printf("\nInforme o tempo: ");
    
    scanf("%d", &tempo);

    prestacao = valor + (valor * taxa / 100) * tempo;

    printf("O valor da prestação em atraso é: R$%.2f\n", prestacao);

    return 0;

}