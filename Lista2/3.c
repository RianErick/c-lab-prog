

#include <stdio.h>


int main() {
    int numeros[5];
    int soma = 0;
    int produto = 1;
    float media;


    printf("Digite cinco números inteiros:\n");


    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);


        soma += numeros[i];


        produto *= numeros[i];
    }
    media = (float)soma / 5;


    printf("Soma: %d\n", soma);
    printf("Produto: %d\n", produto);
    printf("Média: %.2f\n", media);
    return 0;
}