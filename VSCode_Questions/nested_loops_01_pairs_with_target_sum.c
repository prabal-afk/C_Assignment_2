#include <stdio.h>

#define MAX 10000

int main(void) {
    int n;
    long long target, a[MAX];
    int count = 0;

    scanf("%d %lld", &n, &target);
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target)
                count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
