#include <stdio.h>
int main () {

    double x, harga_awal;
    scanf ("%lf", &x);
    
    harga_awal = x/1.15;
    
    printf ("%.2lf", harga_awal);

    return 0;
}