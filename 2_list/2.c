#include <stdio.h>


int main() {
    int A, B, temp;


    printf("Digite o valor de A: ");
    scanf("%d", &A);


    printf("Digite o valor de B: ");
    scanf("%d", &B);


    temp = A;
    A = B;
    B = temp;


    printf("Agora, o valor de A e: %d\n", A);
    printf("Agora, o valor de B e: %d\n", B);


    return 0;
}
