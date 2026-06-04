#include <stdio.h>

int main () {
  
    int x, y;

    scanf ("%d %d", &x, &y);

    int a[x][y];
    int b[x][y];

    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            scanf ("%d", &a[i][j]);
        }
    }

    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            b[j][i]=a[i][j];
        }
    }

    for (int i=0; i<y; i++){
        for (int j=0; j<x; j++){
            printf ("%d ", b[i][j]);
        }
        printf ("\n");
    }

    return 0;


}