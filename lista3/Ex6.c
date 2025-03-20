#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numOpcao;
    int numUser;
    int numProg;

    printf("Par ou ímpar? (Digite 0 para 'par' ou 1 para 'ímpar'): ");
    scanf("%d", &numOpcao);

    if(numOpcao == 0) {
        printf("Você é par, eu sou ímpar!\n");
    } else {
        printf("Você é ímpar, eu sou par!\n");
    }

    printf("Digite um número inteiro de 0 a 5: ");
    scanf("%d", &numUser);

    srand(time(0)); //Seed de inicialização
    numProg = 0 + rand() % (5 - 0 + 1);
    printf("Eu escolho %d!\n", numProg);

    if(numOpcao == 0 && (numUser + numProg) % 2 == 0 || numOpcao == 1 && (numUser + numProg) % 2 != 0) {
        printf("Você ganhou!");
    } else {
        printf("Você perdeu!");
    }

    return 0;
}