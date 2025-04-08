#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, numPar, numImpar, qtdPar, qtdImpar, sum, qtd;
  sum = 0;
  qtd = 0;
  while (num > 0) {
    printf("Insira um numero: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
      num = numPar;
      sum = sum + numPar;
      qtd = qtdPar;
      qtdPar++;
    } else {
      num = numImpar;
      sum = sum + numImpar;
      qtd = qtdImpar;
      qtdImpar++;
    }
  }
  printf("A quantidade de numeros inseridos foi: %d", qtd);
  printf("\n A soma dos numeros inseridos foi: %d", sum);
  return 0;
}