#include <stdio.h>

int main()
{
    int t, p, sub;
    scanf("%d %d", &t, &p);
    sub = t - p;
    if (sub >= 0)
    {
        printf("%d\n", sub);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}