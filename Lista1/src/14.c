#include <stdio.h>


int main() {
    
    int hora, min, min_passados;

    printf("\nInforme a hora (0 a 23): ");
    scanf("%d", &hora);
    printf("\nInforme os minutos (0 a 59): ");
    scanf("%d", &min);

    if (hora >= 0 && hora <= 23 && min >= 0 && min <= 59) {
        min_passados = (hora * 60) + min;

        printf("Já se passaram %d minutos desde o início do dia!\n", min_passados);
    } else {
        printf("Informe um horário válido\n");
    }


    return 0;
}