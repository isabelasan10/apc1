#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anos, meses, dias, diasAno = 365, diasMes = 30, diasTotal;
    printf("Insira sua idade em anos: ");
    scanf("%d", &anos);
    printf("Insira sua idade em meses: ");
    scanf("%d", &meses);
    printf("Insira sua idade em dias: ");
    scanf("%d", &dias);
    diasTotal = (anos * diasAno) + (meses * diasMes) + dias;
    printf("Sua idade em dias: %d", diasTotal);
    return 0;
}