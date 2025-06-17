#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    srand(time(NULL));
    
    #define LINHAS 10
    #define COLUNAS 3

    float notas[LINHAS][COLUNAS] = {0};

    for(int i = 0; i < LINHAS; i++) { // Preenche colunas 0 e 1;
        for(int j = 0; j < COLUNAS-1; j++) { // COLUNAS-1 pois a terceira coluna não deve ser preenchida nesse loop
            notas[i][j] = ((float)randomInt(0, 100)/10);
        }
    }

    for(int i = 0; i < LINHAS; i++) { // Calcula grau parcial
        notas[i][2] = ((notas[i][0]*0.33) + (notas[i][1]*0.67));
    }

    printf("\nNOTAS:");
    printf("\nGrau A\tGrau B\tGrau parcial\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("%.1f\t", notas[i][j]);
        }
        printf("\n");
    }

    return 0;
}