#include <stdio.h>
#include <string.h>

int main() {

    char nomes[5][64];
    char aux[64]; // Variavel axuiliar para alocar um nome na hora de reordenar

    printf("\nDigite cinco nomes, separando-os por espaços ou enter (use somente caracteres mínusculos ou somente maiúsculos): ");
    for(int i = 0; i < 5; i++) {
        scanf("%s", &nomes[i]);
    }

    // for(int i = 0; i < 5; i++) { // TESTES
    //     printf("\n%s", nomes[i]);
    // }

    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            if(strcmp(nomes[j-1], nomes[j]) > 0) {
                strcpy(aux, nomes[j-1]);
                strcpy(nomes[j-1], nomes[j]);
                strcpy(nomes[j], aux);
            }
        }
    }

    printf("\n%s", nomes[0]);

    return 0;
}