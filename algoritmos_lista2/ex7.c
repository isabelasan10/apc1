#include <stdio.h>
#include <stdlib.h>

int main() {
  int option;
  float salario, porcImposto, imposto, aumento, salFinal;
  printf(
      "Menu de opcoes:\n 1. Imposto\n 2. Novo salario\n 3.Classificacao\n "
      "Digite a opcao desejada.");
  if (option == 1) {
    printf("Insira o salario do funcionario: R$ ");
    scanf("%f", &salario);
    if (salario > 500.01 && salario < 850) {
      porcImposto = 0.10;
      imposto = porcImposto * salario;
      printf("%.2f", imposto);
    } else if (salario < 500) {
      porcImposto = 0.05;
      imposto = porcImposto * salario;
      printf("%.2f", imposto);
    } else {
      porcImposto = 0.15;
      imposto = porcImposto * salario;
      printf("%.2f", imposto);
    }
  }
  if (option == 2) {
    printf("Insira o salario do funcionario: R$ ");
    scanf("%f", &salario);
    if (salario > 750 && salario < 1500) {
      aumento = 50;
      salFinal = salario + aumento;
      printf("%.2f", salFinal);
    } else if (salario > 450.01 && salario < 750) {
      aumento = 75;
      salFinal = salario + aumento;
      printf("%.2f", salFinal);
    } else if (salario > 1500) {
      aumento = 25;
      salFinal = salario + aumento;
      printf("%.2f", salFinal);
    } else {
      aumento = 100;
      salFinal = salario + aumento;
      printf("%.2f", salFinal);
    }
  }
  if (option == 3) {
    printf("Insira o salario do funcionario: R$ ");
    scanf("%f", &salario);
    if (salario > 700.01) {
      printf("Bem remunerado!");
    } else {
      printf("Mal remunerado!");
    }
  }
  return 0;
}