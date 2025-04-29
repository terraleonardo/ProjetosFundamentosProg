#include <stdio.h>

float calculaMedia(float nota1, float nota2) {
    return (nota1*0.33)+(nota2*0.67);
}

int main() {

    int qtdAlunos;
    int notasAlunos[qtdAlunos];
    float notaGA;
    float notaGB;
    float notaGC;
    
    printf("Digite a quantidade de alunos a terem a média calculada: ");
    scanf("%d", &qtdAlunos);
    
    printf("Digite a nota do Grau A: ");
    scanf("%f", &notaGA);
    
    printf("Digite a nota do Grau B: ");
    scanf("%f", &notaGB);
    
    float mediaAB = calculaMedia(notaGA, notaGB);
    printf("%f\n", mediaAB);

    if(mediaAB < 6) {
        printf("Média do GA + GB abaixo de 6!\nDigite a nota do Grau C: ");
        scanf("%f", &notaGB);
    }

    return 0;
}