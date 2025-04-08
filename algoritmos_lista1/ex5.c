#include <stdio.h>
#include <stdlib.h>

int main()
{
    float custoFabrica, custoCons, porcDist, impostos;
    printf("Insira aqui o custo de fabrica: ");
    scanf("%f", &custoFabrica);
    porcDist = custoFabrica * 0.28;
    impostos = custoFabrica * 0.45;
    custoCons = custoFabrica + porcDist + impostos;
    printf("O custo para o consumidor foi: %.2f", custoCons);
    return 0;
}