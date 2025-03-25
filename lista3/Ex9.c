#include <stdio.h>

int main() {

    float cotacaoEuroPReal;
    float cotacaoDolarPReal;
    int opcao;

    printf("Digite a cotação do Euro para Real hoje: €1 = R$");
    scanf("%f", &cotacaoEuroPReal);

    printf("Digite a cotação do Dólar para Real hoje: US$1 = R$");
    scanf("%f", &cotacaoDolarPReal);

    printf("Digite a opção desejada:\n(1) Converter Real para Euro;\n(2) Converter Real para Dólar;\n(3) Converter Euro para Dólar;\n(4) Converter Euro para Real;\n(5) Converter Dólar para Euro;\n(6) Converter Dólar para Real\n");
    scanf("%d", &opcao);

    float valorEntrada;

    switch (opcao) {
    case 1:
        printf("Real para Euro.\nDigite o valor em reais: R$");
        scanf("%f", &valorEntrada);
        printf("R$%f = €%f\n", valorEntrada, (valorEntrada*(1/cotacaoEuroPReal)));
        break;
    
    case 2:
        printf("Real para Dólar.\nDigite o valor em reais: R$");
        scanf("%f", &valorEntrada);
        printf("R$%f = €%f\n", valorEntrada, (valorEntrada*(1/cotacaoDolarPReal)));
        break;
    
    case 3:
        printf("Euro para Dólar.\nDigite o valor em euros: €");
        scanf("%f", &valorEntrada);
        printf("R$%f = €%f\n", valorEntrada, (cotacaoEuroPReal/cotacaoDolarPReal));
        break;
    
    case 4:
        printf("Euro para Real.\nDigite o valor em euros: €");
        scanf("%f", &valorEntrada);
        printf("R$%f = €%f\n", valorEntrada, (valorEntrada*cotacaoDolarPReal));
        break;
    
    case 5:
        printf("Dólar para Euro.\nDigite o valor em dólares: US$");
        scanf("%f", &valorEntrada);
        printf("R$%f = €%f\n", valorEntrada, (cotacaoDolarPReal/cotacaoEuroPReal));
        break;
    
    case 6:
        printf("Dólar para Real.\nDigite o valor em dólares: US$");
        scanf("%f", &valorEntrada);
        printf("R$%f = €%f\n", valorEntrada, (valorEntrada*cotacaoEuroPReal));
        break;
    
    default:
        break;
    }

    return 0;
}