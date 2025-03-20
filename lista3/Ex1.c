#include <stdio.h>

int main() {

    float dividendo;
    float divisor;

    printf("Digite um dividendo para a operação de divisão: ");
    scanf("%f", &dividendo);

    printf("Agora, digite um dividendo (diferente de zero): ");
    scanf("%f", &divisor);

    float resultado = dividendo/divisor;

    if(divisor == 0) {
        printf("O Divisor é igual a zero! Operação cancelada.\n");
    } else {
        printf("%f / %f = %f", dividendo, divisor, resultado);
    }

    return 0;
}