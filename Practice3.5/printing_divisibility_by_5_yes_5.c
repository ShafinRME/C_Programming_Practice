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
            if (i % 5 == 0)
            {
                printf("%d Yes\n", i);
            }
            else
            {
                printf("%d No\n", i);
            }
        }
    }
    return 0;
}
