#include <stdio.h>

int main() {
    int id;
    float valor, percent_aumento;
    int prod_caros_5_porcento = 0;
    float media_valor_sem_aumento = 0.0;
    float V_mais_carro = 0.0;

    while (1) {
        printf("Informe o ID do produto (0 para encerrar): ");
        scanf("%d", &id);

        if (id == 0) {
            break;
        }

        printf("Informe o valor do produto: ");
        scanf("%f", &valor);

        printf("Informe o percentual de aumento (0 se não houve aumento): ");
        scanf("%f", &percent_aumento);

        if (percent_aumento > 0) {
            valor += (percent_aumento / 100) * valor;
        }

        if (valor > 100.0) {
            prod_caros_5_porcento++;
        }

        if (percent_aumento == 0) {
            media_valor_sem_aumento += valor;
        }

        if (valor > V_mais_carro) {
            V_mais_carro = valor;
        }
    }

    if (media_valor_sem_aumento > 0.0) {
        media_valor_sem_aumento /= prod_caros_5_porcento;
    }

    printf("Quantidade de produtos mais caros que R$ 100,00 (após aumento) e com aumento superior a 5%%: %d\n", prod_caros_5_porcento);
    printf("Média de valor dos produtos que não sofreram aumento: %.2f\n", media_valor_sem_aumento);
    printf("Valor do produto mais caro (após aumento): %.2f\n", V_mais_carro);

    return 0;
}