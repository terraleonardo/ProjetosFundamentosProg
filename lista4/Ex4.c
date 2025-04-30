#include <stdio.h>

int main() {

    int divisor;
    int inicioIntervalo;
    int fimIntervalo;

    printf("Entre com o valor do divisor: ");
    scanf("%d", &divisor);
    printf("Início do intervalo: ");
    scanf("%d", &inicioIntervalo);
    printf("Fim do intervalo: ");
    scanf("%d", &fimIntervalo);

    printf("Números divisíveis por %d no intervalo de %d a %d:\n", divisor, inicioIntervalo, fimIntervalo);
    for(int i = inicioIntervalo; i <= fimIntervalo; i++) {
        if((i % divisor) == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}