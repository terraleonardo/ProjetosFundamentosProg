#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    srand(time(NULL));

    int consumoPorDia[30];
    int consumoTotalMes = 0;

    #define TOTAL_DIAS 30

    for(int i = 0; i < TOTAL_DIAS; i++) {
        consumoPorDia[i] = randomInt(20, 200); // a. Sorteie e armazene o consumo diário de água (em litros) em um vetor.
        printf("\nDia %d: %d L", i+1, consumoPorDia[i]);

        consumoTotalMes += consumoPorDia[i]; // b. Calcule o consumo total do mês.
    }

    int maiorConsumo = consumoPorDia[0], menorConsumo = consumoPorDia[0], diaMaiorConsumo, diaMenorConsumo;

    for(int i = 1; i < TOTAL_DIAS; i++) {
        if(consumoPorDia[i] > maiorConsumo) {
            maiorConsumo = consumoPorDia[i];
            diaMaiorConsumo = i+1;
        }
        if(consumoPorDia[i] < menorConsumo) {
            menorConsumo = consumoPorDia[i];
            diaMenorConsumo = i+1;
        }
    }

    printf("\nConsumo total no mês: %d L", consumoTotalMes);
    printf("\nMédia de consumo por dia no mês: %.2f L", ((float)consumoTotalMes / TOTAL_DIAS));
    printf("\nDia de maior consumo: %d (%d L)\nDia de menor consumo: %d (%d L)", diaMaiorConsumo, maiorConsumo, diaMenorConsumo, menorConsumo);

    printf("\n");

    return 0;
}