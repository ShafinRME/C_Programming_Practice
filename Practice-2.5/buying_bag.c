#include <stdio.h>

int main()
{
    int taka;
    printf("Enter the amount : \n");
    scanf("%d", &taka);
    if (taka >= 10000)
    {
        printf("I am going to buy Gucci Bag ");
        {
            if (taka > 20000)
            {
                printf(" and Gucci Belt too");
            }
        }
    }
    else if (taka >= 5000)
    {
        printf("I am going to buy Levis Bag");
    }
    else
    {
        printf("I am going to New Market to buy something new.");
    }
    return 0;
}