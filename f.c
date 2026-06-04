#include <stdio.h>
int main(){
    int m, n;
    int mat[1000][1000];

    scanf("%d %d", &m, &n);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < m/2; i++){
        for(int j = 0; j < n; j++){
            int temp = mat[i][j];
            mat[i][j] = mat [m-i-1][j];
            mat[m-i-1][j] = temp;
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}