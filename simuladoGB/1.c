#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int sortear(int inicio, int fim) {
    return inicio + rand() % (fim - inicio + 1);
}

int main() {

    srand(time(NULL));

    int nroSorteado = sortear(1, 10);
    printf("\nNúmero sorteado: %d", nroSorteado);

    printf("\n");

    return 0;
}