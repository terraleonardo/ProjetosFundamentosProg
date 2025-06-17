#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int randomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    srand(time(NULL));

    int pontuacoes[4] = {0, 0, 0, 0};

    #define NO_RODADAS 5
    #define QTD_JOGADORES 4
    
    for(int i = 0; i < NO_RODADAS; i++) {
        printf("\n>> Rodada %d", i+1);
        for(int j = 0; j < QTD_JOGADORES; j++) {
            int pontoRodada = randomInt(0, 100);
            pontuacoes[j] += pontoRodada;
            printf("\n -Jogador %d: (+%d)", j+1, pontoRodada);
            if(pontoRodada >= 80) {
                printf(" [Rodada de Destaque!]");
            }
        }
        printf("\n");
    }

    // =========TESTE EMPATE==========
    // pontuacoes[0] = 500;
    // pontuacoes[3] = 500;
    // ===============================

    printf("\nPontuações acumuladas:");

    for(int i = 0; i < QTD_JOGADORES; i++) {
        printf("\nJogador %d: %d pontos", i+1, pontuacoes[i]);
    }
    
    int maiorPontuacao = pontuacoes[0];
    int vencedor;
    bool empatou = false;
    for(int i = 1; i < QTD_JOGADORES; i++) {
        if(pontuacoes[i] == maiorPontuacao) {
            empatou = true;
        }
        if(pontuacoes[i] > maiorPontuacao) {
            maiorPontuacao = pontuacoes[i];
            vencedor = i;
        }
    }

    if(!empatou) {
        printf("\n\nVencedor: Jogador %d (%d pontos!)", vencedor+1, maiorPontuacao);
    } else {
        printf("\n\nEmpate!");
    }
    printf("\n");

    return 0;
}