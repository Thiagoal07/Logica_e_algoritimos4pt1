#include <stdio.h>

int main() {
    int A[6];
    int c;

    for (c = 0; c < 6; c++) {
        scanf("%d", &A[c]);
    }

    for (c = 5; c >= 0; c--) {
        printf("%d\n", A[c]);
    }

    return 0;
}