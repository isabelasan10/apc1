#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, sum, i;
  sum = 0;
  for (i = 1; i <= 20; i++) {
    printf("Insira um numero: ");
    scanf("%d", &num);
    sum = sum + num;
  }
  printf("A soma dos numeros inseridos eh: %d", sum);
  return 0;
}