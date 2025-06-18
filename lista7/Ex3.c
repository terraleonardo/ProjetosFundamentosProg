#include <stdio.h>

float mediaUnisinos(float notaGA, int notaGB) {
    return (notaGA*0.33 + notaGB*0.67);
}

int main() {
    #define NOTA_GA 4.5
    #define NOTA_GB 8.0

    printf("\nGrau final (GA=%.1f GB=%.1f): %.1f", NOTA_GA, NOTA_GB, mediaUnisinos(NOTA_GA, NOTA_GB));
    
    printf("\n");

    return 0;
}