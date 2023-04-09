#include <stdio.h>

int main()
{
    int num;
    printf("Please enter a integer number:\n ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d is a Positive Number", num);
    }
    else if (num < 0)
    {
        printf("%d is a Negative number", num);
    }
    else
    {
        printf("%d is Zero", num);
    }
    return 0;
}