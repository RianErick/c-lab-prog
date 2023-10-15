#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int valor;
    int soma = 0;
    int quantidade = 0;
    int maior;
    int menor;
    bool primeiro = true;
    char entrada[10];

    printf("Digite valores inteiros positivos (digite 'S' para sair):\n");

    while (true) {
        scanf("%s", entrada);

        if (entrada[0] == 'S' || entrada[0] == 's') {
            break;
        }

        valor = atoi(entrada);

        if (valor <= 0) {
            printf("Por favor, digite um número inteiro positivo ou 'S' para sair.\n");
            continue;
        }

        soma += valor;
        quantidade++;

        if (primeiro) {
            maior = valor;
            menor = valor;
            primeiro = false;
        } else {
            if (valor > maior) {
                maior = valor;
            }
            if (valor < menor) {
                menor = valor;
            }
        }
    }

    if (quantidade > 0) {
        double media = (double)soma / quantidade;
        printf("Média dos números positivos digitados: %.2lf\n", media);
        printf("Quantidade de valores digitados: %d\n", quantidade);
        printf("Maior valor digitado: %d\n", maior);
        printf("Menor valor digitado: %d\n", menor);
    } else {
        printf("Nenhum valor válido foi digitado.\n");
    }

    return 0;
}
