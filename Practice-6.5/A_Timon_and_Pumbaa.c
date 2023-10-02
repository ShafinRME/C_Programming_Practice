#include <stdio.h>

int main()
{
    int num1, num2, subtraction;

    scanf("%d %d", &num1, &num2);
    if (num1 - num2 >= 0)
    {
        subtraction = num1 - num2;
        printf("%d\n", subtraction);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}