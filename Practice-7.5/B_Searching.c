#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i, n, m, count = 1;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    for (i = 0; i < n; i++)
    {
        if (m == arr[i])
        {
            count++;
            printf("%d\n", i);
            break;
        }
        else if (i == n - 1 && count == 1)
        {
            printf("-1\n");
        }
    }

    return 0;
}