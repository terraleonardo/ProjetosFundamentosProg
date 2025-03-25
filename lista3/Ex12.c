#include <stdio.h>

int main() {

    int idade;

    printf("Insira a idade do atleta: ");
    scanf("%d", &idade);

    if(idade >= 5) {
        printf("Categoria: ");
    }

    if(idade >= 5 && idade <= 7) {
        printf("Infantil A");
    } else if(idade > 7 && idade <= 10) {
        printf("Infantil B");
    } else if(idade > 10 && idade <= 13) {
        printf("Juvenil A");
    } else if(idade > 13 && idade <= 17) {
        printf("Juvenil B");
    } else if(idade > 17) {
        printf("Sênior");
    } else printf("Idade inválida.");

    printf("\n");
    return 0;
}