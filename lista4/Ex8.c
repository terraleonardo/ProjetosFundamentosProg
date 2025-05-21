#include <stdio.h>

int main() {

    int num;
    int resultado = 1;
    char opcao = 'n';

    do {
        printf("\nEntre com um número: ");
        scanf("%d", &num);

        int numeros[num];

        for(int i = 0; i < num; i++) {
            numeros[i] = i+1;
        }

        for(int i = 1; i < num; i++) {
            resultado *= numeros[i];
            // numeros[i] = 0;
        }

        printf("\nO fatorial de %d é %d", num, resultado);
        do {
            printf("\nCalcular outro resultado (s/n)? ");
            scanf(" %c", &opcao);
            if(opcao != 'n' && opcao != 'N' && opcao != 's' && opcao != 'S') {
                printf("\nDigite uma entrada válida! ");
            }
        } while(opcao != 'n' && opcao != 'N' && opcao != 's' && opcao != 'S');
        resultado = 1;
    } while(opcao != 'n' && opcao != 'N');

    return 0;
}