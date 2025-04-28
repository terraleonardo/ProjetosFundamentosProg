#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int min(int a, int b) { // Função minimo
    return (a < b) ? a : b;
}

int sortearNumero() { // Função de sorteio (Seed na linha 79 explicada)
    return (rand() % 100) + 1;
}

int main() {
    char opcoesMenuInicial[2][32] = {"Nova Simulação", "Sair do programa"}; // Array com opções do menu inicial
    int indexMenuInicial; // Índices das opções do menu inicial

    do { // Repetição 'do while' (re)printa o menu inicial enquanto o usuário não digitar uma opção válida (ver linha 122)
        printf("Digite a opção desejada:\n");

        for(int i = 0; i < sizeof(opcoesMenuInicial) / sizeof(opcoesMenuInicial[0]); i++) { // 'sizeof(opcoesMenuInicial) / sizeof(opcoesMenuInicial[0])' retorna tamanho do array
            printf("%d - %s\n", i+1, opcoesMenuInicial[i]);
        }

        scanf("%d", &indexMenuInicial); 

        if(indexMenuInicial == 1) {
            char opcoesMenuSimulacao[6][64] = { // Array com opções do menu da simulação
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
                
                if(i == 0 || i == 1 || i == 5) { // Entradas inteiras
                    scanf("%d", &dadosInt[intIndex]);
                    intIndex++; // Aumenta índice do array de dados inteiros (dadosInt) para o próximo armazenamento
                } 
                else if(i == 2 || i == 3 || i == 4) { // Entradas float
                    scanf("%f", &dadosFloat[floatIndex]);
                    floatIndex++; // Aumenta índice do array de dados decimais (dadosFloat) para o próximo armazenamento
                }
            }
            // Populando as variáveis com seus respectivos dados, obtidos das entradas do usuário (FALTA FAZER VALIDAÇÃO DE TIPO DAS ENTRADAS)
            int populacaoTotal = dadosInt[0];
            int inicialmenteInfectados = dadosInt[1];
            float taxaContagio = dadosFloat[0];
            float porcentagemVacinada = dadosFloat[1];
            float efetividadeVacina = dadosFloat[2];
            int diasSimulacao = dadosInt[2];

            int infectados = dadosInt[1];

            printf("Dia 1: %d infectados", infectados); // Primeiro print fora do loop da simulação pois não altera os dados iniciais

            srand(time(NULL)); // GERAR A SEED AQUI, E NÃO DENTRO DO LOOP, FEZ COM QUE CADA DIA GERASSE UM EVENTO DIFERENTE (:D)

            for(int i = 1; i <= diasSimulacao; i++) {
                if(i>1) {
                    int numero = sortearNumero(); // [RESOLVIDO, VER LINHA 69] AJUSTAR PARA SORTEAR NUMERO DIFERENTE A CADA INSTANCIA DO LOOP
                    int evento;

                    char *nomeEvento = malloc(32);

                    if(numero > 0 && numero <= 15) { // Seletor de evento aleatório
                        evento = 25;
                        strcpy(nomeEvento, "Aglomeracao!");
                    } else if(numero > 15 && numero <= 25) {
                        evento = -20;
                        strcpy(nomeEvento, "Isolamento voluntario!");
                    } else if(numero > 25 && numero <= 30) {
                        evento = -30;
                        strcpy(nomeEvento, "Midia gera alerta!");
                    } else if(numero > 30 && numero <= 35) {
                        evento = 50;
                        strcpy(nomeEvento, "Mutacao mais contagiosa!");
                    } else {
                        evento = 0;
                    }
                    // Variáveis para os cálculos
                    int novos_infectados = abs(inicialmenteInfectados * ((taxaContagio+evento)/100));

                    int nao_vacinados_saudaveis = (populacaoTotal - inicialmenteInfectados) - (1-(porcentagemVacinada/100));

                    int vacinados_saudaveis = (populacaoTotal - inicialmenteInfectados)*(porcentagemVacinada/100);

                    int suscetiveis = nao_vacinados_saudaveis + vacinados_saudaveis * (1-(efetividadeVacina/100));

                    int novosInfectados = min(novos_infectados, suscetiveis);

                    infectados += novosInfectados;

                    if(evento == 0) {
                        printf("\nDia %d: %d infectados (+%d)", i, infectados, novosInfectados);
                    } else {
                        printf("\nDia %d: %d infectados (+%d) (evento: %s)", i, infectados, novosInfectados, nomeEvento);
                    }

                    // FAZER IF PARA VER SE O Nº SUSCETIVEIS JA ATINGIRAM O Nº DE INFECTADOS
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