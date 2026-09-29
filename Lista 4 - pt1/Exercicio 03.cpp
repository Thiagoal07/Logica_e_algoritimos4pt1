#include <stdio.h>

int main() {
    float A[10], B[10];
    int c;

    for (c = 0; c < 10; c++) {
        scanf("%f", &A[c]);
    }

    for (c = 0; c < 10; c++) {
        B[c] = A[c] * A[c];
    }

    for (c = 0; c < 10; c++) {
        printf("%.2f\n", B[c]);
    }

    return 0;
}