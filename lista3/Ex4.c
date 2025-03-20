#include <stdio.h>

int main() {

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if(numero % 3 != 0) {
        printf("%d não é divisível por 3.", numero);
    } else {
        printf("%d é divisível por 3.", numero);
    }

    return 0;
}