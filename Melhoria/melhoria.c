#include <stdio.h>
#include <stdlib.h>

int main() {
    int codProd, codCli, qtdade;
    float precoUnit, valorTotal;

    printf("\n1. Digite o cod. do cliente ou Digite zero para sair: ");
    scanf("%d", &codCli);

    while (codCli != 0) {
        valorTotal = 0;
        printf("\n\t2. Digite o codigo do produto. Digite -1 para encerrar a execucao: ");
        scanf("%d", &codProd);

        while (codProd != -1) {
            printf("\n\t\t3. Digite a qtdade comprada pelo cliente %d do produto %d: ", codCli, codProd);
            scanf("%d", &qtdade);
            printf("\n\t\t4. Digite o valor unitario do produto %d: ", codProd);
            scanf("%f", &precoUnit);

            float valorProduto = qtdade * precoUnit;
            valorTotal += valorProduto;

            printf("\n=====================================================");
            printf("\nCódigo do Produto: %d", codProd);
            printf("\nQuantidade: %d", qtdade);
            printf("\nValor Unitário: R$ %.2f", precoUnit);
            printf("\nValor Total: R$ %.2f", valorProduto);
            printf("\n=====================================================");

            printf("\n\n\t2. Digite o codigo do produto. Digite -1 para encerrar a execucao: ");
            scanf("%d", &codProd);
        }

        printf("\n=====================================================");
        printf("\nO cliente %d deve pagar R$ %.2f", codCli, valorTotal);
        printf("\n=====================================================");

        printf("\n\n1. Digite o codigo do cliente. Digite zero para encerrar a execucao: ");
        scanf("%d", &codCli);
    }

    return 0;
}
