#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que preencha dois vetores de dez elementos numéricos cada um e 
// mostre o vetor resultante da intercalação deles.

int main(){
    int a[10], i;
    for(i = 0; i < 10; i++){
        printf("Insira um valor para o vetor A: ");
        scanf("%d", &a[i]);
    }
    int b[10];
    for(i = 0; i < 10; i++){
        printf("Insira um valor para o vetor B: ");
        scanf("%d", &b[i]);
    }
    // int c[10];
    // printf("\n O vetor resultante: ");
    // for(i = 0; i < 5; i++){
    //     c[2 * i] = a[i];
    //     c[2 * i + 1] = b[i]; 
    //     printf(" %d", c[i]);
    // }
    int c[20];
    printf("\n O vetor resultante: ");
    for(i = 0; i < 20; i+=2){
        c[i] = a[i/2];
        c[i + 1] = b[i/2]; 
        printf(" %d", c[i]);
    }
    return 0;
}