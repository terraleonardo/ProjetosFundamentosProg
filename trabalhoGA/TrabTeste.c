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

    do { // (re)Printa o menu inicial equanto o usuário não digitar uma opção váida
        printf("Digite a opção desejada:\n");

        for(int i = 0; i < sizeof(opcoesMenuInicial) / sizeof(opcoesMenuInicial[0]); i++) {
            printf("%d - %s\n", i+1, opcoesMenuInicial[i]);
        }

        scanf("%d", &indexMenuInicial);

        if(indexMenuInicial == 1) {
            char opcoesMenuSimulacao[6][64] = {"População total", "Nº de pessoas inicialmente infectadas", "Taxa de contágio", "Porcentagem da população infectada", "Efetividade da vacina", "Nº de dias da simulação"};
            int dadosInt[3] = {0, 0, 0};
            float dadosFloat[3] = {0, 0, 0};

            printf("\nDigite os dados requisitados a seguir:\n");
            for(int i = 0; i < sizeof(opcoesMenuSimulacao) / sizeof(opcoesMenuSimulacao[0]); i++) {

                if(i==0 || i==1 || i==5) {
                    printf("%s: ", opcoesMenuSimulacao[i]);
                    scanf("%d", &dadosInt[i]);
                    
                } else if(i==2 || i==3 || i==4) {
                    printf("%s: ", opcoesMenuSimulacao[i]);
                    scanf("%f", &dadosFloat[i]);
                }
            }

            printf("\nNumeros na variável dadosInt:\n");
            for(int j = 0; j < 3; j++){
                printf("[%d] %d\n", j, dadosInt[j]); //CUIDAR O FORMAT SPECIFIER DO PRINTF (%f =/= %d)
            }

            printf("\nNumeros na variável dadosFloat:\n");
            for(int h = 0; h < 3; h++){
                printf("[%d] %f\n", h, dadosFloat[h]);
            }


        } else if(indexMenuInicial == 2) {
            printf("Até logo!");
        } else {
            printf("Opção inváida!\n");
        }
    } while(indexMenuInicial != 2 && indexMenuInicial != 1);

    return 0;
}