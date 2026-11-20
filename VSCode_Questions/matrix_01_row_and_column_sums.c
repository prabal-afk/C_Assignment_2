#include <stdio.h>

#define MAX 100

int main(void) {
    int r, c;
    long long m[MAX][MAX], rowSum[MAX] = {0}, colSum[MAX] = {0};

    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%lld", &m[i][j]);
            rowSum[i] += m[i][j];
            colSum[j] += m[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        if (i > 0) printf(" ");
        printf("%lld", rowSum[i]);
    }
    printf("\n");
    for (int j = 0; j < c; j++) {
        if (j > 0) printf(" ");
        printf("%lld", colSum[j]);
    }
    printf("\n");
    return 0;
}
