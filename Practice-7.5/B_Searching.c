#include <stdio.h>

int main()
{
    int i, n, count = 0, givenNum;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &givenNum);

    for (i = 0; i < n; i++)
    {
        if (givenNum == arr[i])
        {
            count++;
            printf("%d\n", i);
            break;
        }
        else
        {
            continue;
        }
    }
    if (count == 0)
    {
        printf("-1\n");
    }
    return 0;
}