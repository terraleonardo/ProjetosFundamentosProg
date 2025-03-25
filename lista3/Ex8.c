#include <stdio.h>

int main() {

    float valorProduto;
    float porcentagemLucro;

    printf("Digite o valor da compra: R$");
    scanf("%f", &valorProduto);

    if (valorProduto < 20) {
        porcentagemLucro = 0.45;
    } else if (valorProduto <= 50) {
        porcentagemLucro = 0.35;
    } else porcentagemLucro = 0.25;

    printf("O valor da venda é: R$%f\n", valorProduto*(1+porcentagemLucro));

    return 0;
}