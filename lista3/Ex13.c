#include <stdio.h>

float aplicaMedia(float notaA, float notaB) {
    float media = notaA*0.33 + notaB*0.67;
    return media;
}

void printaResultado(float notaA, float notaB) {
    float mediaAB = aplicaMedia(notaA, notaB);

    if(mediaAB >= 6) {
        printf("Parabéns! Você foi aprovado com média %f", mediaAB);
    } else {
        printf("Que pena. Sua média %f não foi suficiente para a aprovação!", mediaAB);
    }
}

int main() {

    float notaGA;
    float notaGB;
    float mediaAB;
    char opcao;

    printf("Insira a sua nota no Grau A: ");
    scanf("%f", &notaGA);

    printf("Insira a sua nota no Grau B: ");
    scanf("%f", &notaGB);

    mediaAB = aplicaMedia(notaGA, notaGB);

    if(mediaAB >= 6) {
        printf("Parabéns! Você foi aprovado com média %f", mediaAB);
    } else {
        float notaGC;

        printf("Sua média %f não foi suficiente para aprovação.\nQual grau você deseja substituir com a nota do Grau C? (digite 'A' ou 'B'): ", mediaAB);
        scanf(" %c", &opcao); // ESPAÇO ANTES DE '%c'

        printf("Insira a sua nota no Grau C: ");
        scanf("%f", &notaGC);

        if(opcao == 'a' || opcao == 'A') {
            printaResultado(notaGC, notaGB);
        } else if(opcao == 'b' || opcao == 'B') {
            printaResultado(notaGA, notaGC);
        } else printf("Opção inválida.");
    }

    printf("\n");
    return 0;
}