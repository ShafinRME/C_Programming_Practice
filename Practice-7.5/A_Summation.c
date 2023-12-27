#include <stdio.h>
#include <math.h>

int main()
{
    long long int i, n, sum = 0;

    scanf("%lld", &n);
    long long int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        sum = sum + arr[i];
    }

    if (sum < 0)
    {
        sum = sum * -1;
    }

    printf("%lld\n", sum);
    return 0;
}