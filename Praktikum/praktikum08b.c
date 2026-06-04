#include <stdio.h>

int main() {
    int m, n;
    int matrix[1000][1000];

    scanf ("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf ("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m/2; i++) {
        for (int j = 0; j < n; j++) {
            int temp = matrix [i][j];
            matrix[i][j] = matrix[i] [m-i-1];
            matrix[i] [m-i-1] = temp;
        }

        for (int i = 0; i < m; i++) {
            for  (int j = 0; j < n; j++) {
                printf("%d", matrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}