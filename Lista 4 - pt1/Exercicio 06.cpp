#include <stdio.h>

int main() {
    int A[10];
    int c, maior, menor;

    for (c = 0; c < 10; c++) {
        scanf("%d", &A[c]);
    }

    maior = A[0];
    menor = A[0];

    for (c = 1; c < 10; c++) {
        if (A[c] > maior) {
            maior = A[c];
        }

        if (A[c] < menor) {
            menor = A[c];
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}