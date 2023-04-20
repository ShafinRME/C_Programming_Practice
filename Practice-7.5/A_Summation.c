#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, n;
    long long int sum = 0;
    scanf("%d", &n);
    if (n >= 1 && n <= 100000)
    {
        int arr[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }
    }
    if (sum < 0)
    {
        sum = sum * (-1);
        printf("%d\n", sum);
    }
    else
    {
        printf("%d\n", sum);
    }

    return 0;
}