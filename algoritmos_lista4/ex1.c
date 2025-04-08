#include <stdio.h>
#include <stdlib.h>

int main() {
  float salInicial = 5000.00, salAtual, ano, percentualAcum;
  percentualAcum = 0.15;
  salAtual = salInicial;
  for (ano = 2021; ano <= 2025; ano++) {
    percentualAcum *= 2;
    salAtual = salAtual * percentualAcum;
  }
  printf("O salario atual eh: R$ %.2f", salAtual);
  return 0;
}