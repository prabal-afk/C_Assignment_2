#include <stdio.h>

#define MAX 10005

int main(void) {
    char line[MAX];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    if (fgets(line, MAX, stdin) == NULL)
        line[0] = '\0';

    for (int i = 0; line[i] != '\0'; i++) {
        char c = line[i];
        if (c >= 'A' && c <= 'Z')
            c = c + ('a' - 'A');

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vowels++;
        else if (c >= 'a' && c <= 'z')
            consonants++;
        else if (c >= '0' && c <= '9')
            digits++;
        else if (c == ' ')
            spaces++;
    }
    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);
    return 0;
}
