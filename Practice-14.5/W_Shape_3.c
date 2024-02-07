#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int l = n;
    int o = 1;

    for (int j = 1; j <= n; j++)
    {
        for (int k = 1; k < l; k++)
        {
            printf(" ");
        }
        l = l - 1;
        for (int m = 1; m <= 2 * o - 1; m++)
        {
            printf("*");
        }
        printf("\n");
        o++;
    }
    int z = n;
    for (int j = 1; j <= n; j++)
    {
        for (int m = 1; m < j; m++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * z - 1; k++)
        {
            printf("*");
        }
        z = z - 1;
        printf("\n");
    }
    return 0;
}