#include <stdio.h>
#include <stdlib.h>

// Em um campeonato de futebol existem cinco times e cada um possui onze jogadores. 
// Faça um algoritmo que receba a idade, o peso e a altura de cada um dos jogadores, calcule e mostre:
// • A quantidade de jogadores com idade inferior a 18 anos;
// • A média das idades dos jogadores de cada time;
// • A média das alturas de todos os jogadores do campeonato;
// • A porcentagem de jogadores com mais de 80 quilos entre todos os jogadores do campeonato.

int main(){
    int time, totalJogadores, idadeJogador, qtdeJogadorMenor = 0;
    float pesoJogador, pesoJogadorMaior, alturaJogador, mediaIdade = 0, sumIdade = 0, mediaAltura = 0, sumAltura = 0, porcJogadorMais = 0;
    for(time = 0; time <= 5; time++){
        sumIdade = 0;

        for(totalJogadores = 0; totalJogadores <= 11; totalJogadores++){
            printf("Insira a idade do jogador: \n");
            scanf("%d", &idadeJogador);
            printf("Insira o peso do jogador: \n");
            scanf("%d", &pesoJogador);
            printf("Insira a altura do jogador: \n");
            scanf("%d", &alturaJogador);
            
            // A quantidade de jogadores com idade inferior a 18 anos
            if(idadeJogador < 18){
                qtdeJogadorMenor++;
            }
            
            // A média das idades dos jogadores de cada time
            sumIdade += idadeJogador;
            
            // A média das alturas de todos os jogadores do campeonato
            sumAltura += alturaJogador;
            
            // A porcentagem de jogadores com mais de 80 quilos entre todos os jogadores do campeonato
            if(pesoJogador > 80){
                pesoJogadorMaior++;
            }
        }

        // A média das idades dos jogadores de cada time
        mediaIdade = sumIdade/11;
        printf("A media das idades dos jogadores de cada time: %.2f\n", mediaIdade);

    }
    // A média das alturas de todos os jogadores do campeonato
    mediaAltura = sumAltura/55;

    // A porcentagem de jogadores com mais de 80 quilos entre todos os jogadores do campeonato
    porcJogadorMais = (pesoJogadorMaior*100)/totalJogadores;

    printf("A quantidade de jogadores com idade inferior a 18 anos: %d\n", qtdeJogadorMenor);
    printf("A media das alturas de todos os jogadores do campeonato: %.2f\n", mediaAltura);
    printf("A porcentagem de jogadores com mais de 80 quilos: %.2f\n", porcJogadorMais);

    return 0;
}