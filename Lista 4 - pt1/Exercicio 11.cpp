#include <stdio.h>

int main() {
    float A[10];
    float somaPositivos = 0;
    int negativos = 0;
    int c;

    for (c = 0; c < 10; c++) {
        scanf("%f", &A[c]);

        if (A[c] < 0) {
            negativos++;
        } else if (A[c] > 0) {
            somaPositivos += A[c];
        }
    }

    printf("Quantidade de negativos: %d\n", negativos);
    printf("Soma dos positivos: %.2f\n", somaPositivos);

    return 0;
}