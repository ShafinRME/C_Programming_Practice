#include <stdio.h>

int minMax(int arr[], int n)
{
    int i;
    int min = arr[0];
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
    int max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else
        {
            continue;
        }
    }

    printf("%d %d", min, max);
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    minMax(arr, n);

    return 0;
}