#include <stdio.h>
#include <stdlib.h>

// Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados: 
// a) código da cidade; 
// b) número de veículos de passeio; 
// c) número de acidentes de trânsito com vítimas.

// Deseja-se saber:
// a) qual o maior e o menor índice de acidentes de trânsito e a qual cidade pertence; 
// b) qual a média de veículos nas cinco cidades juntas; 
// c) qual a média de acidentes de trânsito nas cidades com menos de 2000 veículos de passeio.

int main() {
  int qtdCidades = 5, codCidade, numVeiculos = 0, numAcidentes = 0, qtdCidadesMenos;
  float mediaVeiculos, mediaAcidentes, sumVeiculos, sumAcidentes;

  int maiorAcidentes = -1;
  int maiorAcidentesCidadeCod;
  int menorAcidentes = -1;
  int menorAcidentesCidadeCod;
  for (qtdCidades = 0; qtdCidades <= 5; qtdCidades++) {
    printf("Insira o codigo da cidade: ");
    scanf("%d", &codCidade);
    printf("Insira numero de veiculos de passeio: ");
    scanf("%d", &numVeiculos);
    printf("Insira o numero de acidentes de transito: ");
    scanf("%d", &numAcidentes);

    // qual o maior e o menor índice de acidentes de trânsito e a qual cidade pertence;
    if (maiorAcidentes == -1 || maiorAcidentes < numAcidentes) {
      maiorAcidentes = numAcidentes;
      maiorAcidentesCidadeCod = codCidade;
    }

    if (menorAcidentes == -1 || menorAcidentes > numAcidentes) {
      menorAcidentes = numAcidentes;
      menorAcidentesCidadeCod = codCidade;
    }

    // qual a média de veículos nas cinco cidades juntas;
    sumVeiculos = +numVeiculos;

    // qual a média de acidentes de trânsito nas cidades com menos de 2000 veículos de passeio
    if (numVeiculos < 2000) {
      sumAcidentes = +numAcidentes;
      qtdCidadesMenos++;
    }
  }

  printf("O maior indice de acidentes de transito eh %d, pertencendo a cidade de codigo %d\n", maiorAcidentes, maiorAcidentesCidadeCod);
  printf("O menor indice de acidentes de transito eh %d, pertencendo a cidade de codigo %d\n", menorAcidentes, menorAcidentesCidadeCod);

  mediaVeiculos = sumVeiculos / qtdCidades;
  printf("A media de veiculos nas cinco cidades juntas: %f\n", mediaVeiculos);

  mediaAcidentes = sumAcidentes / qtdCidadesMenos;
  printf("A media de acidentes de transito nas cidades com menos de 2000 veiculos de passeio: %f\n", mediaAcidentes);

  return 0;
}