#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que preencha um vetor com dez elementos numéricos e a 
// partir desse vetor faça um segundo vetor que receba os valores do primeiro vetor 
// de forma invertida.

int main(){
    int a[4];
    for(int i = 0; i < 4; i++){
        printf("Insira um valor: ");
        scanf("%d", &a[i]);
    }
    printf("O vetor invertido: ");
    for(int i = 3; i >= 0; i--){
        printf(" %d", a[i]);
    }
    return 0;
}