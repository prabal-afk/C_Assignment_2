#include <stdio.h>

#define MAX 100000

int a[MAX];

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int best = 1, current = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1])
            current++;
        else
            current = 1;
        if (current > best)
            best = current;
    }
    printf("%d\n", best);
    return 0;
}
