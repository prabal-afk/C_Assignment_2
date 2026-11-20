#include <stdio.h>

#define MAX 100

int main(void) {
    int n, m[MAX][MAX], symmetric = 1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (m[i][j] != m[j][i])
                symmetric = 0;
        }
    }
    printf(symmetric ? "YES\n" : "NO\n");
    return 0;
}
