#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos, horas, minutos, segundosFinal;
    printf("Insira os segundos: ");
    scanf("%d", &segundos);
    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    segundosFinal = segundos % 60;
    printf("Tempos em horas: %d", horas);
    printf("Tempos em minutos: %d", minutos);
    printf("Tempos em segundos: %d", segundosFinal);
    return 0;
}