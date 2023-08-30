#include <stdio.h>

//8.Lê o saldo de uma aplicação e imprima o novo saldo, considerado o reajuste de 1%.

int main() {
    float saldo, saldonovo;
    
    printf("\nInforme o saldo: ");
    scanf("%f",&saldo);
    
    saldonovo = saldo + (saldo * 0.01); //0.01 corresponde a 1%
    
    printf("O valor do saldo com o reajuste é de: R$%.2f\n", saldonovo);

    return 0;
}