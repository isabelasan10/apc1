#include <stdio.h>
#include <stdlib.h>

int main() {
  float preco, valorAd, valorPosAd, imposto, valorImposto, precoCusto, desconto,
      valorDesconto, precoFinal;
  char tipo, refrig;
  printf("Insira o preco: R$ ");
  scanf("%f", &preco);
  printf("Insira o tipo: ");
  scanf("%c", tipo);
  printf("Insira a refrigeracao: ");
  scanf("%c", &refrig);
  if (refrig == "N") {
    if (tipo == "A" && preco < 15) {
      valorAd = 2;
    } else if (tipo == "A" && preco >= 15) {
      valorAd = 5;
    }
    if (tipo == "L" && preco < 10) {
      valorAd = 1.50;
    } else if (tipo == "L" && preco >= 10) {
      valorAd = 2.50;
    }
    if (tipo == "V" && preco < 30) {
      valorAd = 3;
    } else if (tipo == "V" && preco >= 30) {
      valorAd = 2.50;
    }
    valorPosAd = preco + valorAd;
    printf("O valor apos adicao eh: R$ %.2f", valorPosAd);
  }
  if (refrig == "S") {
    if (tipo == "A") {
      valorAd = 8;
    } else {
      valorAd = 0;
    }
    valorPosAd = preco + valorAd;
    printf("O valor apos adicao eh: R$%.2f", valorPosAd);
  }
  if (preco < 25) {
    imposto = 0.05;
  } else {
    imposto = 0.08;
  }
  valorImposto = imposto * preco;
  printf("O valor do imposto eh: R$%.2f", valorImposto);
  precoCusto = preco + valorImposto;
  if (tipo == "A" && refrig == "S") {
    desconto = 0;
  } else {
    desconto = 0.03;
  }
  valorDesconto = preco * desconto;
  printf("O valor do desconto eh: R$%.2f", valorDesconto);
  precoFinal = preco + valorAd + valorDesconto;
  if (preco <= 50) {
    printf("Barato");
  } else if (preco >= 100) {
    printf("Caro");
  } else {
    printf("Normal");
  }
  return 0;
}