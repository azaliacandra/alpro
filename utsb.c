#include <stdio.h>
int main () {
    int a[7];
    char *b[ ] = {"Minggu","Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};
    int total = 0;
    int max = 0;
    int index = 0;

    for (int i=0; i<7; i++){
        scanf ("%d", &a[i]);
        total += a[i];

        if (a[i] > max) {
        max = a[i];
        index = i;
        }
    } 

        double rata_rata = (double)total/7;
        printf ("%.2lf\n", rata_rata);
        printf ("%d\n", max);
        printf ("%s\n", b[index]);

        return 0;
}