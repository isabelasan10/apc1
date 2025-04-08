#include <stdio.h>
#include <stdlib.h>

int main() {
  int codigoProduto, codigoPais;
  float pesoQuilo, pesoGrama, valorGrama, valorProduto, imposto, valorImposto,
      valorTotal;
  printf("Insira o codigo do pais de origem: ");
  scanf("%d", &codigoPais);

  if (codigoPais == 1) {
    imposto = 0;
  } else if (codigoPais == 2) {
    imposto = 0.15;
  } else {
    imposto = 0.25;
  }

  printf("Insira o codigo do produto comprado: ");
  scanf("%d", &codigoProduto);

  if (codigoProduto > 1 && codigoProduto < 5) {
    valorGrama = 10;
  } else if (codigoProduto > 5 && codigoProduto < 8) {
    valorGrama = 25;
  } else {
    valorGrama = 35;
  }

  printf("Insira o peso do produto em quilos: ");
  scanf("%f", &pesoQuilo);
  pesoGrama = pesoQuilo * 1000;
  valorProduto = pesoGrama * valorGrama;
  valorImposto = valorProduto * imposto;
  valorTotal = valorProduto + valorImposto;
  printf("O peso do produto convertido em gramas foi: %.2f g\n", pesoGrama);
  printf("O valor do produto comprado foi: R$%.2f\n", valorProduto);
  printf("O valor do imposto foi: R$%.2f\n", valorImposto);
  printf("O valor total do produto, com impostos, foi: R$%.2f", valorTotal);
  return 0;
}