#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdPao, qtdBroa;
    float valorPao = 0.12, valorBroa = 1.50, valorVendas, valorPoup;
    printf("Insira a quantidade de paes: ");
    scanf("%d", qtdPao);
    printf("Insira a quantidade de broas: ");
    scanf("%d", qtdBroa);
    valorVendas = (qtdPao * valorPao) + (qtdBroa * valorBroa);
    valorPoup = valorVendas * 0.10;
    printf("O valor das vendas foi: %.2f", valorVendas);
    printf("O valor guardado na poupanca foi: %.2f", valorPoup);
    return 0;
}