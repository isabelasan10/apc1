#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que mostre as tabuadas dos números de 1 a 10.

int main(){
    int num, i, tabuada;
    printf("Insira um numero: ");
    scanf("%d", &num);

    for(i = 1; i <= 10; i++){
        tabuada = num * i;
        printf("A tabuada do %d, de 1 a 10, eh: %d\n", num, tabuada);
    }
    return 0;
}
