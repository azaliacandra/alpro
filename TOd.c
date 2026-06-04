#include <stdio.h>
int main () {
    int idx =1; 
    int a[100005]; 

    while (1<2){
    scanf ("%d", &a[idx++]);
    if (a[idx == -9]) break;
    }

    int b[100005], res = 0
    for (int i=1; i<idx-1; i++){
            b[i] = a[i];
            
        for (int j=1; j<i; j++){
            if (a[i]>a[j])
                if (a[1]+b[j] > b[i])
                b[i] = a[i] + b[j];
            }    
            if (b[i]>res)
            res= b[i]
    }
    printf ("%d", &res);

    return 0;
}