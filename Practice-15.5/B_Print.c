#include <stdio.h>

int printingToN(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i < n)
        {
            printf(" ");
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int m;
    scanf("%d", &m);
    printingToN(m);
    return 0;
}