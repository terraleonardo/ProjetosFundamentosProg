#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int sortear(int inicio, int fim) {
    return inicio + rand() % (fim - inicio + 1);
}

int main() {
    srand(time(NULL));

    char gabarito[10], alternativas[6] = {'a', 'b', 'c', 'd', 'e', 'f'}, respostasEstudante[10] = {'x'};
    bool acertou[10] = {false};
    int pontuacao = 0;

    // Gera e printa o gabarito na tela:
    printf("\nGabarito: |");
    for(int i = 0; i < 10; i++) {
        gabarito[i] = alternativas[sortear(0, 5)];
        printf("%c|", gabarito[i]);
    }

    printf("\n\nDigite as respostas do estudante, separando-as por espaços: ");
    for(int i = 0; i < 10; i++) {
        scanf(" %c", &respostasEstudante[i]);
        if(respostasEstudante[i] == gabarito[i]) { // se resposta do estudante corresponder ao gabarito
            acertou[i] = true; // acerto do índice correspondente é marcado como 'true'
            pontuacao++; // pontuação sobe
        } else acertou[i] = false; // se errar, acerto do índice correspondente é marcado como 'false'
    }

    for(int i = 0; i < 10; i++) {
        if(acertou[i]) {
            printf("\nQuestão %d: Resposta correta", i+1);
        } else printf("\nQuestão %d: resposta incorreta. A resposta correta é: %c.", i+1, gabarito[i]);
    }
    printf("\nA pontuação do estudante é: %d/%d.", pontuacao, 10);

    printf("\n");

    return 0;
}