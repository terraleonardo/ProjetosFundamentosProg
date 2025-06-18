#include<stdio.h>
#include<stdlib.h>

int main() {

    char string[128];

    printf("Digite a frase: ");
    fgets(string, sizeof(string), stdin);

    printf("\nFrase digitada: %s", string);

    for(int i = 0; i < (sizeof(string) / sizeof(string[0])); i++) {
        if(string[i] == 'r') {
            string[i] = 'l';
        } else if(string[i] == 'R') {
            string[i] = 'L';
        }
    }

    printf("\nFrase versão Cebolinha: %s", string);

    printf("\n");

    return 0;
}