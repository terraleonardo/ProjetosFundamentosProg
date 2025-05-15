#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

int min(int a, int b) {
    if(a > b) {
        return a;
    } else return b;
}

int main() {
    srand(time(NULL));

    int numeros[5], menor, maior;
    float soma;

    for(int i = 0; i < 5; i++) {
        numeros[i] = randomInt(0, 100);
        soma += numeros[i];
        printf("\n[%d]", numeros[i]);
        
    }

    menor = numeros[0]; // Define um dos valores do array para comparar com os outros

    for(int i = 1; i < 5; i++) { // Verifica menor
        if(numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    maior = numeros[0];

    for(int i = 1; i < 5; i++) { // Verifica maior
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("\nMenor: %d", menor);
    printf("\nMaior: %d", maior);
    printf("\nMédia: %.2f", soma/5);

    return 0;
}