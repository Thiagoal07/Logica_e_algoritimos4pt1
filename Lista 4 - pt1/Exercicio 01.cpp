#include <stdio.h>

int main() {
    int A[6];
    int soma;

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    soma = A[0] + A[1] + A[5];

    printf("Soma: %d\n", soma);

    A[4] = 100;

    for (int c = 0; c < 6; c++) {
        printf("%d\n", A[c]);
    }

    return 0;
}