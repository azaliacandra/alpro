#include <stdio.h>
#include <stdlib.h>

int main() {
    int *A = (int *)malloc(2005 * sizeof(int));
    int *B = (int *)malloc(2005 * sizeof(int));

    if (A == NULL || B == NULL) {
        return 1; 
    }

    int n = 0, m = 0;
    int input;

    while (scanf("%d", &input) == 1 && input != -9) {
        A[n++] = input;
    }

    while (scanf("%d", &input) == 1 && input != -9) {
        B[m++] = input;
    }

    int i = 0, j = 0;
    int is_first = 1; 

    while (i < n && j < m) {
        if (!is_first) printf(" ");
        
        if (A[i] <= B[j]) {
            printf("%d", A[i++]);
        } else {
            printf("%d", B[j++]);
        }
        is_first = 0;
    }

    while (i < n) {
        if (!is_first) printf(" ");
        printf("%d", A[i++]);
        is_first = 0;
    }

    while (j < m) {
        if (!is_first) printf(" ");
        printf("%d", B[j++]);
        is_first = 0;
    }
    
    printf("\n");

    free(A);
    free(B);

    return 0;
}