#include <stdio.h>

int main() {

    float gramaAlimento = 30;
    int qtdPassaros;

    printf("Digite a quantidade de pássaros: ");
    scanf("%d", &qtdPassaros);

    float pesoDiario = qtdPassaros*gramaAlimento;
    
    printf("O peso diário de alimentos necessário para os pássaros é: %lfg\n", pesoDiario);

    return 0;
}