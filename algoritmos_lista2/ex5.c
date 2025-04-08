#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  float a, b, c;
  printf("Entre com o primeiro numero: ");
  scanf("%f", &a);
  printf("Entre com o segundo numero: ");
  scanf("%f", &a);
  printf("Entre com o terceiro numero: ");
  scanf("%f", &a);
  printf("Entre com o valor inteiro: ");
  scanf("%d", &i);  
  if (i == 1) {
    if (a < b && a < c) {
      printf("%d", a);
      if (b < c) {
        printf("%d", b);
        printf("%d", c);
      } else {
        printf("%d", c);
        printf("%d", b);
      }
    } else if (b < a && b < c) {
      printf("%d", b);
      if (a < c) {
        printf("%d", c);
        printf("%d", a);
      } else {
        printf("%d", a);
        printf("%d", c);
      }
    } else {
      printf("%d", c);
      if (a < b) {
        printf("%d", b);
        printf("%d", a);
      } else {
        printf("%d", a);
        printf("%d", b);
      }
    }

    // ============= Option 2 ===============
  } else if (i == 2) {
    // A biggest value
    if (a > b && a > c) {
      printf("%d", a);
      if (b > c) {
        printf("%d", b);
        printf("%d", c);
      } else {
        printf("%d", c);
        printf("%d", b);
      }
    }

    // B biggest value
    else if (b > a && b > c) {
      printf("%d", b);
      if (a > c) {
        printf("%d", a);
        printf("%d", c);
      } else {
        printf("%d", c);
        printf("%d", a);
      }
    }

    // C biggest value
    else {
      printf("%d", c);
      if (a > b) {
        printf("%d", a);
        printf("%d", b);
      } else {
        printf("%d", b);
        printf("%d", a);
      }
      // ============= Option 3 ===============
    }
  } else {
    // A biggest value
    if (a > b && a > c) {
      printf("%d %d %d", b, a, c);
    } else if (b > a && b > c) {
      printf("%d %d %d", a, b, c);
    } else {
      printf("%d %d %d", b, c, a);
    }
  }
  return 0;
}