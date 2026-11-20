#include <stdio.h>

#define MAX 100005

int main(void) {
    static char s[MAX];
    scanf("%100000s", s);

    int i = 0;
    while (s[i] != '\0') {
        int run = 1;
        while (s[i + run] == s[i])
            run++;
        printf("%c%d", s[i], run);
        i += run;
    }
    printf("\n");
    return 0;
}
