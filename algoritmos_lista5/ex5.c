#include <stdio.h>
#include <stdlib.h>

// Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faca um programa que receba o código e o valor de quinze transações, calcule e mostre:
// • O valor total das compras à vista;
// • O valor total das compras a prazo;
// • O valor total das compras efetuadas;
// • O valor total da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes.

int main(){
    int trans;
    char pagto;
    float valor, valorV = 0, valorP = 0, valorTotal = 0, valorPrimeiraP = 0;
    for(trans = 0; trans <= 15; trans++){
        printf("Insira o valor da compra: ");
        scanf("%f", &valor);
        printf("Insira o codigo da transacao: ");
        scanf("%c", &pagto);
        if(pagto == 'V'){
            valorV += valor;
        } else if(pagto == 'P'){
            valorP += valor;
        } else {
            printf("Codigo de transacao invalido! Tente novamente. \n");
        } 
    }
    
    printf("O valor total das compras a vista: R$%;2f", valorV);
    
    printf("O valor total das compras a prazo: R$%.2f", valorP);
    
    valorTotal = valorV + valorP;
    printf("O valor total das compras efetuadas: R$%.2f", valorTotal);
    
    valorPrimeiraP = 1/3 * valorP;
    printf("O valor total da primeira prestaçao das compras a prazo juntas: R$%.2f", valorPrimeiraP);

    return 0;
}