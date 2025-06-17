#include <stdio.h>

int main() {

    int v1[] = {1, 5, 9, 2, 5}, v2[] = {7, 4, 13, 21, 6}, v3[] = {8, -3, 5, 7, 12};
    int m[3][5];
    int mVezesSete[3][5];

    for(int i = 0; i < 5; i++) {
        m[0][i] = v1[i];
    }
    for(int i = 0; i < 5; i++) {
        m[1][i] = v2[i];
    }
    for(int i = 0; i < 5; i++) {
        m[2][i] = v3[i];
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("[%d]\t", m[i][j]);
            mVezesSete[i][j] = (m[i][j] * 7);
        }
        printf("\n");
    }

    printf("\nMatriz 'm' multiplicada por 7: \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("[%d]\t", mVezesSete[i][j]);
        }
        printf("\n");
    }

    return 0;
}