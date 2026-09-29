#include <stdio.h>

int main() {
    int A[10];
    int c, pares = 0;

    for (c = 0; c < 10; c++) {
        scanf("%d", &A[c]);
    }

    for (c = 0; c < 10; c++) {
        if (A[c] % 2 == 0) {
            pares++;
        }
    }

    printf("Quantidade de pares: %d\n", pares);

    return 0;
}