#include <stdio.h>

int main() {

    float valorA;
    float valorB;
    float valorC;

    printf("Digite o valor A: ");
    scanf("%f", &valorA);

    printf("Digite o valor B: ");
    scanf("%f", &valorB);

    printf("Digite o valor C: ");
    scanf("%f", &valorC);

    float valorAB = valorA + valorB;
    float valorAC = valorA + valorC;

    if(valorAB < valorAC) {
        printf("%f + %f é menor que %f + %f!", valorA, valorB, valorA, valorC);
    } else {
        printf("%f + %f não é menor que %f + %f!", valorA, valorB, valorA, valorC);
    }

    return 0;
}