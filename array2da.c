#include <stdio.h>
int main () {
    
    int m, n;
    scanf ("%d %d", &m, &n);

    int s[m][n];

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            scanf ("%d", &s[i][j]);
        }
    }

    for (int j=0; j<n; j++){
        int tidak = 0;
        for (int i=0; i<m; i++){
            if (s[i][j]!=0){
                tidak += 1;
            }
        }
        printf ("%d ", tidak);
    } 

    return 0;
}