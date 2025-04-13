#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Faça um programa que carregue uma matriz 10x3 com notas de dez alunos em
// três provas. Mostre um relatório com o número do aluno (número da linha) e a
// prova que cada aluno obteve menor nota. Ao final do relatório, mostre quantos
// alunos tiveram menor nota na prova 1, quantos alunos tiveram menor nota na prova
// 2 e quantos alunos tiveram a menor nota na prova 3.

int main(){
    int i, j, qtdMenorNota1 = 0, qtdMenorNota2 = 0, qtdMenorNota3 = 0;
    float notas[10][3], menorNota1, menorNota2, menorNota3;
    for(i = 0; i < 10; i++){
            printf("Insira a nota da prova 1: ");
            scanf("%f", &notas[i][0]);
            printf("Insira a nota da prova 2: ");
            scanf("%f", &notas[i][1]);
            printf("Insira a nota da prova 3: ");
            scanf("%f", &notas[i][2]);
    }
        
    for(i = 0; i < 10; i++){
        if (notas[i][0] < notas[i][1] && notas[i][0] < notas[i][2]){
            printf("O aluno %d teve a nota %f menor.", i, notas[i][0]);
            qtdMenorNota1++;
        }
        if(notas[i][1] < notas[i][0] && notas[i][1] < notas[i][2]){
            printf("O aluno %d teve a nota %f menor.", i, notas[i][1]);
            qtdMenorNota2++;
        }
        if(notas[i][2] < notas[i][0] && notas[i][2] < notas[i][1]){
            printf("O aluno %d teve a nota %f menor.", i, notas[i][2]);
            qtdMenorNota3++;
        }
    }
    

    // for(i = 0; i < 10; i++){
    //     if (notas[i][0] < notas[i][1] && notas[i][0] < notas[i][2]){
    //         qtdMenorNota1++;
    //     }
    //     if(notas[i][1] < notas[i][0] && notas[i][1] < notas[i][2]){
    //         qtdMenorNota2++;
    //     }
    //     if(notas[i][2] < notas[i][0] && notas[i][2] < notas[i][1]){
    //         qtdMenorNota3++;
    //     }
    // }

    printf("A nota 1 foi menor para %d alunos.", qtdMenorNota1);
    printf("A nota 2 foi menor para %d alunos.", qtdMenorNota2);
    printf("A nota 3 foi menor para %d alunos.", qtdMenorNota3);
    return 0;
}