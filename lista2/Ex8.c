#include <stdio.h>

int main() {

    float temperaturaC;
    
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &temperaturaC);

    float temperaturaF = (temperaturaC*1.8) + 32;

    printf("%lf graus celsius são equivalentes a %lf graus farenheit.\n", temperaturaC, temperaturaF);

    return 0;
}