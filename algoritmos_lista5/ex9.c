#include <stdio.h>
#include <stdlib.h>

// Faça um programa que receba dez números, calcule e mostre a soma dos números pares e dos números ímpares.

int main(){
    int qtdNum, num, numPar = 0, numImpar = 0, sumPar = 0, sumImpar = 0;
    for(qtdNum = 0; qtdNum <= 10; qtdNum++){
        printf("Insira um numero: ");
        scanf("%d", &num);
        for(num = 0; num <=10; num += 2){
            num = numPar;
            numPar++;
        }
        for(num = 1; num <= 10; num +=2){
            num = numImpar;
            numImpar++;
        }
    }
    
    sumPar += numPar;
    printf("A soma dos numeros pares: %d", sumPar);
    sumImpar += numImpar;
    printf("A soma dos numeros impares: %d", sumImpar);
    return 0;
}