#include <stdio.h>

#define MAX 1005

int main() {
    int M, N;
    long long prefix[MAX][MAX];

    scanf("%d %d", &M, &N);

    // pakai indexing mulai 1
    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= N; j++) {
            scanf("%lld", &prefix[i][j]);
        }
    }

    int b, k;
    int first = 1;

    while (scanf("%d", &b) == 1 && b != -9) {
        scanf("%d", &k);

        long long ans = prefix[b][k];

        if (b > 1) ans -= prefix[b - 1][k];
        if (k > 1) ans -= prefix[b][k - 1];
        if (b > 1 && k > 1) ans += prefix[b - 1][k - 1];

        if (!first) printf(" ");
        printf("%lld", ans);
        first = 0;
    }

    printf("\n");

    return 0;
}