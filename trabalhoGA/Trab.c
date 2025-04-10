#include <stdio.h>
    
    // void printaMenu(char opcoes[]) {
    //     printf("Digite a opção desejada:");
    //     for(int i = 0; i < sizeof(opcoes) / sizeof(opcoes[0]); i++) {
    //         printf("%d - %s\n", i+1, opcoes[i]);
    //     }
    // }

int main() {

    char opcoesMenuInicial[2][32] = {"Nova Simulação", "Sair do programa"};
    int indexMenuInicial;

    do { //Printa o menu inicial equanto o usuário não digitar uma opção váida
        printf("Digite a opção desejada:\n");

        for(int i = 0; i < sizeof(opcoesMenuInicial) / sizeof(opcoesMenuInicial[0]); i++) {
            printf("%d - %s\n", i+1, opcoesMenuInicial[i]);
        }

        scanf("%d", &indexMenuInicial);

        if(indexMenuInicial == 1) {
            char opcoesMenuSimulacao[6][64] = {"População total", "Nº de pessoas inicialmente infectadas", "Taxa de contágio", "Porcentagem da população infectada", "Efetividade da vacina", "Nº de dias da simulação"};
            float dados[6];

            printf("\nDigite os dados requisitados a seguir:\n");
            for(int i = 0; i < sizeof(opcoesMenuSimulacao) / sizeof(opcoesMenuSimulacao[0]); i++) {

                printf("%s: ", opcoesMenuSimulacao[i]);
                scanf("%f", &dados[i]);
            }

            printf("\nNumeros na variável dados:\n");
            for(int j = 0; j < 6; j++){
                printf("%f\n", dados[j]);
            }

        } else if(indexMenuInicial == 2) {
            printf("Até logo!");
        } else {
            printf("Opção inváida!\n");
        }
    } while(indexMenuInicial != 2 && indexMenuInicial != 1);

    return 0;
}