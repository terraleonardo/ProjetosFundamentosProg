#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    srand(time(NULL));

    #define LINHAS 5
    #define COLUNAS 5
    int matriz[LINHAS][COLUNAS];

    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = randomInt(-10, 10);
        }
    }

    printf("\nMatriz normal:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz com sinais invertidos:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("%d\t", (matriz[i][j])*-1);
        }
        printf("\n");
    }
    
    printf("\n");

    return 0;
}