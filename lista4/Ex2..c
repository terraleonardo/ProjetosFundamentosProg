#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

int randomInteger(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {

    int guess;

    printf("Estou pensando em um número de 1 a 10...\n");
    srand(time(0));
    int numero = randomInteger(1, 10);
    sleep(2);
    printf("Tente adivinhá-lo!\n");
    // printf("(%d)\n", numero); // Teste
    for(int i = 3; i >= 1; i--) {
        scanf("%d", &guess);
        if(guess == numero) {
            printf("Parabéns! Você acertou!\n");
            break;
        } else if(guess > numero) {
            printf("%d é maior do que o número que estou pensando... Você tem mais %d tentativas!\n", guess, i-1);
        } else if(guess < numero) {
            printf("%d é menor do que o número que estou pensando... Você tem mais %d tentativas!\n", guess, i-1);
        }
        if(i == 1) printf("Que pena, o número que eu estava pensando era %d!\n", numero);
    }
    return 0;
}