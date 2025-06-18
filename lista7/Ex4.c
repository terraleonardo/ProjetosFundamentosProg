#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInt(int inicio, int fim) {
    return inicio + rand() % (fim - inicio + 1);
}

int main() {
    srand(time(NULL));

    #define INICIO -50
    #define FIM 50
    
    printf("\nNúmero sorteado entre %d e %d: %d", INICIO, FIM, randomInt(INICIO, FIM));
    
    printf("\n");

    return 0;
}