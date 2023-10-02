#include <stdio.h>

int main()
{
    int num, num1, num2;
    scanf("%d", &num);

    num1 = num % 10;
    num2 = num / 10;

    if (num1 % num2 == 0 || num2 % num1 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}