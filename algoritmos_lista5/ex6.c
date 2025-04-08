#include <stdio.h>
#include <stdlib.h>

// Faça um programa que receba a idade, a altura e o peso de 25 pessoas, calcule e mostre:
// • A quantidade de pessoas com idade superior a 50 anos;
// • A média das alturas das pessoas com idade entre 10 e 20 anos;
// • A percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas.

int main(){
    int idade, sumAltura = 0, qtdPessoasTotal, qtdPessoasSuperior = 0;
    float altura, peso, qtdePessoasPeso = 0;
    for(qtdPessoasTotal = 0; qtdPessoasTotal <= 25; qtdPessoasTotal++){
        printf("Insira sua idade: ");
        scanf("%d", &idade);
        printf("Insira seu peso: ");
        scanf("%f", &peso);
        printf("Insira sua altura: ");
        scanf("%f", &idade);
        if(idade > 50){
            qtdPessoasSuperior++;
        }
        if(idade >= 10 && idade <= 20){
            altura++;
            sumAltura += altura;
        }
        if(peso < 40){
            qtdePessoasPeso++;
        }
    }
    printf("A quantidade de pessoas com idade superior a 50 anos: %d", qtdPessoasSuperior);
    
    int mediaAltura = sumAltura/altura;
    printf("A media das alturas das pessoas com idade entre 10 e 20 anos: %.2f", mediaAltura);

    int porcPeso = (qtdePessoasPeso * 100)/qtdPessoasTotal;
    printf("A percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analidas: %.2f", porcPeso);

    return 0;
}