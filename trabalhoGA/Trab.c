#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int sortearNumero() {
    srand(time(NULL));

    return (rand() % 100) + 1;
}

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

            int populacaoTotal = dadosInt[0];
            int inicialmenteInfectados = dadosInt[1];
            float taxaContagio = dadosFloat[0];
            float porcentagemVacinada = dadosFloat[1];
            float efetividadeVacina = dadosFloat[2];
            int diasSimulacao = dadosInt[2];

            // printf("\nDados na variável dadosInt:\n"); //TESTES
            // for(int j = 0; j < 3; j++) {
            //     printf("[%d] %d\n", j, dadosInt[j]);
            // }

            // printf("\nDados na variável dadosFloat:\n");
            // for(int h = 0; h < 3; h++) {
            //     printf("[%d] %.2f\n", h, dadosFloat[h]);
            // }

            int infectados = dadosInt[1];

            printf("Dia 1: %d infectados", infectados);

            for(int i = 1; i <= diasSimulacao; i++) {
                if(i>1) {
                    int numero = sortearNumero(); // AJUSTAR PARA SORTEAR NUMERO DIFERENTE A CADA INSTANCIA DO LOOP
                    int evento;

                    char *nomeEvento = malloc(32);


                    if(numero > 0 && numero <= 15) {
                        evento = 25;
                        strcpy(nomeEvento, "Aglomeracao");
                    } else if(numero > 15 && numero <= 25) {
                        evento = -20;
                        strcpy(nomeEvento, "Isolamento voluntario");
                    } else if(numero > 25 && numero <= 30) {
                        evento = -30;
                        strcpy(nomeEvento, "Midia gera alerta");
                    } else if(numero > 30 && numero <= 35) {
                        evento = 50;
                        strcpy(nomeEvento, "Mutacao mais contagiosa");
                    } else {
                        evento = 0;
                    }


                    int novos_infectados = abs(inicialmenteInfectados * ((taxaContagio+evento)/100));

                    int nao_vacinados_saudaveis = (populacaoTotal - inicialmenteInfectados) - (1-(porcentagemVacinada/100));

                    int vacinados_saudaveis = (populacaoTotal - inicialmenteInfectados)*(porcentagemVacinada/100);

                    int suscetiveis = nao_vacinados_saudaveis + vacinados_saudaveis * (1-(efetividadeVacina/100));

                    int novosInfectados = min(novos_infectados, suscetiveis);

                    infectados += novosInfectados;

                    if(evento == 0) {
                        printf("\nDia %d: %d infectados (+%d)", i, infectados, novosInfectados); //Falta eventos aleatórios e nº de infectados por dia
                    } else {
                        printf("\nDia %d: %d infectados (+%d) (evento: %s)", i, infectados, novosInfectados, nomeEvento); //Falta eventos aleatórios e nº de infectados por dia
                    }

                    // IF PARA VER SE O Nº SUSCETIVEIS JA ATINGIRAM O Nº DE INFECTADOS
                }
            }



        } else if(indexMenuInicial == 2) {
            printf("Até logo!");
        } else {
            printf("Opção inválida!\n");
        }


    } while(indexMenuInicial != 2 && indexMenuInicial != 1);

    return 0;
}