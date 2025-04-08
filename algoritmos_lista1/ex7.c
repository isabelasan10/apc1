#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdCavalos, ferradurasCavalo = 4, ferradurasTotal;
    printf("Insira a quantidade de cavalos: ");
    scanf("%d", &qtdCavalos);
    ferradurasTotal = ferradurasCavalo * qtdCavalos;
    printf("A quantidade total de ferraduras eh: %d", ferradurasTotal);
    return 0;
}