#include <stdio.h>

#define MAX 100

int main(void) {
    int r, c, m[MAX][MAX], peaks = 0;

    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int isPeak = 1;

            if (i > 0     && m[i - 1][j] >= m[i][j]) isPeak = 0;
            if (i < r - 1 && m[i + 1][j] >= m[i][j]) isPeak = 0;
            if (j > 0     && m[i][j - 1] >= m[i][j]) isPeak = 0;
            if (j < c - 1 && m[i][j + 1] >= m[i][j]) isPeak = 0;

            if (isPeak)
                peaks++;
        }
    }
    printf("%d\n", peaks);
    return 0;
}
