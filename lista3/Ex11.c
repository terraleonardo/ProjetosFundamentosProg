#include <stdio.h>

int main() {

    int cedulas[] = {100, 50, 20, 10, 5, 1};
    int valor;
    int soma;

    printf("Digite o valor: R$");
    scanf("%d", &valor);

    soma = valor;

    for (int i = 0; i < sizeof(cedulas)/sizeof(cedulas[0]); i++) {
        int qtd = soma/cedulas[i]; // soma/cedulas[i] faz a *divisão inteira* entre o valor e a cédula atual, retornando a quantidade daquela cédula

        if (qtd > 0) {
            printf("%d nota(s) de R$%d\n", qtd, cedulas[i]);
        }
        
        soma %= cedulas[i]; // divide a soma atual pela cédula atual e retorna o *restante* a ser completado pelas próximas cédulas
    }

    return 0;
}