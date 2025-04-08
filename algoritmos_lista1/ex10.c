#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorQuilo = 12.00, peso, valorPrato;
    printf("Insira o peso do prato: ");
    scanf("%f", &peso);
    valorPrato = valorQuilo * peso;
    printf("O valor do prato foi: %.2f", valorPrato);
    return 0;
}