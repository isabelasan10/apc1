#include <stdio.h>
#include <stdlib.h>

int main() {
  int cargo;
  float salAtual, valorAument, salAument;
  printf("Insira o codigo correspondente ao cargo a ser consultado: ");
  scanf("%d", &cargo);
  if (cargo == 1) {
    printf("Insira o salario inicial do cargo de Escriturario: R$ ");
    scanf("%f", &salAtual);
    valorAument = 0.5 * salAtual;
    salAument = valorAument + salAtual;
    printf(
        "Para o cargo de Escriturario, valor do aumento foi R$%.2f e o novo "
        "salario eh R$ %.2f",
        valorAument, salAument);
  }
  if (cargo == 2) {
    printf("Insira o salario inicial do cargo de Secretario: R$ ");
    scanf("%f", &salAtual);
    valorAument = 0.35 * salAtual;
    salAument = valorAument + salAtual;
    printf(
        "Para o cargo de Secretario, o valor do aumento foi R$%.2f e o novo "
        "salario eh R$ %.2f",
        valorAument, salAument);
  }
  if (cargo == 3) {
    printf("Insira o salario inicial do cargo de Caixa: R$ ");
    scanf("%f", &salAtual);
    valorAument = 0.2 * salAtual;
    salAument = valorAument + salAtual;
    printf(
        "Para o cargo de Caixa, o valor do aumento foi R$%.2f e o novo salario "
        "eh R$ %.2f",
        valorAument, salAument);
  }
  if (cargo == 4) {
    printf("Insira o salario inicial do cargo de Gerente: R$ ");
    scanf("%f", &salAtual);
    valorAument = 0.1 * salAtual;
    salAument = valorAument + salAtual;
    printf(
        "Para o cargo de Gerente, o valor do aumento foi R$%.2f e o novo "
        "salario eh R$ %.2f",
        valorAument, salAument);
  }
  if (cargo == 5) {
    printf("Insira o salario inicial do cargo de Diretor: R$ ");
    scanf("%f", &salAtual);
    valorAument = 0 * salAtual;
    salAument = valorAument + salAtual;
    printf(
        "Para o cargo de Diretor, o valor do aumento foi R$%.2f e o novo "
        "salario eh R$ %.2f",
        valorAument, salAument);
  }
  return 0;
}