#include <stdio.h>

float calculaMedia(float notaA, float notaB) {
    float media = notaA*0.33 + notaB*0.67;
    return media;
}

void printaAprovado(float nota) {
    printf("Parabéns! O aluno foi aprovado com média %.2f", nota);
}

void printaReprovado(float nota) {
    printf("A média %.2f não foi suficiente para a aprovação do aluno.", nota);
}

void printaResultado(float notaA, float notaB) {
    float mediaAB = calculaMedia(notaA, notaB);

    if(mediaAB >= 6) {
        printaAprovado(mediaAB);
    } else {
        printaReprovado(mediaAB);
    }
}

int main() {

    int qtdAlunos = 0;
    int notasAlunos[qtdAlunos];
    float totalNotas = 0;
    float notaGA;
    float notaGB;
    float notaGC;
    char grauSubst;
    
    do {
        printf("Digite a quantidade de alunos a terem a média calculada: ");
        scanf("%d", &qtdAlunos);
        if(qtdAlunos < 1) {
            printf("Digite um valor positivo!\n");
        }
    } while(qtdAlunos < 1);

    for(int i = 0; i < qtdAlunos; i++) {
        printf("\nDigite a nota do Grau A do aluno %d: ", i+1);
        scanf("%f", &notaGA);
        
        printf("Digite a nota do Grau B do aluno %d: ", i+1);
        scanf("%f", &notaGB);
        
        float mediaAB = calculaMedia(notaGA, notaGB);

        if(mediaAB >= 6) {
            printaAprovado(mediaAB);
            totalNotas += mediaAB;
        } else {
            printaReprovado(mediaAB);
            do {
                printf("\nQual grau será substituído com a nota do Grau C? (digite 'A' ou 'B'): ", mediaAB);
                scanf(" %c", &grauSubst); // ESPAÇO ANTES DE '%c'
                if(grauSubst != 'a'  && grauSubst != 'A'  && grauSubst != 'b'  && grauSubst != 'B') {
                    printf("Entrada inválida!\n");
                }

            } while(grauSubst != 'a'  && grauSubst != 'A'  && grauSubst != 'b'  && grauSubst != 'B');

            // printf("%c", grauSubst); // TESTE

            printf("Digite a nota do Grau C: ");
            scanf("%f", &notaGC);

            if(grauSubst == 'a' || grauSubst == 'A') {
                printaResultado(notaGC, notaGB);
                totalNotas += calculaMedia(notaGC, notaGB);
                // printf("%f", calculaMedia(notaGC, notaGB)); // TESTE
            } else if(grauSubst == 'b' || grauSubst == 'B') {
                printaResultado(notaGA, notaGC);
                totalNotas += calculaMedia(notaGA, notaGC);
                // printf("%f", calculaMedia(notaGA, notaGC)); // TESTE
            }
        }
        printf("\nTotal de notas: %.2f", totalNotas);
    }
    
    printf("\nMédia geral dos %d alunos: %.2f.", qtdAlunos, totalNotas/qtdAlunos);

    return 0;
}