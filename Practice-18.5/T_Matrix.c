#include <stdio.h>
#include <math.h>

int main()
{
    long long int i, j, n;

    scanf("%lld", &n);
    long long int arr[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%lld", &arr[i][j]);
        }
    }
    long long int sumFirstDiagonal = 0, sumSecondDiagonal = 0, difference;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                sumFirstDiagonal = sumFirstDiagonal + arr[i][j];
            }
            if (i + j == n - 1)
            {
                sumSecondDiagonal = sumSecondDiagonal + arr[i][j];
            }
        }
    }

    difference = (sumFirstDiagonal - sumSecondDiagonal);
    if (difference < 0)
    {
        difference = -1 * difference;
        printf("%lld", difference);
    }
    else
    {
        printf("%lld", difference);
    }
    return 0;
}