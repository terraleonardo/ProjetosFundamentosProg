#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int min(int a, int b) { // Função menor entre 'a' e 'b'
    return (a < b) ? a : b;
}

int sortearNumero() { // Função de sorteio
    return (rand() % 100) + 1;
}

void verificaEvento(int evento, char *nomeEvento) {
    if(evento != 0) {
        printf(" (evento: %s)", nomeEvento);
    }
}

int main() {
    //---------- MENU INICIAL + ENTRADA DE DADOS ----------
    char opcoesMenuInicial[2][32] = {"Nova Simulacao", "Sair do programa"}; // Array com opções do menu inicial
    int indexMenuInicial; // Índices das opções do menu inicial
    int suscetiveis, vacinados_saudaveis, nao_vacinados_saudaveis, novos_infectados, vacinados_infectados;

    do { // Repetição 'do while' (re)printa o menu inicial enquanto o usuário não digitar uma opção válida
        printf("Digite a opcao desejada:\n");

        for(int i = 0; i < sizeof(opcoesMenuInicial) / sizeof(opcoesMenuInicial[0]); i++) { // 'sizeof(opcoesMenuInicial) / sizeof(opcoesMenuInicial[0])' retorna tamanho do array
            printf("%d - %s\n", i+1, opcoesMenuInicial[i]);
        }

        scanf("%d", &indexMenuInicial);

        if(indexMenuInicial == 1) {
            char opcoesMenuSimulacao[6][64] = { // Array com opções do menu da simulação
                "\nPopulacao total",
                "Numero de pessoas inicialmente infectadas",
                "Taxa de contagio (%)",
                "Taxa da populacao vacinada (%)",
                "Efetividade da vacina (%)",
                "Numero de dias da simulacao"
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
            // Populando as variáveis com seus respectivos dados, obtidos das entradas do usuário
            int populacaoTotal = dadosInt[0];
            int inicialmenteInfectados = dadosInt[1];
            float taxaContagio = dadosFloat[0];
            float porcentagemVacinada = dadosFloat[1];
            float efetividadeVacina = dadosFloat[2];
            int diasSimulacao = dadosInt[2];
            int infectados = dadosInt[1];



            //---------- SIMULAÇÃO DE CRESCIMENTO ----------
            printf("\nDia 1: %d infectados", infectados); // Primeiro print fora do loop da simulação pois não altera os dados iniciais

            srand(time(NULL));

            for(int i = 1; i <= diasSimulacao; i++) {   //repeticao para rodar todos os dias da simulacao até último dia digitado pelo usuario
                if(i>1) {   //a partir do segundo dia é possivel ocorrer Condicoes Ambientais (eventos aleatorios)
                    int numero = sortearNumero();
                    int evento;

                    char *nomeEvento = malloc(32);  //variavel para nome do evento aleatorio

                    if(numero > 0 && numero <= 15) { // Seletor de evento aleatório
                        evento = 25;                //efeito na taxa de contagio para cada evento da tabela do item 4
                        strcpy(nomeEvento, "Aglomeracao!"); //adiciona qual evento aleatorio ocorreu na variavel de nome do evento
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
                    // Variáveis para os cálculos da simulacao de crescimento
                    novos_infectados = abs(inicialmenteInfectados * ((taxaContagio+evento)/100));

                    vacinados_infectados = (populacaoTotal - ((populacaoTotal * (1-(porcentagemVacinada/100))) + vacinados_saudaveis));

                    nao_vacinados_saudaveis = (populacaoTotal - inicialmenteInfectados) - (1-(porcentagemVacinada/100));

                    vacinados_saudaveis = (populacaoTotal - inicialmenteInfectados)*(porcentagemVacinada/100);

                    suscetiveis = nao_vacinados_saudaveis + vacinados_saudaveis * (1-(efetividadeVacina/100));

                    novos_infectados = min(novos_infectados, suscetiveis);

                    if (infectados + novos_infectados > populacaoTotal) { // Verificação para quando o total de infectados ultrapassar a população total
                        novos_infectados = populacaoTotal - infectados;
                    }

                    infectados += novos_infectados; //incrementa o valor de infectados

                    if (populacaoTotal <= infectados) { // Verificação para quando toda a população for infectada
                        printf("\nDia %d: %d infectados (+%d)", i, populacaoTotal, novos_infectados);

                        vacinados_infectados = vacinados_saudaveis; //caso todos forem infectados, todos vacinados foram infectados tambem

                        verificaEvento(evento, nomeEvento); //chamada de funcao para verificar evento

                        printf("\nA populacao inteira foi infectada\n");    //imprime na tela a mensagem de resultado
                        break;
                    }

                    printf("\nDia %d: %d infectados (+%d)", i, infectados, novos_infectados);   //mensagem de resultado da simulacao na tela

                    verificaEvento(evento, nomeEvento);
                }
            }


            //---------- EXIBIÇÃO DE RESULTADOS ----------
            printf("\n\nTotal de infectados: %d", infectados);

            printf("\nPopulacao vacinada: %d", vacinados_saudaveis);

            printf("\nVacinados infectados: %d", vacinados_infectados);

            printf("\nPopulacao saudavel: %d", (populacaoTotal - infectados));


        //---------- VALIDAÇAO DO MENU INICIAL  ----------
        } else if(indexMenuInicial == 2) {
            printf("Ate logo!");
        } else {
            printf("Opcao inválida!\n");
        }

    } while(indexMenuInicial != 2 && indexMenuInicial != 1);

    return 0;
}