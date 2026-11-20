#include <string.h>

int strStr(char* haystack, char* needle) {
    int h = (int)strlen(haystack), n = (int)strlen(needle);

    for (int i = 0; i + n <= h; i++) {
        int j = 0;
        while (j < n && haystack[i + j] == needle[j])
            j++;
        if (j == n)
            return i;
    }
    return -1;
}
