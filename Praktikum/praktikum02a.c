#include <stdio.h>
int main () {

    int a, b, rata_rata;
    scanf ("%d %d", &a, &b);

    rata_rata = (a+b)/2;

    if ((a >= 40 && b >= 40) && (rata_rata > 60)) {
    printf ("LULUS");
    }
    else if ((a <= 40 || b <= 40) && (rata_rata > 60)) {
    printf ("LULUS BERSYARAT");
    }
    else {
    printf ("TIDAK LULUS");
    }
    return 0;
}