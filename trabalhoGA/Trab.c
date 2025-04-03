#include <stdio.h>

void printaMenuInicial() {
    printf("Digite a opção desejada:\n1 - Nova Simulação\n2 - Sair do Programa\n");
}

int main() {

    int opcao;
    int populacaoTotal;
    int infectadosIniciais;
    double taxaContagio;
    double porcentagemVacinados;
    double efetividadeVac;
    int novosInfectados;

    char dados[6][64] = {"População total", "Nº de pessoas inicialmente infectadas", "Taxa de contágio", "Porcentagem da população infectada", "Efetividade da vacina", "Nº de dias da simulação"};
    int tamArray = sizeof(dados) / sizeof(dados[0]);

    printaMenuInicial();
    scanf("%d", &opcao);

    if(opcao == 1) {
        int dadosInt[2];
        int dadosDouble[3];
        
        for(int i = 0; i < tamArray; i++) {
            printf("%s\n", dados[i]);
            if(i == 0 || i == 1 || i == 5) { //CONFERIR AQUI
                scanf("%d", &dadosInt[i]);
            } else {
                scanf("%lf", &dadosDouble[i]);
            }
        }

        for (int i = 0; i < sizeof(dadosInt) / sizeof(dadosInt[0]); i++) {
            printf("%d\n", dadosInt[i]);

        }
        for (int i = 0; i < sizeof(dadosInt) / sizeof(dadosInt[0]); i++) {
            printf("%lf\n", dadosDouble[i]);
        }

    }

    return 0;
}