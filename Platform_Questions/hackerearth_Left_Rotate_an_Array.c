#include <stdio.h>

int main(void) {
    int n, k;
    static int a[200005];

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    k %= n;
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", a[(i + k) % n]);
    }
    printf("\n");
    return 0;
}
