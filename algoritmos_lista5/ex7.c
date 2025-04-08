#include <stdio.h>
#include <stdlib.h>

// Faça um programa que receba a idade, o peso, a altura, a cor dos olhos ( A – azul, P – preto, V – verde e C – castanho) e a cor dos cabelos (P – preto, C – castanho, L – louro e R – ruivo) de vinte pessoas, e que calcule e mostre:
//     • A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos;
//     • A média das idades das pessoas com olhos azuis entre todas as pessoas analisadas;
//     • A percentagem de pessoas com olhos azuis entre todas as pessoas analisadas;
//     • A quantidade de pessoas ruivas e que não possuem olhos azuis.

int main(){
    int idade, qtdPessoasIdadePeso = 0, qtdPessoasRuivasOlhos = 0, qtdTotalPessoas = 0, sumIdadeOlhosAzuis = 0, qtdPessoasOlhosAzuis = 0;
    float peso, altura;
    char corOlhos, corCabelo;
    for(qtdTotalPessoas = 0; qtdTotalPessoas <= 20; qtdTotalPessoas++){
        printf("Insira a idade: ");
        scanf("%d", &idade);
        printf("Insira o peso: ");
        scanf("%f", &peso);
        printf("Insira a altura: ");
        scanf("%f", &altura);
        printf("Insira a cor dos olhos: ");
        scanf("%c", &corOlhos);
        printf("Insira a cor do cabelo: ");
        scanf("%c", &corCabelo);

        if(idade > 50 && peso < 60){
            qtdPessoasIdadePeso++;
        }
        if(corOlhos == 'A'){
            sumIdadeOlhosAzuis += idade;
            qtdPessoasOlhosAzuis++;
        }
        if(corCabelo == 'R' && corOlhos != 'A'){
            qtdPessoasRuivasOlhos++;
        }
    }
    printf("A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos: %d", qtdPessoasIdadePeso);

    int mediaIdadeOlhos = sumIdadeOlhosAzuis/qtdPessoasOlhosAzuis;
    printf("A media das idades das pessoas com olhos azuis entre todas as pessoas analisadas: %.2f", mediaIdadeOlhos);

    int porcentOlhos = (qtdPessoasOlhosAzuis * 100)/20;
    printf("A percentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %.2f", porcentOlhos);

    printf("A quantidade de pessoas ruivas e que nao possuem olhos azuis: %d", qtdPessoasRuivasOlhos);

    return 0;
}