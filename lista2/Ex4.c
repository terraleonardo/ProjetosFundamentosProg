#include <stdio.h>

int main() {

    double notaGA;
    double notaGB;

    printf("Digite sua nota no grau A: ");
    scanf("%lf", &notaGA);

    printf("Digite sua nota no grau B: ");
    scanf("%lf", &notaGB);

    double notaFinal = (notaGA*3.33 + notaGB*6.67)/10;
    
    if(notaFinal >= 6) {
        printf("Sua nota final no semestre é %lf. Parabéns!\n", notaFinal);
    } else {
        printf("Sua nota final no semestre é %lf. Vai precisar fazer grau C! :(\n", notaFinal);
    }

    return 0;
}