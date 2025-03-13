#include <stdio.h>

int main() {

    float cotacaoDolar;
    float qtdDolar;
    float valorCompra = cotacaoDolar*qtdDolar;

    printf("Digite a cotação atual do dólar para reais: ");
    scanf("%f", &cotacaoDolar);

    printf("$1 USD equivale a R$%f BRL. Quantos dólares você gostaria de comprar?", cotacaoDolar);
    scanf("%f", &qtdDolar);

    printf("Para comprar $%f USD, serão cobrados R$%f BRL\n", qtdDolar, qtdDolar*cotacaoDolar);

    return 0;
}