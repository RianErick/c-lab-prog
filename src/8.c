#include <stdio.h>
#include <stdlib.h>

int main() {
    float saldo, saldonovo;
    
    printf("\nInforme o saldo: ");
    scanf("%f",&saldo);
    
    saldonovo = saldo + (saldo * 0.01); //0.01 corresponde a 1%
    
    printf("O valor do saldo com o reajuste é de: R$%.2f\n", saldonovo);

    return 0;
}