#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que preencha dois vetores de dez posições cada um, determine e 
// mostre o terceiro contendo a soma das posições dos dois vetores anteriores.
 
int main(){
    int a[10], b[10], c[10], i;
    // a[10] + b[10] = c[10];
    // a[1] + b[1] = c[1];
    // a[i] + b[i] = c[i];
    for(i = 0; i < 10; i++){
        printf("Insira um numero para o vetor A: ");
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 10; i++){
        printf("Insira um numero para o vetor B: ");
        scanf("%d", &b[i]);
    }
    for(i = 0; i < 10; i++){
        c[i] = a[i] + b[i];
    }
    printf("A soma das posicoes dos vetores anteriores: %d\n", c[0]);
    printf("A soma das posicoes dos vetores anteriores: %d\n", c[1]);
    printf("A soma das posicoes dos vetores anteriores: %d\n", c[2]);
    printf("A soma das posicoes dos vetores anteriores: %d\n", c[3]);
    printf("A soma das posicoes dos vetores anteriores: %d\n", c[4]);
    printf("A soma das posicoes dos vetores anteriores: %d\n", c[5]);
    printf("A soma das posicoes dos vetores anteriores: %d\n", c[6]);
    printf("A soma das posicoes dos vetores anteriores: %d\n", c[7]);
    printf("A soma das posicoes dos vetores anteriores: %d\n", c[8]);
    printf("A soma das posicoes dos vetores anteriores: %d\n", c[9]);
    return 0;
}