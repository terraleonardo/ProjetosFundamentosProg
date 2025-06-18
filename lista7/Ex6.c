#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <time.h>

int randomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

void delay(int segundos) {
    int tempo_final = time(NULL) + segundos;
    while (time(NULL) < tempo_final);
}

char ExibirMenu() {
    printf("==========MENU PRINCIPAL==========\n");
    printf("1 - Abrir uma caixa\n");
    printf("2 - Consultar itens\n");
    printf("3 - Sair do programa\n");
    
    char opcao;
    bool valida;
    do {
        printf("Digite uma opcao: ");
        scanf(" %c",&opcao);
        valida = true;
        if (opcao!= '1' && opcao!='2' && opcao!='3') {
            printf("Opcao invalida!\n");
            valida = false;
        }
    } while (valida == false);

    return opcao;
}

void abrirCaixa(int itens[3]) { // cada índice corresponde a um nível de raridade
    printf("\nAbrindo caixa...");
    printf("\n");
    delay(2); // Delay pra dar emoção

    int noSorteado = randomInt(1, 100);
    void msgRaridade(int index) {
        if(index == 0) {
            printf("\nCaixa aberta! Item comum.");
        } else if(index == 1) {
            printf("\nCaixa aberta! Item Raro!");
        } else if(index == 2) {
            printf("\nCaixa aberta! ITEM LENDÁRIO!!!");
        }
    }

    if(noSorteado <= 80) {
        itens[0]++; // comuns
        msgRaridade(0);
    } else if(noSorteado > 80 && noSorteado <= 99) {
        itens[1]++; // raros
        msgRaridade(1);
    } else if(noSorteado > 99 && noSorteado <= 100) {
        itens[2]++; // lendarios
        msgRaridade(2);
    }
    printf("\n\n");
}

void consultarItens(int itens[3]) {
    printf("\nSeu inventário de itens:");
    char raridades[3][16] = {"Comuns", "Raros", "Lendários"};
    for(int i = 0; i < 3; i++) {
        printf("\n%s: %d", raridades[i], itens[i]);
    }
    printf("\n\n");
}

int main() {
    srand(time(NULL));

    int itens[3] = {0};

    char opcao;
    do {
        opcao = ExibirMenu();
        switch(opcao) {
            case '1':
                abrirCaixa(itens);
                break;
            case '2':
                consultarItens(itens);
                break;
            case '3':
                printf("Saindo do programa!\n");
                break;
        }
    } while (opcao != '3');
    return 0;
}