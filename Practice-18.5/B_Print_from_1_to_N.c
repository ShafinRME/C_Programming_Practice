#include <stdio.h>

int printg_Recursion_Normal_Number(int i, int k)
{

    printf("%d\n", i);
    if (i == k)
    {
        return 0;
    }
    printg_Recursion_Normal_Number(i + 1, k);
}

int main()
{
    int j;
    scanf("%d", &j);
    printg_Recursion_Normal_Number(1, j);
    return 0;
}