#include <stdio.h>

int array_Even_Indices_Recursion(int arr[], int n)
{
    if (n == -1)
    {
        return 0;
    }
    if (n % 2 == 0)
    {
        printf("%d ", arr[n]);
    }
    array_Even_Indices_Recursion(arr, n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    array_Even_Indices_Recursion(arr, n - 1);
    return 0;
}