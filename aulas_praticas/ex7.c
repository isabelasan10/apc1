#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que preencha um vetor com nove números inteiros, calcule e mostre os números primos e suas respectivas posições.

int main(){
    int a[9];
    for(int i = 0; i < 9; i++){
        printf("Insira um numero: ");
        scanf("%d", &a[i]);
    }
 
    for(int i = 0; i < 9; i++){
        
        int count;
        for(int j = 2; j < a[i]; j++){
            if (a[i] % j == 0) {
                count ++;
            }
        }

        if(count == 0){
            printf("O numero %d é primo e esta na posicao %d", a[i], i);
        }
    }
    return 0;
}