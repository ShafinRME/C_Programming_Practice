#include <stdio.h>

int main()
{
    int i, n, indx_min, indx_max;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    // Find the Minimum number in this array.
    for (i = 0; i < n; i++)
    {
        if (min >= arr[i])
        {
            min = arr[i];
        }
        else
        {
            continue;
        }
    }
    // Find the  number in this array.
    int max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
        }
        else
        {
            continue;
        }
    }

    // Getting index of the minimum number in this array.
    for (i = 0; i < n; i++)
    {
        if (min == arr[i])
        {
            indx_min = i;
            break;
        }
    }
    // Getting index of the maximum number in this array.
    for (i = 0; i < n; i++)
    {
        if (max == arr[i])
        {
            indx_max = i;
            break;
        }
    }
    int temp = arr[indx_min];
    arr[indx_min] = arr[indx_max];
    arr[indx_max] = temp;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}