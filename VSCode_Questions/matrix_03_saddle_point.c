#include <stdio.h>

#define MAX 100

int main(void) {
    int r, c, m[MAX][MAX];

    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int minInRow = 1, maxInCol = 1;

            for (int k = 0; k < c; k++)
                if (m[i][k] < m[i][j]) minInRow = 0;
            for (int k = 0; k < r; k++)
                if (m[k][j] > m[i][j]) maxInCol = 0;

            if (minInRow && maxInCol) {
                printf("%d %d %d\n", i, j, m[i][j]);   /* row and column are 0-based */
                return 0;
            }
        }
    }
    printf("None\n");
    return 0;
}
