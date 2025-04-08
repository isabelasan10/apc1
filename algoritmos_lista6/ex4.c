#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcaoMenu, peso1, peso2, peso3;
    float nota1, nota2, nota3, sumMediaAritmetica = 0, sumMediaPonderada = 0, mediaAritmetica = 0, mediaPonderada = 0;
    printf("Menu de opcoes: Digite 1 para media aritmetica, 2 para media ponderada e 3 para sair: ");
    scanf("%d", &opcaoMenu);
    while(opcaoMenu != 3){
        if(opcaoMenu < 1 || opcaoMenu > 3){
        printf("Opção invalida, digite novamente!");
        scanf("%d", &opcaoMenu);
        }
        if(opcaoMenu == 1){
                printf("Insira a primeira nota do aluno: ");
                scanf("%f", &nota1);
                printf("Insira a segunda nota do aluno: ");
                scanf("%f", &nota2);
                sumMediaAritmetica = nota1 + nota2;
            }
            
            if(opcaoMenu == 2){
                printf("Insira a primeira nota do aluno: ");
                scanf("%f", &nota1);
                printf("Insira o respectivo peso: ");
                scanf("%d", &peso1);
                printf("Insira a segunda nota do aluno: ");
                scanf("%f", &nota2);
                printf("Insira o respectivo peso: ");
                scanf("%d", &peso2);
                printf("Insira a terceira nota do aluno: ");
                scanf("%f", &nota3);
                printf("Insira o respectivo peso: ");
                scanf("%d", &peso3);
                sumMediaPonderada = (nota1 + peso1) + (nota2 + peso2) + (nota3 + peso3);   
            }
        }
        mediaAritmetica = sumMediaPonderada/2;
        printf("A media aritmetica das notas: %.2f", mediaAritmetica);
        
        mediaPonderada = sumMediaPonderada/3;
        printf("A media ponderada das notas: %.2f", mediaPonderada);
        
    return 0;
}