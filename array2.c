#include <stdio.h>
int main () {
    int a[5];
    int total = 0;

    for (int i=0; i<5; i++){
    scanf ("%d", &a[i]);

    total += a[i];
    }
    
    int rata_rata = total/5;
    printf ("%d\n", total);
    printf ("%d\n", rata_rata);

return 0;
}