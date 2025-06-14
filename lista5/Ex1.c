#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int randomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    
    srand(time(NULL));

    int v[5];
    int tamanhoV = (sizeof(v) / sizeof(v[0]));
    int soma;
    int produto = 1;

    bool tem50 = false;
    int qtd50 = 0;

    for(int i = 0; i <= tamanhoV; i++) {
        v[i] = randomInt(10, 90);
    }

    // a. Imprimir o vetor
    for(int i = 0; i < tamanhoV; i++) {
        printf("%d ", v[i]);

        if(v[i] == 50) { // b. Verificar se existe o valor 50 neste vetor
            tem50 = true;
            qtd50 ++;
        }

        soma += v[i]; // Adiciona valor ao somatório
        produto *= v[i]; // Adiciona valor ao produto acumulado
    }

    if(tem50) { // Printa se tem 50 no índice
        printf("\nTem o valor 50!");
        printf("\n\nOcorrência de 50 no vetor: %d", qtd50);
    } else printf("\n\nNão tem o valor 50!");

    printf("\n\nMédia dos valores do vetor: %.2f", ((float)soma / (float)tamanhoV)); // d. Calcular a média dos valores do vetor

    int menor = v[0];
    int maior = v[0];
    for(int i = 1; i < tamanhoV; i++) {
        if(v[i] < menor) {
            menor = v[i];
        }
        if(v[i] > maior) {
            maior = v[i];
        }
    }
    printf("\n\nMaior valor do vetor: %d\nMenor valor do vetor: %d", maior, menor); // e. Encontrar o maior e o menor valor dos elementos do vetor.

    printf("\n\nSoma acumulada dos elementos do vetor: %d\nProduto acumulado dos elementos do vetor: %d", soma, produto); // f. Imprimir a soma e o produto acumulado dos valores dos elementos do vetor

    int vInverso[5];
    printf("\n\nVetor em ordem inversa: "); // g. Imprimir o vetor em ordem inversa
    for(int i = tamanhoV-1; i >= 0; i--) {
        printf("%d ", v[i]);
    }

    printf("\n\nVetor inverso: ");
    for(int i = 0; i < tamanhoV; i++) {
        printf("%d ", vInverso[i]);
    }

    printf("\n");

    return 0;
}