#include <stdio.h>
#include <math.h>

int main() {
    double y, z, x;

    printf("Digite o valor de y: ");
    scanf("%lf", &y);

    printf("Digite o valor de z: ");
    scanf("%lf", &z);

    x = sqrt(y * (pow(y, 2) + pow(z, 3)));

    printf("O valor de x é: %.2lf\n", x);

    return 0;
}
