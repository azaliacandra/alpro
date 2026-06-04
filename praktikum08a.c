#include <stdio.h>
int main(){
    int a;
    int freq[201] = {0};

    scanf ("%d", &a);

    for (int i = 0; i < a; i++) {
        int x;
        scanf("%d", &x);
        freq[x+100]++;
    }

    for (int i = 0; i < 201; i++) {
        if (freq[i]>0){
             printf("%d ada %d\n", i-100, freq[i]);
        }
    }

    return 0;
}