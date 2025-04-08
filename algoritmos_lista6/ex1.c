#include <stdio.h>
#include <stdlib.h>

// Faça um programa que receba a idade e o peso de pessoas até que seja digitada uma idade negativa. 
// Calcule e mostre as médias dos pesos das pessoas da mesma faixa etária. 
// As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a 30 anos e maiores de 31 anos

int main() {
    int idade, totalPessoas1 = 0, totalPessoas2 = 0, totalPessoas3 = 0, totalPessoas4 = 0;
    float peso, sumPeso1 = 0, sumPeso2 = 0, sumPeso3 = 0, sumPeso4 = 0;
    while(idade > 0){
        printf("Insira a idade: ");
        scanf("%d", &idade);
        printf("Insira o peso: ");
        scanf("%f", &peso);
        if(idade > 0 && idade <= 10){
            sumPeso1 += peso;
            totalPessoas1++;
        } else if(idade > 10 && idade <= 20){
            sumPeso2 += peso;
            totalPessoas2++;
        } else if(idade > 20 && idade <= 30){
            sumPeso3 += peso;
            totalPessoas3++;
        } else {
            sumPeso4 += peso;
            totalPessoas4++;
        }
    }
    int media1 = sumPeso1/totalPessoas1, media2 = sumPeso2/totalPessoas2, media3 = sumPeso3/totalPessoas3, media4 = sumPeso4/totalPessoas4;

    printf("A media dos pesos da primeira faixa etaria: %.2f", media1);
    printf("A media dos pesos da segunda faixa etaria: %.2f", media2);
    printf("A media dos pesos da terceira faixa etaria: %.2f", media3);
    printf("A media dos pesos da quarta faixa etaria: %.2f", media4);

    return 0; 
}