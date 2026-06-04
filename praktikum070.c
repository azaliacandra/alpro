#include <stdio.h>
int main () {
    int saldo = 1000000;
    int a;

    scanf ("%d", &a);

    if (a % 50000 == 0){
        if (a <= saldo){
            int sisa = saldo - a;
            printf ("Berhasil. Sisa saldo = %d rupiah.", sisa);
        }
        else {
            printf ("Saldo tidak cukup.");
        }
    }
    else {
        printf ("Penarikan harus kelipatan 50000 rupiah.");
    }
return 0;
}