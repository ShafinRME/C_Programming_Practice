#include <stdio.h>
#include <string.h>

int main()
{
    int m, n, i;

    scanf("%d %d", &n, &m);

    int numbers[n];
    int count[m + 1];
    for (i = 1; i <= m; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
        count[numbers[i]]++;
    }

    for (i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}