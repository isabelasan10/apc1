#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoGasolina, valorPago, litrosGasolina;
    printf("Insira o preco da gasolina: ");
    scanf("%f", &precoGasolina);
    printf("Insira o valor pago: ");
    scanf("%f", &valorPago);
    litrosGasolina = precoGasolina * valorPago;
    printf("A quantidade de gasolina, em litros, foi: %.2f", litrosGasolina);
    return 0;
}