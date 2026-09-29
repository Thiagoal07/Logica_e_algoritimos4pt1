#include <stdio.h>

int main() {
    int A[8];
    int X, Y, soma;
    int c;

    for (c = 0; c < 8; c++) {
        scanf("%d", &A[c]);
    }

    scanf("%d", &X);
    scanf("%d", &Y);

    soma = A[X] + A[Y];

    printf("Soma: %d\n", soma);

    return 0;
}