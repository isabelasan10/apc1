#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que preencha um vetor com quinze números inteiros e verifique a existência de elementos iguais a 30, 
// mostrando a posição em que aparecem.

int main(){
    int a[5], i;
    for(i = 0; i < 5; i++){
        printf("Insira um numero: ");
        scanf("%d", &a[i]);
    }
    printf("A posicao do(s) elemento(s) igual a 30: ");
    for(i = 0; i < 5; i++){
        if(a[i] == 30){
            printf(" %d", i);
        }
    }
    return 0;
}