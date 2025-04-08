#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  printf("Insira um numero qualquer: ");
  scanf("%d", &num);
  //   se o resto da divisao por 2 for igual a 0, o numero eh par
  if (num % 2 == 0) {
    printf("O numero eh par!");
  } else {
    printf("O numero eh impar!");
  }
  return 0;
}