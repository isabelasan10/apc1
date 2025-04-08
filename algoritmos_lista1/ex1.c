#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numInicial, numSucessor;
    printf("Insira um numero: ", numInicial);
    scanf("%d", &numInicial);
    numSucessor = numInicial + 1;
    printf("O numero sucessor eh: %d", numSucessor);
    return 0;
}