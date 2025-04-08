#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que receba a idade de 15 pessoas, calcule e mostre:
// • A quantidade de pessoas em cada faixa etária;
// • A percentagem de pessoas na primeira e na última faixa etária, com relação ao total de pessoas.

int main(){
    int idade, faixaEtaria, totalPessoas, totalPessoasPrimeiraFaixa = 0, totalPessoasSegundaFaixa = 0, totalPessoasTerceiraFaixa = 0, totalPessoasQuartaFaixa = 0, totalPessoasUltimaFaixa = 0;
    float porcentPrimeiraFaixa, porcentUltimaFaixa;
    for(totalPessoas = 0; totalPessoas <= 15; totalPessoas++){
        printf("Insira sua idade: ");
        scanf("%d", &idade);
        
        if(idade <= 15){
            totalPessoasPrimeiraFaixa++;
        } else if(idade > 15 && idade <= 30){
            totalPessoasSegundaFaixa++;
        } else if(idade > 30 && idade <= 45){
            totalPessoasTerceiraFaixa++;
        } else if(idade > 45 && idade <= 60){
            totalPessoasQuartaFaixa++;
        } else{
            totalPessoasUltimaFaixa++;
        }
        
    }
    
    totalPessoas = totalPessoasPrimeiraFaixa + totalPessoasSegundaFaixa + totalPessoasTerceiraFaixa + totalPessoasQuartaFaixa + totalPessoasUltimaFaixa;

    // A percentagem de pessoas na primeira e na última faixa etária, com relação ao total de pessoas
    
    porcentPrimeiraFaixa = (totalPessoasPrimeiraFaixa * 100)/totalPessoas;

    porcentUltimaFaixa = (totalPessoasUltimaFaixa*100)/totalPessoas;
   
    // A quantidade de pessoas em cada faixa etária
    printf("O total de pessoas da primeira faixa etaria: %d\n", totalPessoasPrimeiraFaixa);
    printf("O total de pessoas da segunda faixa etaria: %d\n", totalPessoasSegundaFaixa);
    printf("O total de pessoas da terceira faixa etaria: %d\n", totalPessoasTerceiraFaixa);
    printf("O total de pessoas da quarta faixa etaria: %d\n", totalPessoasQuartaFaixa);
    printf("O total de pessoas da ultima faixa etaria: %d\n", totalPessoasUltimaFaixa);
    
    // A percentagem de pessoas na primeira e na última faixa etária, com relação ao total de pessoas
    printf("A percentagem de pessoas na primeira faixa etaria, com relacao ao total de pessoas: %.2f\n", porcentPrimeiraFaixa);
    printf("A percentagem de pessoas na ultima faixa etaria, com relacao ao total de pessoas: %.2f", porcentUltimaFaixa);
    return 0;
}