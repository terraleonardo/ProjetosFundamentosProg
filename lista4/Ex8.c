#include <stdio.h>

int main() {

    int num;
    int resultado;

    printf("Entre com um número: ");
    scanf("%d", &num);

    int numeros[num];

    for(int i = 0; i < num; i++) {
        numeros[i] = i+1;
    }

    for(int i = 1; i < num; i++) {
        resultado *= numeros[i];
    }

    printf("\nResultado: %d", resultado);

    return 0;
}