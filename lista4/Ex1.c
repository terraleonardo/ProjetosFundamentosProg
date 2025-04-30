#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void esperarPorTecla() {
    printf("\nPressione enter para continuar...\n");
    getchar();
}

int randomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {

    printf("a. Números inteiros do intervalo [0, 100]:\n");
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    esperarPorTecla();

    printf("b. Números pares do intervalo [20, 50]:\n");
    for (int i = 20; i <= 50; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    esperarPorTecla();

    printf("c. Números inteiros do intervalo [25, 70] em ordem decrescente:\n");
    for (int i = 70; i >= 25; i--) {
        printf("%d ", i);
    }
    esperarPorTecla();

    printf("d. Números ímpares do intervalo [25, 95] em ordem decrescente:\n");
    for (int i = 95; i >= 25; i--) {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
    }
    esperarPorTecla();

    float numerosE[15];
    float somaE;

    printf("e. Soma e média de números lidos.\n   Digite 15 números, separando-os por espaços ou enter:\n");
    for(int i = 0; i < 15; i++) {
        scanf("%f", &numerosE[i]);
        somaE += numerosE[i];
    }
    printf("Soma: %.2f\nMédia: %.2f\n\n", somaE, (somaE/15));

    int numerosF[10];
    int qtdPar = 0;
    int qtdImp = 0;

    printf("f. Quantidade de números pares e a quantidade de números ímpares lidos.\n   Digite 10 números, separando-os por espaços ou enter:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &numerosF[i]);
        if(numerosF[i] % 2 == 0) {
            qtdPar++;
        } else qtdImp++;
    }
    printf("Pares: %d\nÍmpares: %d\n\n", qtdPar, qtdImp);

    printf("g. Números inteiros aleatórios entre -10 e 10 acompanhados da mensagem “POSITIVO”, “NEGATIVO”, ou “NULO”, conforme o caso:\n");
    srand(time(0));
    for(int i = 0; i < 20; i++) {
        int numero = randomNumber(-10, 10);
        printf("%d ", numero);
        if(numero > 0) {
            printf("POSITIVO\n");
        } else if(numero < 0) {
            printf("NEGATIVO\n");
        } else printf("NULO\n");
    }

    int qtdNum;
    printf("\nh. Ler n números e imprimir no final a soma dos números lidos.\nDigite a quantidade de números que quer digitar: \n");
    scanf("%d", &qtdNum);

    float numerosH[qtdNum];
    float somaH = 0;

    printf("Digite os %d números, separando-os por espaços ou enter:\n", qtdNum);
    for(int i = 0; i < qtdNum; i++) {
        scanf("%f", &numerosH[i]);
        somaH += numerosH[i];
    }
    printf("Soma dos números digitados: %.2f\n", somaH);

    return 0;
}