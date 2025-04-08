#include <stdio.h>
#include <stdlib.h>

int main() {
  int qtdeAlunos, qtdeExame = 0, qtdeReprovados = 0, qtdeAprovados = 0;
  float nota1, nota2, mediaAluno, mediaClasse, sum;
  for (qtdeAlunos = 0; qtdeAlunos < 6; qtdeAlunos++) {
    printf("Insira a primeira nota do aluno: \n");
    scanf("%f", &nota1);
    printf("Insira a segunda nota do aluno: \n");
    scanf("%f", &nota2);
    mediaAluno = (nota1 + nota2) / 2;
    printf("A media das duas notas de cada aluno: %.2f\n", mediaAluno);
    sum += mediaAluno;
    if (mediaAluno >= 3 && mediaAluno < 7) {
      printf("Exame!\n");
      qtdeExame++;
    } else if (mediaAluno >= 7) {
      printf("Aprovado!\n");
      qtdeAprovados++;
    } else {
      printf("Reprovado!\n");
      qtdeReprovados++;
    }
  }
  mediaClasse = sum / qtdeAlunos;
  printf("A quantidade de alunos aprovados: %d\n", qtdeAprovados);
  printf("A quantidade de alunos reprovados: %d\n", qtdeReprovados);
  printf("A quantidade de alunos de exame: %d\n", qtdeExame);
  printf("A media da classe: %.2f\n", mediaClasse);
  return 0;
}