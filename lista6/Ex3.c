#include <stdio.h>

int main() {

    #define LINHAS 4
    #define COLUNAS 4
    
    int m[LINHAS][COLUNAS];


    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            if(i == j) {
                m[i][j] = 1;
            } else m[i][j] = 0;
        }
    }

    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}