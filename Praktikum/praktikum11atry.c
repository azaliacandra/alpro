#include <stdio.h>

int main () {

int n;
char a, b, c;

scanf ("%d", &n);
scanf (" %c%c%c", &a, &b, &c);

for (int i=1; i<=n; i++){
    if (i==1){
        printf ("%c", a);
    }
    else if (i==n){
        for (int j=1; j<n; j++){
            printf ("%c", b);
        }
        printf ("%c", c);
    }
    else {
        printf ("%c", a);
        for (int j=1; j<=i-2; j++){
        printf (" ");
        }
        printf ("%c", c);
    }
    printf ("\n");
}

return 0;
}

