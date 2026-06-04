#include <stdio.h>

#define MAXN 100000

int main() {
    int N;
    long long prefix[MAXN];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%lld", &prefix[i]);
    }

    int p;
    int first = 1;

    while (scanf("%d", &p) == 1 && p != -9) {
        long long ans;

        // posisi input mulai dari 1
        if (p == 1) {
            ans = prefix[0];
        } else {
            ans = prefix[p - 1] - prefix[p - 2];
        }

        if (!first) printf(" ");
        printf("%lld", ans);
        first = 0;
    }

    printf("\n");

    return 0;
}