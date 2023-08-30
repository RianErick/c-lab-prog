#include <stdio.h>

//11.Calcule e mostre a área de um triângulo (área é igual a (base x altura) dividido por 2)

int main() {
    
    float area,base,altura;
    
    printf("\n Informe a base do triângulo: ");
    scanf("%f",&base);
    printf("\n Informe a altura do triângulo: ");
    scanf("%f",&altura);
    
    area=(base*altura)/2;
    
    printf("\n Area do triângulo=%.1f\n",area);
    
    return 0;
 }