#include <stdio.h>

int printing_Recursion(int i, int k)
{

    printf("I love Recursion\n");
    if (i == k)
    {
        return 0;
    }
    printing_Recursion(i + 1, k);
}

int main()
{
    int j;
    scanf("%d", &j);
    printing_Recursion(1, j);
    return 0;
}