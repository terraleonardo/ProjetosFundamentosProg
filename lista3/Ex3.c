#include <stdio.h>

int main() {

    float numero;

    printf("Digite um número real: ");
    scanf("%f", &numero);

    if(numero < 0) {
        printf("%f x 3 = %f", numero, numero*3);
    } else if(numero > 0) {
        printf("%f x 2 = %f", numero, numero*2);
    } else {
        printf("O número é 0!");
    }

    return 0;
}