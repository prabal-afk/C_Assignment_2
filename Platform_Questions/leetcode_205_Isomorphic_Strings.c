#include <stdbool.h>

bool isIsomorphic(char* s, char* t) {
    int lastS[256] = {0};   /* last position (1-based) where each char of s was seen */
    int lastT[256] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char a = (unsigned char)s[i];
        unsigned char b = (unsigned char)t[i];
        if (lastS[a] != lastT[b])
            return false;
        lastS[a] = lastT[b] = i + 1;
    }
    return true;
}
