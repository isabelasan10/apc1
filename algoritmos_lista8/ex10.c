#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Faça um programa que leia uma string e mostre a quantidade de palavras que aparecem.

int main(){
    int qtdPalavras = 0, i = 0;
    char string[30];
    printf("Insira um texto: ");
    fgets(string, 30, stdin);
    while(string[i] != '\n' && string[i] != '\0'){
        while(string[i] == ' '){
            i++;
        }
        if(string[i] != '\n' && string[i] != '\0'){
            qtdPalavras++;
            while(string[i] != ' ' && string[i] != '\n' && string[i] != '\0'){
                i++;
            }
        }
    }
    printf("A quantidade de palavras : %d\n", qtdPalavras);
    return 0;
}