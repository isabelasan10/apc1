#include <stdio.h>
#include <stdlib.h>

int main() {
  int horas;
  float salMinimo, valorCoef, coef, salBruto, imposto, valorImposto, grat,
      auxAlim, salLiq, class;
  char turno, categoria;
  printf("Insira o valor do salario minimo: R$ ");
  scanf("%f", &salMinimo);
  printf("Insira o turno de trabalho: ");
  scanf("%c", &turno);
  printf("Insira a categoria de trabalho: ");
  scanf("%d", &categoria);
  printf("Insira as horas trabalhadas no mes: ");
  scanf("%f", &horas);
  if (turno == "M") {
    valorCoef = 0.10;
  } else if (turno == "V") {
    valorCoef = 0.15;
  } else {
    valorCoef = 0.12;
  }
  coef = valorCoef * salMinimo;
  printf("O coeficiente do salario eh: R$%.2f", coef);

  salBruto = horas * coef;
  printf("O valor do salario bruto eh: R$%.2f", salBruto);

  if (categoria == "O") {
    if (salBruto >= 300) {
      imposto = 0.05;
    } else {
      imposto = 0.03;
    }
  } else {
    if (salBruto >= 400) {
      imposto = 0.06;
    } else {
      imposto = 0.04;
    }
  }
  valorImposto = imposto * salBruto;
  printf("O valor do imposto sobre o salario bruto eh: R$ %.2f", valorImposto);

  if (turno == "N" && horas >= 80) {
    grat = 50;
  } else {
    grat = 30;
  }
  printf("A gratificacao sera de: R$%f", grat);
  if (categoria == "O" && coef <= 25) {
    auxAlim = salBruto / 3;
  } else {
    auxAlim = salBruto / 2;
  }
  printf("O auxilio alimentacao sera de: R$%.2f", auxAlim);

  salLiq = salBruto - imposto + grat + auxAlim;
  printf("O salario liquido eh: R$%.2f", salLiq);

  if (salLiq < 350) {
    printf("Mal remunerado!");
  } else if (salLiq > 600) {
    printf("Bem remunerado!");
  } else {
    printf("Normal!");
  }
  return 0;
}