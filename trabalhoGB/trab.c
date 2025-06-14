#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

int randomInt(int min, int max) { // Definindo função random
    return min + rand() % (max - min + 1);
}

typedef struct { // Definindo struct Personagem
    char classe[16];
    int vida;
    int ataque;
    int defesa;
    bool habilidade_ativa;
} Personagem;

typedef struct {
    Personagem equipe[5];
} Equipe

Personagem personagem(char classe[16], int ataque, int defesa) { // Definindo construtor de Personagem
    Personagem p;
    strcpy(p.classe, classe);
    p.ataque = ataque;
    p.defesa = defesa;
    p.vida = 100;
    p.habilidade_ativa = false;

    return p;
}

void inicializaEquipe(Personagem equipe[]) { // Definindo inicializador de equipe
    equipe[0] = personagem("Guerreiro", 20, 10);
    equipe[1] = personagem("Mago", 30, 5);
    equipe[2] = personagem("Cacador", 18, 8);
    equipe[3] = personagem("Paladino", 15, 12);
    equipe[4] = personagem("Barbaro", 25, 6);
}

int sorteiaPrimeiro() {
    return randomInt(1, 2);
}

int main() {
    
    srand(time(NULL)); // Inicializando seed da função random
    
    #define TAMANHO_EQUIPE 5
    
    Personagem equipe1[TAMANHO_EQUIPE];
    Personagem equipe2[TAMANHO_EQUIPE];
    
    inicializaEquipe(equipe1);
    inicializaEquipe(equipe2);

    int timeAtacante = 1; // Flag que alterna a cada jogada de um dos lados para exibir qual time está atacando.

    for(int i = 0;) {

    }

    /* for(int i=0; i<TAMANHO_EQUIPE; i++) { // TESTANDO SE TODAS AS CLASSES FORAM CRIADAS
        printf("\n%s\nHP:%d ATK:%d DEF:%d HAB_BOOL:%d\n", equipe1[i].classe, equipe1[i].vida, equipe1[i].ataque, equipe1[i].defesa, equipe1[i].habilidade_ativa);
    }
    printf("\n"); */

    return 0;
}