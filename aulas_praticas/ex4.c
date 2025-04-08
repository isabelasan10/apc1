#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, sum, i;
  sum = 0;
  for (i = 1; i <= 10; i++) {
    printf("Insira um numero: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
      sum = sum + num;
    } else {
      sum = sum + num;
    }
  }
  printf("Soma: %d", sum);
  return 0;
}