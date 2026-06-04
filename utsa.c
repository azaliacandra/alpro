#include <stdio.h>
int main () {
    int p, n;

    scanf ("%d %d", &p, &n);
    int total = p*n;
    double akhir = (double)total*0.1 + total;

    printf ("%.2lf", akhir);

    return 0;
}