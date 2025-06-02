#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct { // Definindo struct Personagem
    char classe[32];
    int vida;
    int ataque;
    int defesa;
    bool habilidade_ativa;
} Personagem;

Personagem personagem(char classe[16], int ataque, int defesa) { // Definindo construtor de Personagem
    Personagem p;
    strcpy(p.classe, classe);
    p.ataque = ataque;
    p.defesa = defesa;
    p.vida = 100;
    p.habilidade_ativa = false;

    return p;
}

void inicializaTime(Personagem time[]) { // Definindo inicializador de time
    time[0] = personagem("Guerreiro", 20, 10);
    time[1] = personagem("Mago", 30, 5);
    time[2] = personagem("Cacador", 18, 8);
    time[3] = personagem("Paladino", 15, 12);
    time[4] = personagem("Barbaro", 25, 6);
}

int main() {

    Personagem time1[5];
    Personagem time2[5];

    inicializaTime(time1);
    inicializaTime(time2);

    // for(int i=0; i<5; i++) { // TESTANDO SE TODAS AS CLASSES FORAM CRIADAS
    //     printf("\n%s\nHP:%d ATK:%d DEF:%d HAB_BOOL:%d\n", time1[i].classe, time1[i].vida, time1[i].ataque, time1[i].defesa, time1[i].habilidade_ativa);
    // }
    // printf("\n");

    return 0;
}