#include <stdio.h>

int main() {

    int v[5];
    int tamanhoV = (sizeof(v) / sizeof(v[0]));

    printf("Digite 5 valores, separando-os por espaços ou enter: \n");
    for(int i = 0; i < tamanhoV; i++) {
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < tamanhoV; i++) {
        printf("\n%d x %d = %d", v[i], i, v[i]*i);
    }

    return 0;
}