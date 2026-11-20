#include <stdio.h>

int main(void) {
    int n, found = 0;
    scanf("%d", &n);

    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            long long sum = (long long)a * a + (long long)b * b;

            /* find c with c*c == sum by integer search (no sqrt) */
            int c = b + 1;
            while (c <= n && (long long)c * c < sum)
                c++;

            if (c <= n && (long long)c * c == sum) {
                printf("%d %d %d\n", a, b, c);
                found = 1;
            }
        }
    }
    if (!found)
        printf("None\n");
    return 0;
}
