#include <stdio.h>

int main()
{
    int n, q;

    if (scanf("%d %d", &n, &q) != 2)
        return 0;

    long long p[n + 1];
    p[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        int rain;
        scanf("%d", &rain);
        p[i] = p[i - 1] + rain;
    }

    for (int k = 0; k < q; k++)
    {
        int a, b;
        if (scanf("%d %d", &a, &b) == 2)
        {
            long long total_hujan = p[b] - p[a - 1];
            int jumlah_hari = b - a + 1;
            double rata_rata = (double)total_hujan / jumlah_hari;
            printf("Hari ke %d-%d: %.2f\n", a, b, rata_rata);
        }
    }

    return 0;
}