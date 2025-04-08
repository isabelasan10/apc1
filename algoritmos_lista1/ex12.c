#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salInicial, salAumento, salFinal;
    printf("Insira o salario inicial: ");
    scanf("%f", &salInicial);
    salAumento = salInicial + (salInicial * 0.15);
    salFinal = salAumento + (salAumento * 0.08);
    printf("O salario inicial era: %.2f", salInicial);
    printf("O salario aumentado era: %.2f", salAumento);
    printf("O salario final eh: %.2f", salFinal);
    return 0;
}