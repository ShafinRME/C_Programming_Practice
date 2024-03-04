#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, m, n;

    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int inputNum, flag = 0;
    scanf("%d", &inputNum);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] == inputNum)
            {
                flag++;
            }
            else
            {
                continue;
            }
        }
    }
    if (flag == 0)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }
    return 0;
}