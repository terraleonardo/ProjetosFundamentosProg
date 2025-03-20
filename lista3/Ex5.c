#include <stdio.h>

int main() {

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero % 2 != 0) {
        printf("O número é ímpar.");
    } else {
        printf("O número é par.");
    }

    return 0;
}