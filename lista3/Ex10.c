#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int opcao;
    int numDado;

    printf("Digite a quantidade de faces do dado que você quer lançar (4, 6, 8, 10, 12 ou 16):");
    scanf("%d", &opcao);

    srand(time(0)); //Seed de inicialização

    void jogaDado(int opcao) {
        if(opcao != 4 && opcao != 6 && opcao != 8 && opcao != 10 && opcao != 12 && opcao != 16) {
            printf("Essa não é uma das opções dadas!\n");
        } else {
            numDado = rand() % opcao + 1;
            printf("Dado de [%d] lados! O dado mostra: [%d]\n", opcao, numDado);
        }
    }

    jogaDado(opcao);

    return 0;
}