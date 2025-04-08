#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que leia um vetor com cinco posições para números inteiros e mostre somente os números positivos.

int main(){
    int a[5], numPositivo = 0;
    for(int i = 0; i < 5; i++){
        printf("Insira um numero: ");
        scanf("%d", &a[i]);
    }
 
    printf("\n Os numeros positivos sao: ");
 
    for(int i = 0; i < 5; i++){
        if(a[i] > 0){
            printf(" %d", a[i]);
        }
    }
    return 0;
}