#include <stdio.h>

int main() {

    float precoCamiseta = 25;
    float precoCalca = 100;
    float precoCinto = 40;

    int qtdCamiseta;
    int qtdCalca;
    int qtdCinto;

    float porcDesconto = 0.1;

    printf("Digite a quantidade de camisetas compradas: ");
    scanf("%d", &qtdCamiseta);

    printf("Digite a quantidade de calças compradas: ");
    scanf("%d", &qtdCalca);

    printf("Digite a quantidade de cintos comprados: ");
    scanf("%d", &qtdCinto);

    float totalCompra = precoCamiseta*qtdCamiseta+precoCalca*qtdCalca+precoCinto*qtdCinto;

    printf("O valor total da compra é: R$%f. Com o desconto de %f%, o valor fica R$%f", totalCompra, porcDesconto*100, totalCompra*(1-porcDesconto));

    return 0;
}