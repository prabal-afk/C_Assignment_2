#include <stdio.h>

long long maxOfThree(long long a, long long b, long long c) {
    long long max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main(void) {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld\n", maxOfThree(a, b, c));
    return 0;
}
