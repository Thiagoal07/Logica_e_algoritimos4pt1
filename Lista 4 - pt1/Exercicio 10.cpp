#include <stdio.h>

int main() {
    float notas[15];
    float soma = 0, media;
    int c;

    for (c = 0; c < 15; c++) {
        scanf("%f", &notas[c]);
        soma += notas[c];
    }

    media = soma / 15;

    printf("Notas:\n");

    for (c = 0; c < 15; c++) {
        printf("%.2f\n", notas[c]);
    }

    printf("Media geral: %.2f\n", media);

    return 0;
}