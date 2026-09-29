#include <stdio.h>

int main() {
    float A[5];
    float maior, menor, soma = 0, media;
    int c;

    for (c = 0; c < 5; c++) {
        scanf("%f", &A[c]);
        soma += A[c];
    }

    maior = A[0];
    menor = A[0];

    for (c = 1; c < 5; c++) {
        if (A[c] > maior) {
            maior = A[c];
        }

        if (A[c] < menor) {
            menor = A[c];
        }
    }

    media = soma / 5;

    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}