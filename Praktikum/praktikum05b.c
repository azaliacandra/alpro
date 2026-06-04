#include <stdio.h>
int main () {
    int x, n;
    scanf ("%d", &x);

    int digit;
   
    for (int i = 0; i<x; i++){
        scanf ("%d", &n);

        int asli = n;
        int balik = 0;
        
        while (n != 0){
        digit = n%10;
        balik = balik*10 + digit;
        n = n/10;
        }
        if (balik == asli){
        printf ("1");
        }       
        else{
        printf ("0");
        }
    }
    return 0;
}