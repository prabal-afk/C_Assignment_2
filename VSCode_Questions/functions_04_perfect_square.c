#include <stdio.h>

int isPerfectSquare(unsigned long long n) {
    /* binary search on the root; 3037000500 is just above sqrt(2^63) so mid*mid never overflows */
    unsigned long long lo = 0, hi = 3037000500ULL;

    while (lo <= hi) {
        unsigned long long mid = lo + (hi - lo) / 2;
        unsigned long long sq = mid * mid;
        if (sq == n)
            return 1;
        if (sq < n)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return 0;
}

int main(void) {
    unsigned long long n;
    scanf("%llu", &n);
    printf("%d\n", isPerfectSquare(n));
    return 0;
}
