#include <stdio.h>
int main () {

    int n, q;
    int A[60];
    long long p[60];
    int a, b;
    double rata_rata = 0;

    scanf ("%d", &n);

    for (int i=0; i<n; i++){
        scanf ("%d", &A[i]);
        p[i] = p[i-1] + A[i];

        for (int j=0; j<q; j++){
            scanf ("%d", &q);
            scanf ("%d %d", &a, &b);

            rata_rata += (double)p[b] - p[a];

            printf ("Hari ke %d-%d: %.2lf", a, b, rata_rata);
        }

    }
    return 0;
}