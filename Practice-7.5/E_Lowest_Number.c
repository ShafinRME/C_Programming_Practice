#include <stdio.h>

int main()
{
    int i, n, min;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else
        {
            continue;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            printf("%d %d", min, i + 1);
            break;
        }
    }
    return 0;
}