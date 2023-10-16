#include <stdio.h>

#define ACRESCIMO_POR_FILHO 0.10  
#define LIMITE_IDADE_FILHOS 14    

int main() {
    int numeroFuncionario, horasTrabalhadas, numeroFilhos;
    float valorPorHora, salario;

    printf("Digite o número do funcionário: ");
    scanf("%d", &numeroFuncionario);

    printf("Digite o número de horas trabalhadas mensais: ");
    scanf("%d", &horasTrabalhadas);

    printf("Digite o valor que recebe por hora: ");
    scanf("%f", &valorPorHora);

    printf("Digite o número de filhos com idade menor de %d anos: ", LIMITE_IDADE_FILHOS);
    scanf("%d", &numeroFilhos);

    if (horasTrabalhadas < 0 || valorPorHora < 0 || numeroFilhos < 0) {
        printf("Valores negativos não são permitidos.\n");
        return 1; // Saída de erro
    }

    salario = horasTrabalhadas * valorPorHora;

    float acrescimoPorFilho = numeroFilhos * ACRESCIMO_POR_FILHO * salario;

    salario += acrescimoPorFilho;

    printf("O salário do funcionário %d é R$ %.2f\n", numeroFuncionario, salario);

    return 0;
}
