#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = n;
    int m = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j < k; j++)
        {
            printf(" ");
        }
        k = k - 1;

        for (int l = 1; l <= 2 * m - 1; l++)
        {
            printf("*");
        }
        printf("\n");
        m++;
    }
    return 0;
}