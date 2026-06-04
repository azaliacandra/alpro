#include <stdio.h>
int main () {

    int n, kecepatan, waktu;
    scanf ("%d", &n);
    
    int awal = 0;
    int jarak = 0;

    for (int i=0; i<n; i++) {
    scanf ("%d %d", &kecepatan, &waktu); 
    jarak += kecepatan * (waktu-awal);

    awal = waktu;
    }
    printf ("%d", jarak);

    return 0;

}