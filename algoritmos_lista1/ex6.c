#include <stdio.h>
#include <stdlib.h>

int main()
{
    float comprimento, largura, area;
    printf("Insira o comprimento do retangulo: ");
    scanf("%f", &comprimento);
    printf("Insira a largura do retangulo: ");
    scanf("%f", &largura);
    area = comprimento * largura;
    printf("A area do retangulo eh: %.2f", area);
    return 0;
}