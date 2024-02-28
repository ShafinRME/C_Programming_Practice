#include <stdio.h>

int absolute(int num)
{

    if (num < 0)
    {
        num = num * (-1);
    }

    return num;
}

int main()
{
    int n;
    scanf("%d", &n);
    int outNum = absolute(n);

    printf("%d", outNum);

    return 0;
}