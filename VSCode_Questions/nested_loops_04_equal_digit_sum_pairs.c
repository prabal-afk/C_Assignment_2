#include <stdio.h>

#define MAX 10000

int digitSum(long long x) {
    int sum = 0;
    if (x < 0) x = -x;
    while (x > 0) {
        sum += (int)(x % 10);
        x /= 10;
    }
    return sum;
}

int main(void) {
    int n, sums[MAX];
    long long count = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        long long v;
        scanf("%lld", &v);
        sums[i] = digitSum(v);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sums[i] == sums[j])
                count++;
        }
    }
    printf("%lld\n", count);
    return 0;
}
