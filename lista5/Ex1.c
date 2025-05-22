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

    bool tem50 = false;
    int qtd50 = 0;

    for(int i = 0; i <= tamanhoV; i++) {
        v[i] = randomInt(10, 90);
    }

    // Printa o array
    for(int i = 0; i < tamanhoV; i++) {
        printf("\n%d", v[i]);

        if(v[i] == 50) { // Verifica se tem 50 no índice
            tem50 = true;
            qtd50 ++;
        }

        soma += v[i]; // Adiciona valor ao somatório
    }

    if(tem50) { // Printa se tem 50 no índice
        printf("\nTem o valor 50!");
    } else printf("\n\nNão tem o valor 50!");
    
    printf("\n\nOcorrência de 50 no vetor: %d", qtd50);

    printf("\n\nMédia dos valores do vetor: %.2f", ((float)soma / (float)tamanhoV));

    return 0;
}