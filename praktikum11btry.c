#include <stdio.h>
#include <ctype.h>

int main() {
    int freq[26] = {0};
    char c;

    while ((c = getchar()) != EOF) {
        if (isalpha(c)) {
            c = tolower(c);
            freq[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c %d\n", 'a' + i, freq[i]);
        }
    }

    return 0;
}
