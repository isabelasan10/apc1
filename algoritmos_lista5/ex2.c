#include <stdio.h>
#include <stdlib.h>

//Faça um algoritmo que receba um número inteiro maior que 1, verifique se o número 
//fornecido é primo ou não e mostre a mensagem de número primo ou de número não primo. 
//Um número é primo quando é divisível apenas por 1 e por ele mesmo.

int main(){
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);

    if(num < 1){
        printf("O numero %d nao eh primo.\n", num);
        return 0;
    }

    int div_num = 2;
    while(!(num % div_num == 0) && div_num < num){
        div_num++;
    }
    
    if(div_num == num){
        printf("O numero %d eh primo.\n", num);
    } else {
        printf("O numero %d nao eh primo.\n", num);
    }
    return 0;
}