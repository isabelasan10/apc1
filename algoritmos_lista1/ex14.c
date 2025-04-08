#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdFrangos;
    float valorFrango = 7.50, gastoTotal;
    printf("Insira a quantidade de frangos: ");
    scanf("%d", &qtdFrangos);
    gastoTotal = qtdFrangos * valorFrango;
    printf("O gasto total foi: %.2f", gastoTotal);
    return 0;
}