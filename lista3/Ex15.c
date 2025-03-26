#include <stdio.h>

int main() {

    float valorProduto;
    float valorVenda;
    int opcao;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorProduto);

    printf("==============================\n");
    printf("[1] À vista em dinheiro (-15%%)\n[2] À vista no cartão de crédito (-10%%)\n[3] Em 2x sem juros\n[4] Em 3x com juros (10%%)\nDigite a forma de pagamento: ");
    scanf("%d", &opcao);

    printf("Valor final da compra: ");
    switch (opcao) {
    case 1:
        valorVenda = valorProduto*0.85;
        printf("1x de R$%f", valorVenda);
        break;

    case 2:
        valorVenda = valorProduto*0.9;
        printf("1x de R$%f", valorVenda);
        break;

    case 3:
        valorVenda = valorProduto;
        printf("2x de R$%f", valorVenda/2);
        break;

    case 4:
        valorVenda = valorProduto*1.1;
        printf("3x de R$%f", valorVenda/3);
        break;

    default:
        break;
    }

    printf("\n");
    return 0;
}