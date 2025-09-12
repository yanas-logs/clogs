#include "string_ops.h"
#include <string.h>

int str_length(const char *s) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

void str_reverse(char *s) {
    int i = 0, j = str_length(s) - 1;
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int str_compare(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}
