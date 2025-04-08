#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Sabendo que a função strcat concatena duas strings, faça um algoritmo que imite-a

int main(){
    int i = 0, j = 0;
    char frase1[50], frase2[50], fraseFinal[100];
    printf("Insira a primeira frase: ");
    fgets(frase1, 50, stdin);
    printf("Insira a segunda frase: ");
    fgets(frase2, 50, stdin);

    // strcat(frase1, frase2);
    // printf("\n\t%s\n", frase1);

    while(frase1[i] != '\0'){
        fraseFinal[j++] = frase1[i++];
    }
    i = 0;
    while(frase2[i] != '\0'){
        fraseFinal[j++] = frase2[i++];
    }
 
    printf("As duas strings concatenadas: %s\n", fraseFinal);

    return 0;
}