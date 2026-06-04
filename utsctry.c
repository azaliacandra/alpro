#include <stdio.h>

int main () {

    int n, q;
    int A[50005];
    long long p[50005];
    int a, b;
    double rata_rata;

    scanf ("%d %d", &n, &q);

    p[0] = 0;

    for (int i=1; i<=n; i++){
        scanf ("%d", &A[i]);
        p[i] = p[i-1] + A[i];
    }

    for (int j=0; j<q; j++){
        scanf ("%d %d", &a, &b);

        long long total = p[b] - p[a-1];
        
        rata_rata = (double)total / (b - a + 1);

        printf ("Hari ke %d-%d: %.2lf\n", a, b, rata_rata);
    }

    return 0;
}