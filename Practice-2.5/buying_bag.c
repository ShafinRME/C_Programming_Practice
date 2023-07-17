#include <stdio.h>

int main()
{
    int taka;
    printf("Enter the amount : \n");
    scanf("%d", &taka);
    if (taka >= 10000)
    {
        printf("I am going to buy Gucci Bag\n");
        {
            if (taka > 20000)
            {
                printf("and Gucci Belt too\n");
            }
        }
    }
    else if (taka >= 5000)
    {
        printf("I am going to buy Levis Bag\n");
    }
    else
    {
        printf("I am going to New Market to buy something new.\n");
    }
    return 0;
}