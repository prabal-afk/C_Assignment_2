#include <stdio.h>

#define MAX 10000

int main(void) {
    int n;
    long long a[MAX], best = -1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long diff = a[i] - a[j];
            if (diff < 0) diff = -diff;
            if (best == -1 || diff < best)
                best = diff;
        }
    }
    printf("%lld\n", best);
    return 0;
}
