#include <stdio.h>
#include <math.h>

// void printaMenu(char opcoes[]) {
//     printf("Digite a opção desejada:");
//     for(int i = 0; i < sizeof(opcoes) / sizeof(opcoes[0]); i++) {
//         printf("%d - %s\n", i+1, opcoes[i]);
//     }
// }

// tentando fazer função que retorne tamanho do array
/* int tamanho(int array[]) {
    return sizeof(array) / sizeof(array[0]);
} */

int main() {
    char opcoesMenuInicial[2][32] = {"Nova Simulação", "Sair do programa"};
    int indexMenuInicial;

    do {
        printf("Digite a opção desejada:\n");

        for(int i = 0; i < sizeof(opcoesMenuInicial) / sizeof(opcoesMenuInicial[0]); i++) {
            printf("%d - %s\n", i+1, opcoesMenuInicial[i]);
        }

        scanf("%d", &indexMenuInicial);

        if(indexMenuInicial == 1) {
            char opcoesMenuSimulacao[6][64] = {
                "População total", 
                "Nº de pessoas inicialmente infectadas", 
                "Taxa de contágio (%)", 
                "Porcentagem da população vacinada (%)", 
                "Efetividade da vacina (%)", 
                "Nº de dias da simulação"
            };
            
            int dadosInt[3] = {0, 0, 0};
            float dadosFloat[3] = {0, 0, 0};
            
            int intIndex = 0; // Índice para dadosInt
            int floatIndex = 0; // Índice para dadosFloat

            printf("\nDigite os dados requisitados a seguir:\n");
            for(int i = 0; i < sizeof(opcoesMenuSimulacao) / sizeof(opcoesMenuSimulacao[0]); i++) {
                printf("%s: ", opcoesMenuSimulacao[i]);
                
                if(i == 0 || i == 1 || i == 5) { // Valores inteiros
                    scanf("%d", &dadosInt[intIndex]);
                    intIndex++; //Aumenta índice do array de dados inteiros (dadosInt) para o próximo armazenamento
                } 
                else if(i == 2 || i == 3 || i == 4) { // Valores float
                    scanf("%f", &dadosFloat[floatIndex]);
                    floatIndex++; //Aumenta índice do array de dados decimais (dadosFloat) para o próximo armazenamento
                }
            }

            printf("\nDados na variável dadosInt:\n");
            for(int j = 0; j < 3; j++) {
                printf("[%d] %d\n", j, dadosInt[j]);
            }

            printf("\nDados na variável dadosFloat:\n");
            for(int h = 0; h < 3; h++) {
                printf("[%d] %.2f\n", h, dadosFloat[h]);
            }

        } else if(indexMenuInicial == 2) {
            printf("Até logo!");
        } else {
            printf("Opção inválida!\n");
        }
    } while(indexMenuInicial != 2 && indexMenuInicial != 1);

    return 0;
}