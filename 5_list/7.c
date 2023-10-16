#include <stdio.h>

int main() {
    int serie, livros, redacao;
    int quant_terceira_serie = 0;
    int M_quant_livros_quarta_serie = -1;
    int porcent_terceira_serie_sem_redacao = 0;
    int T_alunos = 0;
    
    while (1) {
        printf("Informe a série do aluno (1 a 4) ou um número negativo para encerrar: ");
        scanf("%d", &serie);
        
        if (serie < 0) {
            break;
        }
        
        printf("Informe a quantidade de livros lidos por mês: ");
        scanf("%d", &livros);
        
        printf("Gosta de fazer redação? (1 para Sim, 0 para Não): ");
        scanf("%d", &redacao);
        
        if (serie == 3) {
            quant_terceira_serie++;
            if (redacao == 0) {
                porcent_terceira_serie_sem_redacao++;
            }
        }
        
        if (serie == 4 && livros > M_quant_livros_quarta_serie) {
            M_quant_livros_quarta_serie = livros;
        }
        
        T_alunos++;
    }
    
    printf("Quantidade de alunos na terceira série: %d\n", quant_terceira_serie);
    
    if (M_quant_livros_quarta_serie != -1) {
        printf("Maior quantidade de livros lidos por um aluno na quarta série: %d\n", M_quant_livros_quarta_serie);
    } else {
        printf("Nenhum aluno da quarta série foi registrado.\n");
    }
    
    if (quant_terceira_serie > 0) {
        float percent_sem_redacao = (float)porcent_terceira_serie_sem_redacao / quant_terceira_serie * 100;
        printf("Porcentagem de alunos da terceira série que não gostam de fazer redação: %.2f%%\n", percent_sem_redacao);
    } else {
        printf("Nenhum aluno da terceira série foi registrado.\n");
    }
    
    return 0;
}