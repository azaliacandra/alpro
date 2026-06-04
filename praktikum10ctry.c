#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int prefix[10005];
    prefix[0] = 0; 

    for (int i = 1; i <= n; i++) {
        int nilai;
        scanf("%d", &nilai);
        prefix[i] = prefix[i - 1] + nilai;
    }

    int l, r;
    while (scanf("%d", &l) == 1 && l != -9) {
        scanf("%d", &r);
        
        int total_jumlah = prefix[r] - prefix[l - 1];
        
        printf("%d\n", total_jumlah);
    }

    return 0;
}