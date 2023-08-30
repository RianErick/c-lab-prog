#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int hora, minuto;

    printf("\nInforme a hora (formato 24h): ");
    scanf("%d", &hora);

    minuto = hora * 60;

    printf("Já se passaram %d minutos desde o início do dia!", minuto);

    return 0;
}