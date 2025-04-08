#include <stdio.h>
#include <stdlib.h>

// Faça um programa que receba dez idades, pesos e alturas, calcule e mostre:
// • A média das idades das dez pessoas;
// • A quantidade de pessoas com peso superior a 90 quilos e altura inferior a 1,50 m;
// • A percentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m.

int main(){
    int idade, qtdTotalPessoas, qtdPesoSuperiorAlturaInferior = 0, qtdPessoasAlturaMaior = 0, sumIdade = 0, qtdPessoasIdade = 0;
    float peso, altura;
    for(qtdTotalPessoas = 0; qtdTotalPessoas <= 10; qtdTotalPessoas++){
        printf("Insira a idade: ");
        scanf("%d", &idade);
        printf("Insira o peso: ");
        scanf("%f", &peso);
        printf("Insira a altura: ");
        scanf("%f", &idade);

        sumIdade += idade;

        if(peso > 90 && altura < 1.50){
            qtdPesoSuperiorAlturaInferior++;
        }
        if(altura > 1.90){
            qtdPessoasAlturaMaior++;
            if(idade >= 10 && idade <= 30){
            qtdPessoasIdade ++;
            }
        }
    }

    int mediaIdade = sumIdade/qtdTotalPessoas;
    printf("A media das idades das dez pessoas: %.2f", mediaIdade);

    printf("A quantidade de pessoas com peso superior a 90 quilos e altura inferior a 1.50m: %d", qtdPesoSuperiorAlturaInferior);

    int porcentIdadeAltura = (qtdPessoasIdade * 100)/qtdPessoasAlturaMaior;
    printf("A percentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1.90m: %.2f", porcentIdadeAltura);
    
    return 0;
}