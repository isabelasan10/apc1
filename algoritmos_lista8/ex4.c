#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que preencha um vetor com seis elementos inteiros, calcule e mostre: 
// • Todos os números pares;
// • A quantidade de números pares;
// • Todos os números ímpares;
// • A quantidade de números ímpares;

int main(){
    int num[6], i, numPar = 0, numImpar = 0, qtdPar = 0, qtdImpar = 0;
    for(i = 0; i < 6; i++){
        printf("Insira um numero: ");
        scanf("%d", &num[i]);
    }

    printf("Todos os n pares: ");
    for(i = 0; i < 6; i++){
        if (num[i] % 2 == 0){
            printf(" %d", num[i]);
            qtdPar++;
        }
    } 
    

    printf("\nTodos os n impares: ");
    for(i = 0; i < 6; i++){
        if (num[i] % 2 != 0){
            printf(" %d", num[i]);
            qtdImpar++;
        }
    }

    printf("A quantidade de numeros pares: %d\n", qtdPar);
    printf("A quantidade de numeros impares: %d\n", qtdImpar);

    return 0;
}