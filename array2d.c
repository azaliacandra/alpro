#include <stdio.h>
int main () {
    
    int m, n;
    int matrix[100][100];

    scanf ("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf ("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = n-1; j >= 0 ; j--) {
            if (j>0) {
                printf ("%d ", matrix[i][j]);
            }
            else {
                printf ("%d", matrix[i][j]);
            }
        } 
        printf ("\n");
    }

    return 0;
}