#include <stdio.h>
#include <stdlib.h>

int main() {
  float nota1, nota2, nota3, media;
  printf("Insira a nota obtida no trabalho de laboratorio: ");
  scanf("%f", &nota1);
  printf("Insira a nota obtida na avaliacao semestral: ");
  scanf("%f", &nota2);
  printf("Insira a nota obtida no exame final: ");
  scanf("%f", &nota3);
  media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 3;
  printf("A media final foi: %.2f\n", media);
  if (media >= 8) {
    printf("Conceito A");
  } else if (media >= 7 && media < 8) {
    printf("Conceito B");
  } else if (media >= 6 && media < 7) {
    printf("Conceito C");
  } else if (media >= 5 && media < 6) {
    printf("Conceito D");
  } else
    printf("Conceito E");
  return 0;
}