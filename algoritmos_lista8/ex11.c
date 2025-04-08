#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Faça um programa que leia uma string e mostre a quantidade de vogais, consoantes e 
// espaços em branco

int main(){
    int qtdVogais = 0, qtdConsoantes = 0, qtdEspacos = 0, i = 0;
    char texto[30];
    printf("Insira um texto: ");
    fgets(texto, 30, stdin);
    for(i = 0; texto[i] != '\0'; i++){
        // if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u')
        if(texto[i] == ' '){
            qtdEspacos++;
        } else if(texto[i] == 'a'){
            qtdVogais++;
        } else if(texto[i] == 'e'){
            qtdVogais++;
        } else if(texto[i] == 'i'){
            qtdVogais++;
        } else if(texto[i] == 'o'){
            qtdVogais++;
        } else if(texto[i] == 'u'){
            qtdVogais;
        } else{
            qtdConsoantes++;
        }
    }
    printf("A quantidade de espacos: %d", qtdEspacos);
    printf("\n A quantidade de vogais: %d", qtdVogais);
    printf("\n A quantidade de consoantes: %d", qtdConsoantes);
    
    return 0;
}