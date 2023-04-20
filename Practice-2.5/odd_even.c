#include <stdio.h>

int main()
{
    int num;
    printf("Please enter a positive number:\n ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is a EVEN number", num);
    }
    else
    {
        printf("%d is a ODD number", num);
    }
    return 0;
}