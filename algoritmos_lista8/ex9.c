#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Faça um programa que leia uma string e mostre a quantidade de vogais que contém nela.
int main(){
    int qtdVogais = 0;
    char string[20];
    printf("Insira um texto: ");
    fgets(string, 20, stdin);
    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == 'a'|| string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            qtdVogais++;
        }
    }
    printf("A quantidade de vogais no texto: %d", qtdVogais);
    return 0;
}