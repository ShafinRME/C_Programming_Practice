#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int num, i;
    scanf("%d", &num);
    if (num >= 1 && num <= 1000)
    {
        for (i = 1; i <= num; i++)
        {
            printf("I Love Practice\n");
        }
    }
    return 0;
}
