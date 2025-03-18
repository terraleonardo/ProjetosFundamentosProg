#include <stdio.h>

int main() {

    double precoSmartphone = 1000;
    double precoTablet = 1500;
    int qtdSmartphone;
    int qtdTablet;
    
    printf("Digite a quantidade de smartphones vendida hoje: ");
    scanf("%d", &qtdSmartphone);

    printf("Digite a quantidade de tablets vendida hoje: ");
    scanf("%d", &qtdTablet);

    printf("O total arrecadado com a venda de aparelhos móveis hoje foi: R$%f.\n", (precoSmartphone*qtdSmartphone+precoTablet*qtdTablet));
    
    return 0;
}