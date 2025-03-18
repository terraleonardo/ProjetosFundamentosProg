#include <stdio.h>

int main() {

    float valorCompra;
    float porcDesconto = 0.15;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    printf("O valor final da compra de R$%f após a aplicação do desconto de 15% é: R$%f.\n", valorCompra, valorCompra*(1-porcDesconto));

    return 0;
}