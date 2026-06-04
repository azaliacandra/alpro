#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char ch;
    int f[26]={0};

    while ((ch=getchar())!=EOF)
    {
        if (ch=='a') f[ch]++;
    }

    for (int i=0; i<26; i++)
        if (f[i]) printf("%d", f[i]);
        

    return 0;
}