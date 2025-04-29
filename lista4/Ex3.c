#include <stdio.h>

int main() {

    int numero;
    char resposta = 'n';

    do {
        printf("Entre com um número de 1 a 9: ");
        scanf("%d", &numero);
        if(numero > 9 || numero < 1) {
            printf("Entrada inválida!\n");
        } else {
            for(int i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", numero, i, (numero*i));
            }
            printf("Calcular outro número (s/n)? ");
            scanf(" %c", &resposta); // Espaço antes de %c limpa o buffer do scanf
        }
    } while(resposta == 's' || resposta == 'S' || numero > 9 || numero < 1);

    return 0;
}