#include <stdio.h>

int oddCount(int arr[], int n)
{
    int i, oddCount = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            oddCount++;
        }
    }

    return oddCount;
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

    int outOddCount = oddCount(arr, n);

    printf("%d", outOddCount);

    return 0;
}