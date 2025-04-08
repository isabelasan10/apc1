#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diasTotal, diasAno = 365, diasMes = 30, anos, meses, diasFinal;
    printf("Sua idade em dias:");
    scanf("%d", &diasTotal);
    anos = diasTotal / diasAno;
    diasTotal = diasTotal % diasAno;
    meses = diasTotal / diasMes;
    diasFinal = diasFinal % diasMes;
    printf("Sua idade em anos: %d", anos);
    printf("Sua idade em meses: %d", meses);
    printf("Sua idade em dias: %d", diasFinal);
    return 0;
}