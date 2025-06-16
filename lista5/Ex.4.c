#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    int passosPorDia[7], totalPassos = 0, idxDiasMetaAtingida = 0;
    bool atingiuMeta = false;
    char diasSemana[7][16] = {"Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado"}, diasMetaAtingida[7][16];
    #define QUANTIDADE_DIAS 7

    printf("Digite a quantidade de passos dados em cada dia:\n"); // a. Leia e armazene o número de passos dados em cada um dos 7 dias da semana.
    for(int i = 0; i < QUANTIDADE_DIAS; i++) {
        printf("%s - ", diasSemana[i]);
        scanf("%d", &passosPorDia[i]);
        totalPassos += passosPorDia[i]; // b. Calcule o total de passos dados na semana.
        if(passosPorDia[i] >= 10000) {
            atingiuMeta = true;
            strcpy(diasMetaAtingida[idxDiasMetaAtingida], diasSemana[i]);
            idxDiasMetaAtingida++;
        }
    }

    printf("\nTotal passos na semana: %d", totalPassos);
    printf("\nMédia de passos por dia: %.2f", ((float)totalPassos / QUANTIDADE_DIAS)); // c. Calcule a média diária de passos.
    
    if(atingiuMeta) { // d. Verifique se a pessoa conseguiu atingir a meta de 10.000 passos em algum dos dias. Se sim, informe quais dias a meta foi alcançada.
        printf("\nDias em que a meta de 10.000 passos foi atingida: ");
        for(int i = 0; i < (idxDiasMetaAtingida); i++) {
            printf("\n- %s", diasMetaAtingida[i]);
        }
    } else printf("\nA meta de 10.000 passos em um dia não foi atingida nessa semana.");

    printf("\n");
    return 0;
}