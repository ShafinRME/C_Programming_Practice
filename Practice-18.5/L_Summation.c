#include <stdio.h>

long long int array_Summation_Recursion(int arr[], int n, int i, long long int sum)
{

    if (i > n - 1)
    {
        return sum;
    }
    sum = sum + arr[i];
    return array_Summation_Recursion(arr, n, i + 1, sum);
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
    long long int sum = array_Summation_Recursion(arr, n, 0, 0);
    printf("%lld", sum);
    return 0;
}