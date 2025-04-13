#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Faça um programa que carregue uma matriz 10x20 com números inteiros e
// some cada uma das linhas, armazenando o resultado das somas em um vetor. A
// seguir, multiplique cada elemento da matriz pela soma da linha e mostre a matriz
// resultante.

int main(){
    int l, c;
    int matriz[3][3], sum[3], matrizResult[3][3];

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("Insira um numero: ");
            scanf("%d", &matriz[l][c]);
        }
    }
    // sum[1] = matriz[1][0] + matriz[1][1] + matriz[1][2];
    
    for(l = 0; l < 3; l++){
        sum[l] = 0;
        for(c = 0; c < 3; c++){
            sum[l] += matriz[l][c];
        }
    }

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            matrizResult[l][c] = matriz[l][c] * sum[l];
        }
    }

    printf("\nO resultado das somas:");
    for(l = 0; l < 3; l++){
        printf(" %d", sum[l]);
    }

    printf("\nA matriz de entrada: \n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf(" %d", matriz[l][c]);
        }
        printf("\n");
    }
    printf("\nA matriz resultante: \n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf(" %d", matrizResult[l][c]);
        }
        printf("\n");
    }

    return 0;
}