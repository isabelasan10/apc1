#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2, num3, num4;
  printf("Insira o primeiro/menor numero: ");
  scanf("%d", &num1);
  printf("Insira o segundo/intermediario numero: ");
  scanf("%d", &num2);
  printf("Insira o terceiro/maior numero: ");
  scanf("%d", &num3);
  printf("Insira o quarto numero: ");
  scanf("%d", &num4);

  if (num4 > num3) {
    printf("%d", num4);
    printf("%d", num3);
  } else {
    printf("%d", num3);
  }

  if (num4 < num3 && num4 > num2) {
    printf("%d", num4);
    printf("%d", num2);
  } else {
    printf("%d", num2);
  }

  if (num4 < num2 && num4 > num1) {
    printf("%d", num4);
    printf("%d", num1);
  } else {
    printf("%d", num1);
  }
  if (num4 < num1) {
    printf("%d", num4);
  }
  return 0;
}