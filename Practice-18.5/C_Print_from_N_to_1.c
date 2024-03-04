#include <stdio.h>

int printing_N_to_1_Recursion(int i)
{

    printf("%d", i);
    if (i == 1)
    {
        return 0;
    }
    printf(" ");

    printing_N_to_1_Recursion(i - 1);
}

int main()
{
    int i;
    scanf("%d", &i);
    printing_N_to_1_Recursion(i);
    return 0;
}