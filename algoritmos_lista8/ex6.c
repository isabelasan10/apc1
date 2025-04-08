#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que preencha um vetor com oito números inteiros, calcule e mostre 
// dois vetores resultantes. O primeiro vetor resultante deve conter os números positivos; o 
// segundo deve conter os números negativos. Cada vetor resultante vai ter, no máximo, oito 
// posições, que poderão não ser completamente utilizadas.

int main(){
    int a[8], b[8] = {0, 0, 0, 0, 0, 0, 0, 0}, c[8] = {0, 0, 0, 0, 0, 0, 0, 0}, i;
    for(i = 0; i < 8; i++){
        printf("Insira um numero: ");
        scanf("%d", &a[i]);
    }
    printf("O primeiro vetor, contendo os numeros positivos: ");
    for(i = 0; i < 8; i++){
        if(a[i] > 0){
            b[i] = a[i];
            printf(" %d", b[i]);
        }
    }
    printf("O segundo vetor, contendo os numeros negativos: ");
    for(i = 0; i < 8; i++){
        if(a[i] < 0){
            c[i] = a[i];
            printf(" %d", c[i]);
        }
    }
    return 0;
}