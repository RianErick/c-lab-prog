#include <stdio.h>

int main() {
    float custoFabrica, custoConsumidor;
    const float percentagemDistribuidor = 0.28; 
    const float impostos = 0.45; 

    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);

    custoConsumidor = custoFabrica + (custoFabrica * percentagemDistribuidor) + (custoFabrica * impostos);
    printf("O custo ao consumidor do carro é: R$ %.2f\n", custoConsumidor);

    return 0;
}
