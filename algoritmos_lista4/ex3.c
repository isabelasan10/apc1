#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que leia um número N e que indique quantos valores inteiros
// e positivos devem ser lidos a seguir. Para cada valor lido, mostre uma tabela
// contendo o valor lido e o fatorial desse valor.

int main() {
  int num, valor;
  printf("Insira um numero: ");
  scanf("%d", &num);
  if (num < 0) {
    printf("Insira um valor valido.\n");
    return 0;
  }

  for (int i = 0; i < num; i++) {
    printf("Insira um valor: ");
    scanf("%d", &valor);

    unsigned long long fatorial = 1;
    for (int j = 1; j < valor; j++) {
      fatorial *= j;
    }
    printf("\nO valor lido foi %d e o seu fatorial eh %llu\n", valor, fatorial);
  }

  return 0;
}