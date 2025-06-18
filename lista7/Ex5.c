#include<stdio.h>
#include<stdbool.h>

char ExibirMenu()
{
    printf("==========MENU PRINCIPAL==========\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("5 - Sair do programa\n");
    
    char opcao;
    bool valida;
    do {
        printf("Digite uma opcao: ");
        scanf(" %c",&opcao);
        valida = true;
        if (opcao!= '1' && opcao!='2' && opcao!='3' && opcao!='4' && opcao!='5') {
            printf("Opcao invalida!\n");
            valida = false;
        }
    } while (valida == false);

    return opcao;
}

float somar(float numA, float numB) {
    return (numA + numB);
}

float subtrair(float numA, float numB) {
    return (numA - numB);
}

float multiplicar(float numA, float numB) {
    return (numA * numB);
}

float dividir(float numA, float numB) {
    return (numA / numB);
}

void opcaoSomar() {
    printf("\nOperação de soma\n");
    float termoA, termoB;
    printf("Digite a parcela A: ");
    scanf("%f", &termoA);
    printf("Digite a parcela B: ");
    scanf("%f", &termoB);

    printf("\n%.2f + %.2f = %.2f", termoA, termoB, somar(termoA, termoB));

    printf("\n\n");
}

void opcaoSubtrair() {
    printf("\nOperação de subtração\n");
    float termoA, termoB;
    printf("Digite o minuendo: ");
    scanf("%f", &termoA);
    printf("Digite o subtraendo: ");
    scanf("%f", &termoB);

    printf("\n%.2f - %.2f = %.2f", termoA, termoB, subtrair(termoA, termoB));

    printf("\n\n");
}

void opcaoMultiplicar() {
    printf("\nOperação de multiplicação\n");
    float termoA, termoB;
    printf("Digite o multiplicando: ");
    scanf("%f", &termoA);
    printf("Digite o multiplicador: ");
    scanf("%f", &termoB);

    printf("\n%.2f x %.2f = %.2f", termoA, termoB, multiplicar(termoA, termoB));

    printf("\n\n");
}

void opcaoDividir() {
    printf("\nOperação de divisão\n");
    float termoA, termoB;
    printf("Digite o dividendo: ");
    scanf("%f", &termoA);
    do {
        printf("Digite o divisor: ");
        scanf("%f", &termoB);

        if(termoB == 0) printf("\nDivisor precisa ser diferente de zero!\n");
    } while (termoB == 0);

    printf("\n%.2f / %.2f = %.2f", termoA, termoB, dividir(termoA, termoB));

    printf("\n\n");
}

int main() {
    char opcao;
    do {
        opcao = ExibirMenu();
        switch(opcao) {
            case '1':
                opcaoSomar();
                break;
            case '2':
                opcaoSubtrair();
                break;
            case '3':
                opcaoMultiplicar();
                break;
            case '4':
                opcaoDividir();
                break;
            case '5':
                printf("Saindo do programa!\n");
                break;
        }
    } while (opcao != '5');
    return 0;
}