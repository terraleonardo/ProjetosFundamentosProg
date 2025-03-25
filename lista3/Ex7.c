#include <stdio.h>

int main() {

    float salarioBase;
    float desconto = 0.11;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salarioBase);

    float aplicaDesconto() {
        if(salarioBase*desconto <= 318.2) {
            return salarioBase*(1-desconto);
        } else return (salarioBase - 318.2);
    }

    printf("O salário será: R$%f\n", aplicaDesconto());

    return 0;
}