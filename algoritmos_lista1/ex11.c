#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdP, qtdM, qtdG;
    float valorP, valorM, valorG, valorFinal;
    printf("Insira quantas unidades tamanho pequeno: ");
    scanf("%d", qtdP);
    printf("Insira quantas unidades tamanho medio: ");
    scanf("%d", qtdM);
    printf("Insira quantas unidades tamanho grande: ");
    scanf("%d", qtdG);
    valorFinal = (qtdP * valorP) + (qtdM * valorM) + (qtdG * valorG);
    printf("O valor final foi: %.2f", valorFinal);
    return 0;
}