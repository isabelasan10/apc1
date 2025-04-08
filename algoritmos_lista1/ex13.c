#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdSand, qtdQ = 2, qtdP = 1, qtdC = 1;
    float pesoQ = 50, pesoP = 50, pesoC = 100;
    printf("Insira a quantidade de sanduiches desejados: ");
    scanf("%d", qtdSand);
    pesoQ = (qtdQ * pesoQ) / 1000;
    pesoP = (qtdP * pesoP) / 1000;
    pesoC = (qtdC * pesoC) / 1000;
    printf("O peso do queijo, em quilos, eh: %.2f", pesoQ);
    printf("O peso do presunto, em quilos, eh: %.2f", pesoP);
    printf("O peso da carne, em quilos, eh: %.2f", pesoC);
    return 0;
}