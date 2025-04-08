#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diasTrabalhados;
    float valorDia = 15.00;
    float valorRecebido;
    printf("Entre com a quantidade de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);
    printf("Total de dias trabalhados: %d", diasTrabalhados);
    valorRecebido = diasTrabalhados * valorDia;
    printf("\n Valor recebido: %.2f", valorRecebido);
    return 0;
}