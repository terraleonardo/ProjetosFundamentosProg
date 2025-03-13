#include <stdio.h>

int main() {

    double precoLitro;
    double valorCompra;

    printf("Digite o preço do litro da gasolina: ");
    scanf("%lf", &precoLitro);

    printf("Digite o valor que o cliente quer pagar: ");
    scanf("%lf", &valorCompra);

    printf("Serão abastecidos %lf litros de combustível.\n", valorCompra/precoLitro);

    return 0;
}