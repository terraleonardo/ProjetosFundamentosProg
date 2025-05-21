#include <stdio.h>

int main() {

    int base;
    char caracter;

    printf("\nEntre com um número: ");
    scanf("%d", &base);
    printf("\nEntre com um caracter: ");
    scanf(" %c", &caracter);

    for(int i = 1; i <= base; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%c", caracter);
        }
        printf("\n");
    }

    return 0;
}