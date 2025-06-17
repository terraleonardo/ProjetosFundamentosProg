#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    srand(time(NULL));

    #define LINHAS 4
    #define COLUNAS 6

    int matriz[LINHAS][COLUNAS];

    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = randomInt(-10, 10);
        }
    }

    // PRINTA MATRIZ
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // a. Soma dos elementos da segunda linha ====================================================================================
    int somaSegundaLinha = 0;
    for(int i = 0; i < COLUNAS; i++) {
        somaSegundaLinha += matriz[1][i];
    }
    printf("\na. Soma dos elementos da segunda linha: %d", somaSegundaLinha);

    /// b. Soma dos elementos da quinta coluna ===================================================================================
    int somaQuintaColuna = 0;
    for(int i = 0; i < LINHAS; i++) {
        somaQuintaColuna += matriz[i][4];
    }
    printf("\nb. Soma dos elementos da quinta coluna: %d", somaQuintaColuna);

    // c. Soma da multiplicação dos elementos da primeira linha pelos elementos da quarta linha =================================
    int multiplicacaoPrimeiraQuartaLinha[6];
    for(int i = 0; i < COLUNAS; i++) {
        multiplicacaoPrimeiraQuartaLinha[i] = (matriz[0][i] * matriz[3][i]);
    }
    int somaB = 0;
    for(int i = 0; i < COLUNAS; i++) {
        somaB += multiplicacaoPrimeiraQuartaLinha[i];
    }

    printf("\nc. Soma de ");
    for(int i = 0; i < COLUNAS; i++) {
        printf("%d ", multiplicacaoPrimeiraQuartaLinha[i]);
    }
    printf("(linha 1 * linha 4) = %d", somaB);

    // d. Soma dos elementos só das colunas com índices pares ===================================================================
    int somaD = 0;
    for(int i = 0; i < COLUNAS; i+=2) { // i+=2 percorre só os indices pares das colunas (0, 2, 4)
        for(int j = 0; j < LINHAS; j++) {
            somaD += matriz[j][i];
        }
    }
    printf("\nd. Soma dos elementos das colunas pares: %d", somaD);

    // e. Soma dos elementos só das linhas com índices ímpares ==================================================================
    int somaE = 0;
    for(int i = 1; i < LINHAS; i+=2) {
        for(int j = 0; j < COLUNAS; j++) {
            somaE += matriz[i][j];
        }
    }
    printf("\ne. Soma dos elementos das linhas ímpares: %d", somaE);
    
    int maiorValor = matriz[0][0];
    int menorValor = matriz[0][0];
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            if(matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
            }
            if(matriz[i][j] < menorValor) {
                menorValor = matriz[i][j];
            }
        }
    }
    printf("\nMaior valor da matriz: %d", maiorValor);
    printf("\nMenor valor da matriz: %d", menorValor);

    printf("\n");
    
    return 0;
}