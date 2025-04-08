#include <stdio.h>
#include <stdlib.h>

// declarar variáveis;
// solicitar ao usuario que insira os valores iniciais;
// as variaveis recebem esse valor e o alocam nas posições,
// while {- Recebe um valor inteiro e positivo; <--------------------|--> Só
// encerra quando o valor for 0
//  - Checar se esse valor é o maior ou o menor do conjunto; --|
//      - Se o valor for negativo, imprime uma mensagem;
//      - Se ele for maior -> guardar valor na variavel maior;
//      - Se ele for menor -> guardar valor na variavel menor;
//  - solicita ao usuario que insira outro numero (para hora que voltar ao laço,
//  poder comparar com o anterior)}
//- Imprimir o maior e o menor

int main() {
  int num, numMaior, numMenor;
  printf("Insira um numero inicial: ");
  scanf("%d", &num);
  numMaior = num;
  numMenor = num;
  while (num != 0) {
    if (num < 0) {
      printf("Esse numero nao entra no calculo! \n");
    } else if (num > numMaior) {
      numMaior = num;
    } else if (num < numMenor) {
      numMenor = num;
    }
    printf("Insira um numero: ");
    scanf("%d", &num);
  }
  printf("O maior numero eh: %d \n", numMaior);
  printf("O menor numero eh: %d", numMenor);
  return 0;
}