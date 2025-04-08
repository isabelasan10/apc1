#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdLatas, qtdGarrafasM, qtdGarrafasG;
    float totalLitros;
    printf("Insira a quantidade de latas (350 ml): ");
    scanf("%d", qtdLatas);
    printf("Insira a quantidade de garrafas 600 ml: ");
    scanf("%d", qtdGarrafasM);
    printf("Insira a quantidade de garrafas 2l: ");
    scanf("%d", qtdGarrafasG);
    totalLitros = (qtdLatas * 0.35) + (qtdGarrafasM * 0.6) + (qtdGarrafasG * 2.0);
    printf("A quantia total, em litros, foi: %.2f", totalLitros);
    return 0;
}