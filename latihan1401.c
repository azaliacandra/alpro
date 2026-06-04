#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* getln()
{
    char *str, c;
    int i = 0, j = 1;
    
    str = (char*)malloc(sizeof(char));
    while (c != '\n') {
        c = getc(stdin); 
        str = (char*)realloc(str, j * sizeof(char));
        str[i] = c;
        i++; j++;
    }
    str[i] = '\0'; 
    return str;
}

int main () {
  
    int n;
    char s[1000][2001];

    scanf ("%d", &n);
    for (int i=0; i<n; i++){
        s[i]=getln();
    }

    int q;
    while (scanf ("%d", &q) && q != -9){
    printf("%s\n", s[q-1]);
   }

return 0;
}