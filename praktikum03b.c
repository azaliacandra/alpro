#include <stdio.h>
int main () {

    int r, x, y;
    scanf ("%d", &r);
    scanf ("%d", &x);

    int dalam = 0;
    int luar = 0;

    while (x != -999){
        scanf ("%d", &y);
        
        if ((x*x + y*y) > r*r){
        luar = luar + 1;
        }
        else if ((x*x + y*y) < r*r){
        dalam = dalam + 1;
        }
    
        scanf ("%d", &x);
    }
  printf ("%d %d", dalam, luar);
    return 0;
}