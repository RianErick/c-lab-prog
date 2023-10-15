#include <stdio.h>

// Função para calcular a soma dos números
int calcularSoma(int numeros[]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += numeros[i];
    }
    return soma;
}

int calcularProduto(int numeros[]) {
    int produto = 1;
    for (int i = 0; i < 5; i++) {
        produto *= numeros[i];
    }
    return produto;
}

float calcularMedia(int soma) {
    return (float)soma / 5;
}

int main() {
    int numeros[5];
    int soma;
    int produto;
    float media;

    printf("Digite cinco números inteiros:\n");

    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    soma = calcularSoma(numeros);
    produto = calcularProduto(numeros);
    media = calcularMedia(soma);

    printf("Soma: %d\n", soma);
    printf("Produto: %d\n", produto);
    printf("Média: %.2f\n", media);

    return 0;
}
