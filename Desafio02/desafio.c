#include <stdio.h>

int main() {
    int quantidades[5];
    float valores[5];


    for (int i = 0; i < 5; i++) {
        printf("\nInforme a quantidade comprada do produto %d: ", i);
        scanf("%d", &quantidades[i]);
    }


    for (int i = 0; i < 5; i++) {
        printf("\nInforme o valor unitário do produto %d: ", i);
        scanf("%f", &valores[i]);
    }

    
    for (int i = 0; i < 5; i++) {
        float total = quantidades[i] * valores[i];
        printf("\nProduto %d - R$ %.2f\n", i, total);
    }

    return 0;
}
