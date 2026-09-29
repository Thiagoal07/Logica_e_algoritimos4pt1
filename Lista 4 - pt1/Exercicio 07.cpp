#include <stdio.h>

int main() {
    int A[10];
    int c, maior, posicao;

    for (c = 0; c < 10; c++) {
        scanf("%d", &A[c]);
    }

    maior = A[0];
    posicao = 0;

    for (c = 1; c < 10; c++) {
        if (A[c] > maior) {
            maior = A[c];
            posicao = c;
        }
    }

    printf("Maior elemento: %d\n", maior);
    printf("Posicao: %d\n", posicao);

    return 0;
}