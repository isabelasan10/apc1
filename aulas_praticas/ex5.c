#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, sum, qtd;
  sum = 0;
  qtd = 0;
  while (num != 0) {
    printf("Insira um numero: ");
    scanf("%d", &num);
    if (num > 0) {
      sum = sum + num;
      qtd++;
    }
  }
  printf("A quantidade de numeros inseridos foi: %d", qtd);
  printf("\n A soma dos numeros inseridos foi: %d", sum);
  return 0;
}