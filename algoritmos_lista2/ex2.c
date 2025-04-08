#include <stdio.h>
#include <stdlib.h>

//  Faça um algoritmo que receba dois números e mostre o maior.

int main() {
  int num1, num2;
  printf("Insira o primeiro numero: ");
  scanf("%d", &num1);
  printf("Insira o segundo numero: ");
  scanf("%d", &num2);
  if (num1 > num2) {
    printf("O primeiro numero eh o maior!");
  } else {
    printf("O segundo numero eh o maior!");
  }
  return 0;
}