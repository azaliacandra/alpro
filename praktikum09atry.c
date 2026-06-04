#include <stdio.h>
#include <string.h>

#define MAXN 100000
#define MAXSUM 2500005

int freq[MAXSUM];

int main() {
    int N;
    scanf("%d", &N);

    int x;
    int prefix = 0;
    long long count = 0;

    memset(freq, 0, sizeof(freq));

    // prefix sum 0 muncul 1 kali (subarray dari awal)
    freq[0] = 1;

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        prefix += x;

        if (prefix >= 47) {
            count += freq[prefix - 47];
        }

        freq[prefix]++;
    }

    printf("%lld\n", count);

    return 0;
}