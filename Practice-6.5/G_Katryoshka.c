#include <stdio.h>

int main()
{
    long long int a, b, c, count = 0, sum;
    scanf("%lld %lld %lld", &a, &b, &c);
    if (a >= 1 && b >= 1 && c >= 1)
    {
        while (sum != 2)
        {
            a = a - 1;
            b = b - 1;
            c = c - 1;
            count++;
            a = a - 2;
            b = b - 1;
            c = c - 1;
            count++;
            a = a - 2;
            c = c - 1;
            count++;
            sum = a + b + c;
        }
        printf("%lld", count);
    }
    return 0;
}