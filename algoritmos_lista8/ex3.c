#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que preencha um vetor com dez números inteiros, calcule e mostre 
// a quantidade de números negativos e a soma dos números positivos.

int main(){
    int a[10], numNegativo = 0, numPositivos = 0, sumPositivos = 0;
    for(int i = 0; i < 10; i++){
        printf("Insira um numero: ");
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 10; i++){
        if(a[i] < 0){
            numNegativo++;
        }
        if(a[i] > 0){
            numPositivos += a[i];
        }
    }
    printf("A quantidade de numeros negativos: %d\n", numNegativo);

    sumPositivos += numPositivos;
    printf("A soma dos numeros positivos: %d", sumPositivos);
    return 0;
}