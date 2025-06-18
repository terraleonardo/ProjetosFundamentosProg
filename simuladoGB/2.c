#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int sortear(int inicio, int fim) {
    return inicio + rand() % (fim - inicio + 1);
}

int main() {
    srand(time(NULL));

    #define LINHAS 5
    #define COLUNAS 5

    int matriz[LINHAS][COLUNAS] = {0}, valores[5] = {0};

    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = sortear(0, 4);
            printf("%d\t", matriz[i][j]);
            switch(matriz[i][j]) {
                case 0:
                valores[0]++;
                break;

                case 1:
                valores[1]++;
                break;

                case 2:
                valores[2]++;
                break;

                case 3:
                valores[3]++;
                break;

                case 4:
                valores[4]++;
                break;
            
                default:
                break;
            }
        }
        printf("\n");
    }

    for(int i = 0; i < 5; i++) {
        printf("\nQuantidade de valores %d: %d", i, valores[i]);
    }
    printf("\n");

    return 0;
}