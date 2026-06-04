#include <stdio.h>
int main () {

    int a, b, c;
    scanf ("%d %d", &a, &b);

    double rata_rata = 0;
    int total = 0;
    int count = 0;

for (int i=1; i<=a; i++){
    scanf ("%d", &c);
    
    if (b!=0 && i%b == 0){
        total += c;
        count++;
    }
    if (count!=0){
        rata_rata = (double)total/count;
    }
}

    printf ("%.2lf", rata_rata);

    return 0;
}