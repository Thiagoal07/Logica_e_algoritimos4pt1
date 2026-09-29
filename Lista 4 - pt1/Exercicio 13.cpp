#include <stdio.h>

int main() {
    int A[5];
    int maior, menor;
    int posMaior, posMenor;
    int c;

    for (c = 0; c < 5; c++) {
        scanf("%d", &A[c]);
    }

    maior = A[0];
    menor = A[0];
    posMaior = 0;
    posMenor = 0;

    for (c = 1; c < 5; c++) {
        if (A[c] > maior) {
            maior = A[c];
            posMaior = c;
        }

        if (A[c] < menor) {
            menor = A[c];
            posMenor = c;
        }
    }

    printf("Posicao do maior: %d\n", posMaior);
    printf("Posicao do menor: %d\n", posMenor);

    return 0;
}