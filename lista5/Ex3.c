#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lancaDado() {
    return 1 + rand() % (6 - 1 + 1);
}

int main() {
    srand(time(NULL));

    int posicoes[6] = {0, 0, 0, 0, 0, 0};
    int noLancamentos;

    printf("Digite o número de vezes que o dado será lançado: ");
    scanf("%d", &noLancamentos);

    for(int i = 0; i < noLancamentos; i++) {
        switch (lancaDado()) {
        case 1:
            posicoes[0]++;
            break;
        
        case 2:
            posicoes[1]++;
            break;
        
        case 3:
            posicoes[2]++;
            break;
        
        case 4:
            posicoes[3]++;
            break;
        
        case 5:
            posicoes[4]++;
            break;
        
        case 6:
            posicoes[5]++;
            break;

        default:
            break;
        }
    }

    printf("Posição | Vezes sorteado | Porcentagem");
    printf("\n--------------------------------------");
    for(int i = 0; i < 6; i++) {
        printf("\n   %d    |      %d       |   %.2f%%", i+1, posicoes[i], (((float)posicoes[i] / noLancamentos) * 100));
    }

    printf("\n");

    return 0;
}