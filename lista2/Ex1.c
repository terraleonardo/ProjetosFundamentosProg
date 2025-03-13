#include <stdio.h>

int main() {

    int tempoMin;

    printf("Digite o tempo em minutos: ");
    scanf("%d", &tempoMin);

    printf("%d minuto(s) equivale(m) a %d segundos\n", tempoMin, tempoMin*60);

    return 0;
}