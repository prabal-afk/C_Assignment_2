#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main(void) {
    long long n, m;
    long long count = 0;

    scanf("%lld %lld", &n, &m);
    for (long long x = 1; x <= m; x++) {
        if (gcd(x, n) == 1)
            count++;
    }
    printf("%lld\n", count);
    return 0;
}
