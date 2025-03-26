#include <stdio.h>

int main() {

    float valorBase = 300;
    int qtdDpd;

    printf("Seu plano de saúde básico custará R$300. Valores adicionais podem ser cobrados para a adição de dependentes ao plano.\nQuantos dependentes você possui? (0 para nenhum): ");
    scanf("%d", &qtdDpd);

    if(qtdDpd > 0) {

        int dependentes[qtdDpd];
        int dependentesLength = sizeof(dependentes) / sizeof(dependentes[0]);
        float adicionaisDependentes[qtdDpd];

        for (int i = 0; i < dependentesLength; i++) {

            printf("Digite a idade do %dº dependente, em anos: ", i+1);
            scanf("%d", &dependentes[i]);

            if(dependentes[i] < 10) {
                adicionaisDependentes[i] = 100;
            } else if(dependentes[i] >= 10 && dependentes[i] <=30) {
                adicionaisDependentes[i] = 220;
            } else if(dependentes[i] >= 31 && dependentes[i] <=60) {
                adicionaisDependentes[i] = 395;
            } else if(dependentes[i] > 60) {
                adicionaisDependentes[i] = 480;
            }
        }

        float valorTotal = valorBase;

        for (int i = 0; i < dependentesLength; i++) {

            printf("\n[D%d] Idade: %d anos | Adicional: +R$%f", i+1, dependentes[i], adicionaisDependentes[i]);
            valorTotal += adicionaisDependentes[i];
        }

        printf("\n\nValor base do plano: R$300.00");
        printf("\nO valor total do seu plano, contando os adicionais dos dependentes, é: R$%f", valorTotal);
    } else printf("O valor total do seu plano é: R$%f", valorBase);

    printf("\n");
    return 0;
}