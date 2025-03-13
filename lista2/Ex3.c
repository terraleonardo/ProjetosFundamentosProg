#include <stdio.h>

int main() {

    double precoQuilo = 40.00;
    double pesoPrato;

    printf("Digite o peso do prato do cliente, em quilos: ");
    scanf("%lf", &pesoPrato);

    printf("O prato custará R$%lf\n", precoQuilo*pesoPrato);

    return 0;
}