#include <stdio.h>
int main () {

    float n;
    scanf ("%f", &n);

    int bulat;
    double desimal;

    bulat = (int) n;
    desimal = n - bulat;

    printf ("%d %.5lf", bulat, desimal);

    return 0;
}