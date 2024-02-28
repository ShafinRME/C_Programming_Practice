#include <stdio.h>

int summation(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int outSum = summation(num1, num2);

    printf("%d", outSum);
    return 0;
}