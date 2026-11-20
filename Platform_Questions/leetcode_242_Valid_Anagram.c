#include <stdbool.h>

bool isAnagram(char* s, char* t) {
    int count[26] = {0};
    int i = 0;

    for (; s[i] != '\0'; i++)
        count[s[i] - 'a']++;

    int j = 0;
    for (; t[j] != '\0'; j++)
        count[t[j] - 'a']--;

    if (i != j)
        return false;

    for (int c = 0; c < 26; c++) {
        if (count[c] != 0)
            return false;
    }
    return true;
}
