#include <stdio.h>

void tabuada(int numero) {
    for(int i = 1; i <= 9; i++) {
        printf("\n%d x %d = %d", i, numero, i*numero);
    }
}

int main() {

    tabuada(5);

    printf("\n");

    return 0;
}